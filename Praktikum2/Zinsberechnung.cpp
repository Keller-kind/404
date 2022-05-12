#include <iostream>
using namespace std;

int main(){
double Grundkapital, Zinssatz, Zwischenwert;
int Laufzeit;

cout << "Geben Sie das Grundkapital an: ";
cin >> Grundkapital;
cout << "Geben Sie den Zinssatz an: ";
cin >> Zinssatz;
cout << "Geben Sie die Laufzeit an: ";
cin >> Laufzeit;
Zwischenwert = Grundkapital;
for(int i=0; i< Laufzeit; i++){
Zwischenwert = (1 + (Zinssatz / 100)) * Zwischenwert;
cout << "Das Kapital im Jahr " << i << " beträgt " << Zwischenwert << "Euro" << endl;

 }
}
