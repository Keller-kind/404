/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 12/05/2022
 * @filename	: Koordinaten
 */
#ifndef KOORDINATEN_CPP
#define KOORDINATEN_CPP

#include <iostream>
#include <vector>
using namespace std;

const int rows = 50;
const int lines = 10;
void FillField(char** matrix[rows][lines]){
int x=10;
int y=0;
for(int i=0; i<lines;i++){
	for(int j=0; j<rows;j++){
		if(i==0){matrix[i][j] =(char) x; x--;}
		if(j==49){matrix[i][j] =(char) y/10; y++;}


	}
}
}

void DrawField(char** matrix[rows][lines]){
for(int i=0;i<lines;i++){
	for(int j=0; j<rows;j++){
		switch(matrix[i][j]){
			case '0': cout << "0";
					break;
			case '1': cout << "1";
					break;
			case '2': cout << "2";
					break;	
			case '3': cout << "3";
					break;
			case '4': cout << "4";	
					break;
			case '5': cout << "5";	
					break;
			case '6': cout << "6";	
					break;
			case '7': cout << "7";	
					break;
			case '8': cout << "8";	
					break;
			case '9': cout << "9";	
					break;
			case 'x': cout << "x";	
					break;
			default: cout << " ";
					break;

		}
	
	}
}
}

int main(){
char matrix[rows][lines];

FillField(matrix[][]);
DrawField(matrix[][]);

}





 #endif /* KOORDINATEN_CPP */

