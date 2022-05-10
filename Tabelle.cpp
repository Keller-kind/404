/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 03/05/2022
 * @filename		: Tabelle
 */
#ifndef TABELLE_CPP
#define TABELLE_CPP
#include <vector>
#include <iostream>
using namespace std;


int main(){

int size;
cout << "Wie groß soll die Tabelle sein: ";
cin >> size;
int foo[size][size];
for(int i=0; i<size; i++){
foo[0][i] = i;
foo[i][0] = i;

	}
for(int i=0; i<=size; i++){
	for(int j=0; j<=size; j++){
	
			if(i!=0 && j!=0)foo[i][j] = i*j;
	cout << foo[i][j] << "\t";
	if(j==size)	cout << endl;
	}
}

}




 #endif /* TABELLE_CPP */

