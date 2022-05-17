/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 16/05/2022
 * @filename	: Koordinaten3
 */
#ifndef KOORDINATEN3_CPP
#define KOORDINATEN3_CPP

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void printMatrix(string *matrix) {
  int counter = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 51; j++) {
      cout << matrix[j][i];
      counter++;
      if (counter == 51) {
        cout << endl;
        counter = 0;
      }
    }
  }
}

double dist(int a, int b, int c, int d) {
  double Ergebnis = sqrt(pow((b - a), 2) + pow((d - c), 2));

  return Ergebnis;
}

int main() {
  bool running = true;
  int EingabeX1, EingabeY1, EingabeX2, EingabeY2;
  string matrix[51] = {
      "9876543210", "         -", "         -", "         -", "         -",
      "         -", "         -", "         -", "         -", "         -",
      "         1", "         -", "         -", "         -", "         -",
      "         -", "         -", "         -", "         -", "         -",
      "         2", "         -", "         -", "         -", "         -",
      "         -", "         -", "         -", "         -", "         -",
      "         3", "         -", "         -", "         -", "         -",
      "         -", "         -", "         -", "         -", "         -",
      "         4", "         -", "         -", "         -", "         -",
      "         -", "         -", "         -", "         -", "         -",
      "         5"};

  printMatrix(matrix);
  while (running) {
    cout << "Geben sie eine gueltige Koordinate fuer x ein(x[1,50]): ";
    cin >> EingabeX1;
    if (EingabeX1 <= 50 && EingabeX1 >= 1)
      running = false;
  }
  running = true;
  while (running) {
    cout << "Geben Sie eine gueltige Koordinate fuer y ein (y[1,9]): ";
    cin >> EingabeY1;
    if (EingabeY1 <= 9 && EingabeY1 >= 1)
      running = false;
  }
  matrix[EingabeX1][9 - (EingabeY1)] = 'x';

  running = true;

  while (running) {
    cout << "Geben Sie eine weitere gueltige Koordinate fuer x ein (x[1,50]): ";
    cin >> EingabeX2;
    if (EingabeX2 <= 50 && EingabeX2 >= 1)
      running = false;
  }
  running = true;
  while (running) {
    cout << "Geben Sie eine weitere gueltige Koordinate fuer y ein (y[1,9]): ";
    cin >> EingabeY2;
    if (EingabeY2 <= 9 && EingabeY2 >= 1)
      running = false;
  }
  matrix[EingabeX2][9 - EingabeY2] = 'x';

  printMatrix(matrix);
  cout << endl
       << "Der Abstand zwischen den beiden Punkten betraegt: "
       << dist(EingabeX1, EingabeX2, EingabeY1, EingabeY2) << endl;
}

#endif /* KOORDINATEN3_CPP */
