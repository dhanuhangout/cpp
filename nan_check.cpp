#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

int main( )
{
   cout << "The quiet NaN for type float is:  "
        << numeric_limits<float>::quiet_NaN( )
        << endl;

   float f_nan = numeric_limits<float>::quiet_NaN();

   if( isnan(f_nan) )
   {
       cout << "Float was Not a Number: " << f_nan << endl;
   }

   return 0;
}
