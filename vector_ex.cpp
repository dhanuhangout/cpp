#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <std::string> var;
  var.push_back("value1");
  var.push_back("value2");
  var.push_back("value3");
  var.push_back("value4");

  for (int i = 0; i < var.size(); i++)
    cout << var[i] << endl;
  return 0;
}
