#include <iostream>
using namespace std;

int main()
{
    /* Pointer is variable, so is String */
    char *p = "Hello";
    *p = 'M'; /* Works */
    p = "Bye"; /* Works */

    /* String is const, Pointer is not */
    /* Method 1: */
    const char *q = "Hello";
    *q = 'M'; /* Error */
    q = "Bye"; /* Works */

    /* Method 2: */
    char const *s = "Hello";
    *s = 'M'; /* Error */
    s = "Bye"; /* Works */

    /* Pointer is const, String is not */
    char *const t = "Hello";
    *t = 'M'; /* Works */
    t = "Bye"; /* Error */

    /* String is const, so is Pointer */
    const char *const u = "Hello";
    *u = 'M'; /* Works */
    u = "Bye"; /* Error */

}



/* OUTPUT: $ g++ -o pointer_and_const pointer_and_const.cpp
pointer_and_const.cpp: In function ‘int main()’:
pointer_and_const.cpp:7:15: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
     char *p = "Hello";
               ^
pointer_and_const.cpp:9:7: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
/     p = "Bye"; /\* Works */
/*       ^
pointer_and_const.cpp:14:8: error: assignment of read-only location ‘* q’
     *q = 'M'; /\* Error */
/*        ^
pointer_and_const.cpp:19:8: error: assignment of read-only location ‘* s’
     *s = 'M'; /\* Error */
/*        ^
pointer_and_const.cpp:23:21: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
     char *const t = "Hello";
          ^
pointer_and_const.cpp:25:7: error: assignment of read-only variable ‘t’
     t = "Bye"; /\* Error */
/*       ^
pointer_and_const.cpp:25:7: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
pointer_and_const.cpp:29:8: error: assignment of read-only location ‘*(const char*)"Hello"’
     *u = 'M'; /\* Works */
/*        ^
pointer_and_const.cpp:30:7: error: assignment of read-only variable ‘u’
     u = "Bye"; /\* Error */
/*       ^
*/
