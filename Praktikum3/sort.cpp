/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 17/05/2022
 * @filename	: sort
 */
#ifndef SORT_CPP
#define SORT_CPP

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
  vector<int> Zahlen = {4, 2, 3, 4, 5, 6, 7, 8, 9};
  bool sorted = true;

  for (vector<int>::iterator i = Zahlen.begin(); i != Zahlen.end(); i++) {
    if (i > i.next()) sorted = false;
  }
  if (sorted) cout << "Das array ist sortiert!";
}

#endif /* SORT_CPP */
