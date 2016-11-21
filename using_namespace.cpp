#include <iostream>
using namespace std;

namespace first {
  int x = 5, y = 10;
}

namespace second {
  double x = 3.1416, y = 2.7183;
}

int main() {
  /* Demonstrating how to use using namespace keywords. */
  {
    using namespace first;
    cout << y << endl;
  }
  {
    using namespace second;
    cout << y << endl;
  }
  /* Demonstrating how to use using keyword. */
  using first::x;
  using second::y;
  cout << x << endl << y << endl;
  cout << first::y << endl << second::x << endl;
  return 0;
}
