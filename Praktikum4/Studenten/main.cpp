/**
 * @author      : Leopold Keller (leopold.keller@stud.h-da.de)
 * @file        : main
 * @created     : Monday May 30, 2022 15:21:16 CEST
 */

#include <iostream>
#include <vector>
#include "zug.h"
using namespace std;
int main() {
  Zug MeinZug = Zug();
  char Eingabe, ge;
  string vn, nn;
  int ma;
  bool running = true;
  cout << "Willkommen beim Studentenverwaltungsservice (SVS)" << endl;

  while (running) {
    cout << "(i) immatrikulieren" << endl;
    cout << "(e) exmatrikulieren" << endl;
    cout << "(a) Anzeige aller eingeschriebenen Studierenden" << endl;
    cout << "(x) beenden" << endl;
    cin >> Eingabe;
    switch (Eingabe) {
      case 'i':
        cout << "Geben Sie einen Vornamen ein: " << endl;
        cin >> vn;
        cout << "Geben Sie einen Nachnamen ein: " << endl;
        cin >> nn;
        cout << "Geben Sie ein Geschlecht ein(m,w): " << endl;
        cin >> ge;
        cout << "Geben Sie eine Matrikelnummer ein" << endl;
        cin >> ma;
        try {
          MeinZug.imm(vn, nn, ge, ma);
        } catch (const std::out_of_range &e) {
          cout
              << "Die maximale Groesse des Testsystems ist erreicht!\n Bitte "
                 "exmatrikulieren Sie einen Studierenden bevor Sie einen neuen "
                 "immatrikulieren\n";
		  break;
        };
        break;

      case 'e':
        cout << "Geben Sie die Matrikelnummer des zu exmatrikulierenden "
                "Studenten an: ";
        cin >> ma;
        cout << (MeinZug.exm(ma) ? "Student erfolgreich exmatrikuliert!"
                                 : "Matrikelnummer wurde nicht gefunden!")
             << endl;
        break;

	  case 'a':
		MeinZug.printZug();
		break;
      case 'x':
        running = false;
        break;
    }
  }
}
