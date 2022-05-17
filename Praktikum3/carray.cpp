/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 14/05/2022
 * @filename	: carray
 */
#ifndef CARRAY_CPP
#define CARRAY_CPP

#include <string.h>

#include <iostream>
using namespace std;

int main() {
  int Input, Zwischenwert;
  int usedFields = 0;
  char Eingabe;
  bool running = true;
  int array[20];
  bool arrayFull = false;
  for (int i = 0; i < 20; i++) array[i] = 0;
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
        if (usedFields < 20) {
          cout << "Geben sie den gewuenschten wert ein: ";
          cin >> Input;
          array[usedFields] = Input;
          usedFields++;

          if (usedFields == 20) {
            cout << "Das Array ist voll!" << endl;
            arrayFull = true;
          }
        }
        break;
      case 'S':
      case 's':
        cout << "Das Array hat " << usedFields << " belegte Elemente" << endl;
        break;
        break;
      case 'O':
      case 'o':
        for (int i = 0; i < usedFields; i++) {
          cout << "Das Element an der Stelle " << i << " ist: " << array[i]
               << endl;

          if (usedFields == 0) {
            cout << "Das Array ist leer!";
            break;
          }
        }
        break;
      case 'D':
      case 'd':
        if (usedFields == 0) {
          cout << "Das Array ist bereits leer!" << endl;
          break;
        }
        for (int i = 0; i < usedFields; i++) {
          array[i] = array[i + 1];
        }
        if (arrayFull) array[19] = 0;

        usedFields--;
        break;

      case 'Q':
      case 'q':
        running = false;
        break;
    }
  }
}

#endif /* CARRAY_CPP */
