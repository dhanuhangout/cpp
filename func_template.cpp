#include <iostream>
using namespace std;

/* Function template example 1:
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

/* Function template example 2:
 * This example demonstrates the function with difference in arguments type. */
template <class T, class U>
T arith_equal(T a, U b) {
  return (a == b);
}

/* Function template example 3:
 * This example demonstrates the function with Non type arguments. */
template <class T, int N>
T arith_mul(T a) {
  return (a * N);
}

int main() {
  int x=5, y=2;
  double n=5.0, m=2.0;
  /* Demonstrating example 1. */
  cout << arith_add(x, y) << endl;
  cout << arith_add(n, m) << endl;
  /* Demonstrating example 2. */
  if (arith_equal(y, m))
    cout << "y and m are equal" << endl;
  else
    cout << "y and m are not equal" << endl;
  /* Demonstrating example 3. */
  cout << arith_mul<int, 2>(x) << endl;
  return 0;
}
