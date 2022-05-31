/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: student
 */
#ifndef STUDENT_CPP
#define STUDENT_CPP

#include <iostream>
#include <string>
#include "student.h"
using namespace std;
Student::Student(string vorname, string nachname, char geschlecht, int matrikelnummer) : Vorname(vorname), Nachname(nachname), Geschlecht(geschlecht), Matrikelnummer(matrikelnummer){
}
Student::Student(){}
string Student::getVorname(){
return Vorname;
}
string Student::getNachname(){
return Nachname;
}
char Student::getGeschlecht(){
return Geschlecht;
}
int Student::getMatrikelnummer(){
return Matrikelnummer;
}
void Student::setVorname(string vorname){
Vorname = vorname;
}
void Student::setNachname(string nachname){
Nachname = nachname;
}
void Student::setGeschlecht(char geschlecht){
Geschlecht = geschlecht;
}
void Student::setMatrikelnummer(int matrikelnummer){
Matrikelnummer = matrikelnummer;
}




 #endif /* STUDENT_CPP */

