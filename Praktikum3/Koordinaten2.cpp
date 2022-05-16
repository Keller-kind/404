/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 16/05/2022
 * @filename	: Koordinaten2
 */
#ifndef KOORDINATEN2_CPP
#define KOORDINATEN2_CPP

#include <iostream>
using namespace std;


int main(){
const int rows = 50;
const int cols = 10;
char matrix[rows][cols]={" "};
int x=10;
int y=0;
for (int i=0;i< rows; i++){
	for (int j=0; j<cols;j++){
		if(i==0){matrix[i][j]=static_cast<char>(x); x--;}
		if(j==49 && (j+1)%10 == 0){matrix[i][j]=static_cast<char>(y/10); y++;}
	}

}
for (int i=0; i<cols; i++){
	for(int j=0; j<rows; j++){
	cout << matrix[i][j];	





		}
	}



}





 #endif /* KOORDINATEN2_CPP */

