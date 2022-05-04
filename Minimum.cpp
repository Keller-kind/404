/**
 * @author		: Leopold Keller (poldikeller@googlemail.com)
 * @created		: 02/05/2022
 * @filename		: Minimum
 */
#ifndef MINIMUM_CPP
#define MINIMUM_CPP


#include <iostream>
#include <list>
using namespace std;

int main(){
char Eingabe;
int Anzahl, Eingabe1, Zwischenwert;
list<int> foo;
while (Eingabe != 'x'){
cout << "Menü" << endl;
cout << "1 - Anzahl festlegen " << endl;
cout << "2 - Zahlen eingeben " << endl;
cout << "3 - Minimum berechnen " << endl;
cout << "4 - Array Ausgeben " << endl;
cout << "x - Beenden" << endl;
cin >> Eingabe;
switch(Eingabe){
	case '1': 
		cout << "Geben Sie die gewünschte Anzahl ein: ";
		cin >> Anzahl;
		foo.resize(Anzahl);
		foo.clear();
		break;
	
	case '2': 
		for(int i=0;i < Anzahl; i++){
			cout << "Geben Sie die nächste Zahl ein: " ;
			cin >> Eingabe1;
			foo.push_back(Eingabe1);
		}
		cout << endl;
		break;
	
	case '3': 
		Zwischenwert=foo.front();
		for(auto i : foo){
			if(Zwischenwert > i) Zwischenwert = i;
		}
		cout << "Das Minimum ist " << Zwischenwert << endl;
		break;
	case '4':
		cout << "Der Inhalt des Arrays ist: {";
		for(auto i : foo){
		cout << i << ",";
		}
		cout << "}" << endl;
	default:
		break;
}
}
}





 #endif /* MINIMUM_CPP */

