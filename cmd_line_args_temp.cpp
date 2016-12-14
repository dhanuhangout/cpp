#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class CVariables {
  public:
    int rl_dg = 32;
    int rl_ag = 3;
    int rl_et = 3996;
};

enum arg_code {
  eDg = 0,
  eAg,
  eEt,
  eUnknow_value
};

arg_code get_arg(string const& instr){
  if(instr == "d_g") return eDg;
  if(instr == "a_g") return eAg;
  if(instr == "e_t") return eEt;
  else return eUnknow_value;
}

void update_args(int argc, char **argv, CVariables *test) {
  //cout << "argv = " << argv[1] << endl;
  //test->rl_dg = atoi(argv[2]);
  string cmd_line_args[] = {"d_g", "a_g", "e_t"};
  int i;
  switch (argc) {
    case 1:
      cout << "No args passed. Nothing to update." << endl;
      break;
    case 3:
      cout << "Two args passed. : " << argv[1] << "  " << argv[2] << endl;
      //string option = cmd_line_args[1];
      switch(get_arg(argv[1])) {
        //case "d_g":
        case eDg:
	  cout << "D_G arg: " << atoi(argv[2]) << endl;
          test->rl_dg = atoi(argv[2]);
          break;
        case eAg:
          test->rl_ag = atoi(argv[2]);
          break;
        case eEt:
          test->rl_et = atoi(argv[2]);
          break;
        default:
          cout << "MISS MATCH IN ARG : " << argv[1] << endl;
          return;
      }
      break;
    case 5:
      cout << "Four args passed. : " << argv[1] << "  " << argv[2] << "  " << argv[3] << "  " << argv[4] << endl;
      for (i=1; i<5; i=i+2) {
        switch(get_arg(argv[i])) {
          case eDg:
	    test->rl_dg = atoi(argv[i+1]);
	    break;
	  case eAg:
	    test->rl_ag = atoi(argv[i+1]);
	    break;
	  case eEt:
	    test->rl_et = atoi(argv[i+1]);
	    break;
	  default:
	    cout << "MISS MATCH IN ARG : " << argv[i] << endl;
	    return;
	}
      }
      break;
    case 7:
      cout << "Six args passed. : " << argv[1] << "  " << argv[2] << "  " << argv[3] << "  " << argv[4] << "  " << argv[5] << "  " << argv[6] << endl;
      for (i=1; i<7; i=i+2) {
        switch(get_arg(argv[i])) {
          case eDg:
	    test->rl_dg = atoi(argv[i+1]);
	    break;
	  case eAg:
	    test->rl_ag = atoi(argv[i+1]);
	    break;
	  case eEt:
	    test->rl_et = atoi(argv[i+1]);
	    break;
	  default:
	    cout << "MISS MATCH IN ARG : " << argv[i] << endl;
	    return;
	}
      }
      break;
    default:
      cout << "MISS MATCH IN ARGS." << endl;
      break;
  }
  cout << "Size = " << sizeof(cmd_line_args) << endl;
  return;
}

int main(int argc, char *argv[]) {
  string cmd_line_args[] = {"d_g", "a_g", "e_t"};
  CVariables test;
  update_args(argc, argv, &test);
  cout << "dg = " << test.rl_dg << endl;
  cout << "ag = " << test.rl_ag << endl;
  cout << "et = " << test.rl_et << endl;
  cout << "FLAG = " << true << endl;
  return 0;
}

/*
Usage:
./cmd_line_args_temp
./cmd_line_args_temp a_g 12 e_t 50
./cmd_line_args_temp d_g 5 a_g 12 e_t 50
./cmd_line_args_temp d_g 5 a_g 12 e 50
*/
