#include <iostream>
using namespace std;


int main(){
/*string Eingabe;
cout << "Geben Sie eine Zahl ein:" ;
cin >> Eingabe;

for(auto i : Eingabe){
cout << i << endl;
}*/
int Eingabe, a, b, c;
cout << "Geben Sie eine Zahl ein: ";
cin >> Eingabe;
a = Eingabe / 100;
b = (Eingabe % (a*100))/10;
c = Eingabe % ((a*100)+(b*10));
cout << a << endl;
cout << b << endl;
cout << c << endl;


}
