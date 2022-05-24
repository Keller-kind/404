/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 24/05/2022
 * @filename	: Templates
 */
#ifndef TEMPLATES_CPP
#define TEMPLATES_CPP

#include <iostream>
#include <vector>
using namespace std;
std::random_device rd;     
std::mt19937 rng(rd());   
std::uniform_int_distribution<int> uni(min,max);

template <typename T> void Insert(vector<T> &vec, string input) {
  try {
    vec.push_back(input);
  } catch (const std::invalid_argument &e) {
    cout << "Geben Sie einen gültigen Wert ein!" << endl;
  }
}

template <> void Insert(vector<int> &vec, string input) {
  try {
    vec.push_back(stoi(input));
  } catch (const std::invalid_argument &e) {
    cout << "Geben Sie einen gültigen Wert ein!" << endl;
  }
}

template <> void Insert(vector<float> &vec, string input) {
  try {
    vec.push_back(stof(input));
  } catch (const std::invalid_argument &e) {
    cout << "Geben Sie einen gültigen Wert ein!" << endl;
  }
}

template <typename T> void Generate(vector<T> &vec, int a){

}
template <> void Generate(vector<int> &vec, int a){
for(int i=0;i<a;i++){
 vec.push_back(rand());
}
}
template <> void Generate(vector<float> &vec, int a){
vec.push_back(0 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(0-1000))));
}
template <> void Generate(vector<string> &vec, int a){

}
int main() {
std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> uni(0,9);
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
  }
}
}
#endif /* TEMPLATES_CPP */
