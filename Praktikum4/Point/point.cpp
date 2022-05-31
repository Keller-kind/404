/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 31/05/2022
 * @filename	: point
 */
#ifndef POINT_CPP
#define POINT_CPP

#include <iostream>
#include <math.h>
#include "point.h"
using namespace std;
Point::Point() : x(0), y(0){}
Point::Point(int xinp, int yinp) : x(xinp), y(yinp){}
void Point::display(){
cout << x << "," << y << endl;
}
void Point::moveTo(int xinp, int yinp){
x=xinp;
y=yinp;
}
void Point::shift(int xinp, int yinp){
x+=xinp;
y+=yinp;
}
float Point::distance(Point b){
float a = sqrt(pow((b.getX()-x),2) + pow((b.getY()-y),2));
return a;
}
int Point::getX(){
return x;
}
int Point::getY(){
return y;
}





 #endif /* POINT_CPP */

