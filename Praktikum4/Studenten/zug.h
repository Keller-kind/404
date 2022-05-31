/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: zug
 */
#ifndef ZUG_H
#define ZUG_H
#include "student.h"
#include <vector>
using namespace std;
class Zug{

		private: 
				vector<Student> m_Studenten;

		public:
				Zug();
				void imm(string vorname, string nachname, char geschlecht, int matrikelnummer);
				bool exm(int a);
				void printZug();
};





 #endif /* ZUG_H */

