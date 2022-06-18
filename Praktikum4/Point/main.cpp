/**
 * @author      : Leopold Keller (leopold.keller@stud.h-da.de)
 * @file        : main
 * @created     : Tuesday May 31, 2022 11:03:24 CEST
 */

#include <iostream>

#include "point.h"
using namespace std;
int
main ()
{
  Point a = Point (1, 2);
  Point b = Point (4, 5);
  int x = a.distance (b);
  cout << x << endl;
  a.display ();
  a.moveTo (8, 9);
  a.display ();
  a.shift(1,1);
  a.display();


}
