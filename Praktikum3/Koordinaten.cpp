/** * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 12/05/2022
 * @filename	: Koordinaten
 */
#ifndef KOORDINATEN_CPP
#define KOORDINATEN_CPP

#include <iostream>
#include <vector>
using namespace std;


int main(){
vector <vector <char> > Field;
Field.resize(50);
vector<char> row;
row.resize(10);
for(int i=0;i<50;i++){
Field.push_back(row);
}
int x=10;
int y=0;
for(int i=0;i<50;i++){
	for(int j=0;j<10;j++){
	if(i==0){ Field[i].push_back(static_cast<char>(x));
}else if(j==49 && (j+1)%10 == 0){Field[i].push_back(static_cast<char>(y));
}else Field[i].push_back('\n');
	
	}
}

for(int i=0;i<Field.size();i++){
	for(auto f : Field[i]){
	cout << f;
	}
}
}





 #endif /* KOORDINATEN_CPP */

