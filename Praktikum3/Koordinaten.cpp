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

void FillField(vector<vector<char>> &matrix, vector<char> &lines){
int x=10;
int y=0;
for(int i=0; i<matrix.size();i++){
	for(int j=0; j<lines.size();j++){
		if(i==0){matrix[i][j] = x; x--;}
		if(j==49){matrix[i][j] = y/10; y++;}


	}
}
}

void DrawField(vector<vector<char>> matrix, vector<char> lines){
for(int i=0;i<matrix.size();i++){
	for(int j=0; j<lines.size();j++){
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
vector<vector<char>> matrix;
vector<char> lines;
lines.resize(10);
for(int i=0; i<matrix.size();i++){

matrix[i].resize(50);
}
FillField(matrix,lines);
DrawField(matrix,lines);

}





 #endif /* KOORDINATEN_CPP */

