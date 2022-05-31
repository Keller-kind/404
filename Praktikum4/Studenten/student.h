/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: student
 */
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
using namespace std;
class Student{
	public:
			Student(string vorname, string nachname, char geschlecht, int matrikelnummer);
			Student();
			string getVorname();
			string getNachname();
			char getGeschlecht();
			int getMatrikelnummer();
			void setVorname(string vorname);
			void setNachname(string nachname);
			void setGeschlecht(char geschlecht);
			void setMatrikelnummer(int matrikelnummer);


	private: 
			string Vorname;
			string Nachname;
			char Geschlecht;
			int Matrikelnummer;



};




 #endif /* STUDENT_H */

