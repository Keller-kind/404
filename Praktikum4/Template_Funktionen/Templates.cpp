/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 24/05/2022
 * @filename	: Templates
 */
#ifndef TEMPLATES_CPP
#define TEMPLATES_CPP

#include <iostream>
#include <random>
#include <vector>

#include "functions.h"
using namespace std;

int main() {
  bool running = true;
  bool firstRun = true;
  char Eingabe, type;
  string Input;
  vector<int> vecInt = {};
  vector<float> vecFloat = {};
  vector<string> vecStr = {};
  while (running) {
    if (firstRun) {
      cout << "Welcher Typ Daten soll gespeichert werden? \n";
      cout << "(1) - int \n";
      cout << "(2) - float \n";
      cout << "(3) - string \n";
      cin >> Eingabe;
      switch (Eingabe) {
        case '1':
          type = 'i';
          firstRun = false;
          break;

        case '2':
          type = 'f';
          firstRun = false;
          break;

        case '3':
          type = 's';
          firstRun = false;
          break;
      }
    }
    cout << "Werte verwalten - Auswahl \n";
    cout << "(1) - Werte per Hand eingeben \n";
    cout << "(2) - Werte generieren lassen \n";
    cout << "(3) - Werte ausgeben \n";
    cout << "(4) - Wert suchen \n";
    cout << "(5) - Auf Sortierung pruefen \n";
    cout << "(x) - Ende \n";
    cin >> Eingabe;
    switch (Eingabe) {
      case '1':
        while (true) {
          cout << "Geben Sie eine Zahl ein: ";
          cin >> Input;
          if (type == 'i') {
            Insert(vecInt, Input);
            break;
          }
          if (type == 'f') {
            Insert(vecFloat, Input);
            break;
          }
          if (type == 's') {
            Insert(vecStr, Input);
            break;
          }
        }
        break;
      case '2':
        cout << "Wie viele Werte moechten Sie generieren lassen: ";
        cin >> Input;
        if (type == 'i') {
          Generate(vecInt, stoi(Input));
        }
        if (type == 'f') {
          Generate(vecFloat, stoi(Input));
        }
        if (type == 's') {
          Generate(vecStr, stoi(Input));
        }
      case '3':
        if (type == 'i') {
          printVec(vecInt);
        }
        if (type == 'f') {
          printVec(vecFloat);
        }
        if (type == 's') {
          printVec(vecStr);
        }

        break;
      case '4':
        cout << "Geben Sie die gesuchte Zahl ein: ";
        cin >> Input;

        if (type == 'i') {
          find(vecInt, Input);
        }
        if (type == 'f') {
          find(vecFloat, Input);
        }
        if (type == 's') {
          find(vecStr, Input);
        }
        break;
      case '5':
        if (type == 'i') {
         cout << (isSorted(vecInt) ? "Ist Sortiert! " : "Ist nicht Sortiert! ") << endl;
        }
        if (type == 'f') {
         cout << (isSorted(vecFloat) ? "Ist Sortiert! " : "Ist nicht Sortiert! ") << endl;
        }
        if (type == 's') {
         cout << (isSorted(vecStr) ? "Ist Sortiert! " : "Ist nicht Sortiert! ") << endl;
		}
        break;

      case 'x':
        running = false;
        break;
    }
  }
}
#endif /* TEMPLATES_CPP */
