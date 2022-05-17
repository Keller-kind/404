/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 17/05/2022
 * @filename	: Vertraege
 */
#ifndef VERTRAEGE_CPP
#define VERTRAEGE_CPP

#include <iostream>
#include <vector>
using namespace std;
enum Vertraege { OhneBindung, Super30, Super50, Super100, Super200 };

struct Vertrag {
  int Ggb, Inkl;
  enum Vertraege vertrag;
  double PpM;
};

int main() {
  int Eingabe;
  double Gesamtkosten = 0;
  Vertrag OhneBindung = {0, 0, Vertraege::OhneBindung, 0.1};
  Vertrag Super30 = {5, 30, Vertraege::Super30, 0.1};
  Vertrag Super50 = {6, 50, Vertraege::Super50, 0.09};
  Vertrag Super100 = {10, 100, Vertraege::Super100, 0.08};
  Vertrag Super200 = {15, 200, Vertraege::Super200, 0.007};
  cout << "Wählen Sie ihren Tarif aus: " << endl;
  cout << "1 - Ohne Bindung / 0 Grundgebühren / 0 Inklusivminute    n / 0,1 "
          "pro minute"
       << endl;
  cout << "2 - Super 30 / 5 Grundgebühren / 30 Inklusivminuten /     0,1 pro "
          "minute"
       << endl;
  cout << "3 - Super 50 / 6 Grundgebühren / 50 Inklusivminuten /     0,09 pro "
          "minute"
       << endl;
  cout << "4 - Super 100 / 10 Grundgebühren / 100 Inklusivminute    n / 0,08 "
          "pro minute"
       << endl;
  cout << "5 - Super 200 / 15 Grundgebühren / 200 Inklusivminute    n / 0,07 "
          "pro minute"
       << endl;
  cout << "Geben sie den Gewünschten Vertrag ein: ";
  cin >> Eingabe;

  switch (Eingabe) {
    case 1:
      for (int i = (OhneBindung.Inkl) / 10; i <= 25; i++) {
        Gesamtkosten = Gesamtkosten + (OhneBindung.PpM * 10);
        cout << "Die monatlichen Kosten bei " << i * 10 << "Minuten betragen "
             << Gesamtkosten << endl;
      }
      break;

    case 2:
      for (int i = (Super30.Inkl) / 10; i <= 25; i++) {
        Gesamtkosten = Gesamtkosten + (Super30.PpM * 10);
        cout << "Die monatlichen Kosten bei " << i * 10 << "Minuten betragen "
             << Gesamtkosten << endl;
      }
      break;

    case 3:
      for (int i = (Super50.Inkl) / 10; i <= 25; i++) {
        Gesamtkosten = Gesamtkosten + (Super50.PpM * 10);
        cout << "Die monatlichen Kosten bei " << i * 10 << "Minuten betragen "
             << Gesamtkosten << endl;
      }
      break;

    case 4:
      for (int i = (Super100.Inkl) / 10; i <= 25; i++) {
        Gesamtkosten = Gesamtkosten + (Super100.PpM * 10);
        cout << "Die monatlichen Kosten bei " << i * 10 << "Minuten betragen "
             << Gesamtkosten << endl;
      }
      break;

    case 5:
      for (int i = (Super200.Inkl) / 10; i <= 25; i++) {
        Gesamtkosten = Gesamtkosten + (Super200.PpM * 10);
        cout << "Die monatlichen Kosten bei " << i * 10 << "Minuten betragen "
             << Gesamtkosten << endl;
      }
      break;
  }
}

#endif /* VERTRAEGE_CPP */
