#include <iostream>
using namespace std;

/* Funtion overload example 1:
 * This example explains two functions with same func name arith_op() and
 * DIFFERENT FUNCTIONALITY, but differ in return type and type of arguments
 * passed. */
int arith_op(int a, int b) {
  return (a*b);
}

double arith_op(double a, double b) {
  return (a/b);
}

/* Function overload example 2:
 * This example explains with same func name arith_add() and FUNCTIONALITY, but
 * differ in return type and type of arguments passed. */
int arith_add(int a, int b) {
  return a+b;
}

int arith_add(double a, double b) {
  return a+b;
}

int main(){
  int x=5, y=2;
  double n=5.0, m=2.0;
  /* Demonstrating example 1. */
  cout << arith_op(x,y) << endl;
  cout << arith_op(n,m) << endl;
  /* Demonstrating example 2. */
  cout << arith_add(x,y) << endl;
  cout << arith_add(n,m) << endl;
  return 0;
}
