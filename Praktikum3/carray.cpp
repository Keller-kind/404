/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 14/05/2022
 * @filename	: carray
 */
#ifndef CARRAY_CPP
#define CARRAY_CPP

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int Input, Zwischenwert,usedFields;
  char Eingabe;
  bool running = true;
  int array[20];
  bool arrayFull = false;
  for (int i = 0; i < 20; i++)
    array[i] = NULL;
  while (running) {
    cout << "Geben Sie die Aktion ein die sie durchfuehren moechten: " << endl;
    cout << "i - Neuen Wert eingeben" << endl;
    cout << "s - Ausgabe der Menge an belegten Feldern" << endl;
    cout << "o - Ausgabe der belegten Felder" << endl;
    cout << "d - Loeschen des ersten Elements" << endl;
    cout << "q - beenden des Programms" << endl;
    cin >> Eingabe;

    switch (Eingabe) {
    case 'I':
    case 'i':
      for (int i = 0; i < 20; i++) {
        if (array[i] == NULL) {
          cout << "Geben sie den gewuenschten wert ein: ";
          cin >> Input;
          array[i] = Input;
          break;
        usedFields++;
		}
        if (i == 19) {
          cout << "Das Array ist voll!" << endl;
          arrayFull = true;
        }
      }
      break;
    case 'S':
    case 's':
      for (int i = 0; i < 20; i++) {
        if (array[i] == NULL) {
          cout << "Das Array hat " << i << " belegte Elemente" << endl;
          break;
        }
      }
      break;
    case 'O':
    case 'o':
      for (int i = 0; i < 20; i++) {
        if (array[i] != NULL) {
          cout << "Das Element an der Stelle " << i << " ist: " << array[i]
               << endl;

        } else if (array[0] == NULL){
          cout << "Das Array ist leer!";
		break;}
      }
      break;
    case 'D':
    case 'd':
      if (array[0] == NULL) {
        cout << "Das Array ist bereits leer!" << endl;
        break;
      }
      for (int i = 0; i < 19; i++) {
        if (array[i] != NULL) {
          array[i] = array[i + 1];
		}
        if (i==18) array[19] = NULL;
     }
      break;

    case 'Q':
    case 'q':
      running = false;
      break;
    }
  }
}

#endif /* CARRAY_CPP */
