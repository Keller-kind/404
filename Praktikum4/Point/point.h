/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 31/05/2022
 * @filename	: point
 */
#ifndef POINT_H
#define POINT_H

class Point{
		private: 
				int x;
				int y;

		public:
				Point();
				Point(int xinp, int yinp);
				void display();
				void moveTo(int xinp, int yinp);
				void shift(int xinp, int yinp);
				float distance(Point b);
				int getX();
				int getY();




};




 #endif /* POINT_H */

