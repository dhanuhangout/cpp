#include <iostream>
using namespace std;

/* Function template example:
 * This example demonstrates the function overloading example in simplify way,
 * using function template.
 * If the function overload has same functionality, then we go with function
 * template. */
template <class T>
T arith_add(T a, T b) {
  T result;
  result = a + b;
  return result;
}

int main() {
  int x=5, y=2;
  double n=5.0, m=2.0;
  /* Demonstrating function template. */
  cout << arith_add(x,y) << endl;
  cout << arith_add(n,m) << endl;
  return 0;
}
