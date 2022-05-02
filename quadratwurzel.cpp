/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 02/05/2022
 * @filename		: quadratwurzel
 */
#ifndef QUADRATWURZEL_CPP
#define QUADRATWURZEL_CPP

#include <iostream>
using namespace std;


int main(){
double Basiszahl,Zwischenwert,letzter_Zwischenwert;
cout << "Geben Sie eine reelle Zahl ein: ";
cin >> Basiszahl;

Zwischenwert = Basiszahl;

do{
letzter_Zwischenwert = Zwischenwert;

Zwischenwert = 0.5 * (Zwischenwert + (Basiszahl/Zwischenwert));


}while(letzter_Zwischenwert-Zwischenwert > 0.001);
cout << Zwischenwert;
}





 #endif /* QUADRATWURZEL_CPP */

