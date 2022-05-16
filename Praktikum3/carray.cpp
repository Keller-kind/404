/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 14/05/2022
 * @filename	: carray
 */
#ifndef CARRAY_CPP
#define CARRAY_CPP

#include <iostream>
using namespace std;


int main(){
int array[20];
for(int i=0; i<20; i++){
array[i]=NULL;	

}
while(true){
int Eingabe, Input;

cout << "Geben Sie die Aktion ein die sie durchfuehren moechten: " << endl;
cout << "i - Neuen Wert eingeben" << endl;
cout << "s - Ausgabe der Menge an belegten Feldern" << endl;
cout << "o - Ausgabe der belegten Felder" << endl;
cout << "d - Loeschen des ersten Elements" endl;
cout << "q - beenden des Programms" << endl;
cin >> Eingabe;

switch(Eingabe){
	case 'i': 
		for(int i=0; i<20; i++){
			if(array[i]==NULL){
			cout << "Geben sie den gewuenschten wert ein: ";
			cin >> Input;
			array[i] = Input;
			}
		if(i==19) cout << "Das Array ist voll!";
		
		}
			break;





}




}

}





 #endif /* CARRAY_CPP */

