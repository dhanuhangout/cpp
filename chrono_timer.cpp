#include <chrono>
#include <iostream>
// using namespace std::chrono;

int main() {
  std::chrono::high_resolution_clock::time_point t1, t2;
  // highresolution_clock::time_point t1, t2;
  t1 = std::chrono::high_resolution_clock::now();
  // t1 = highresolution_clock::now();
  int i;
  for(i=0; i<30; i++);
  t2 = std::chrono::high_resolution_clock::now();
  // t2 = highresolution_clock::now();
  std::cout << "t1 = " << t1.count() << "\n";// << "t2 = " << t2 << std::endl;
  return 0;
}

/*
 * Ref:
 * http://stackoverflow.com/questions/538609/high-resolution-timer-with-c-and-linux
 * http://stackoverflow.com/questions/26128035/c11-how-to-print-out-high-resolution-clock-time-point
 * http://www.informit.com/articles/article.aspx?p=1881386&seqNum=2
 * https://www.guyrutenberg.com/2013/01/27/using-stdchronohigh_resolution_clock-example/
 * http://en.cppreference.com/w/cpp/chrono/time_point
 * https://solarianprogrammer.com/2012/10/14/cpp-11-timing-code-performance/
 *
 * Compile: g++ -o chrono_timer -std=c++11 chrono_timer.cpp
 */
