/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: functions
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <random>
#include <vector>
using namespace std;
std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> uni(0, 9);

// Templated Insert Functions
template <typename T>
void Insert(vector<T> &vec, string input) {
  try {
    vec.push_back(input);
  } catch (const std::invalid_argument &e) {
    cout << "Geben Sie einen gültigen Wert ein!" << endl;
  }
}
template <>
void Insert(vector<int> &vec, string input) {
  try {
    vec.push_back(stoi(input));
  } catch (const std::invalid_argument &e) {
    cout << "Geben Sie einen gültigen Wert ein!" << endl;
  }
}
template <>
void Insert(vector<float> &vec, string input) {
  try {
    vec.push_back(stof(input));
  } catch (const std::invalid_argument &e) {
    cout << "Geben Sie einen gültigen Wert ein!" << endl;
  }
}

// Templated Generate Functions

template <typename T>
void Generate(vector<T> &vec, int a) {}
template <>
void Generate(vector<int> &vec, int a) {
  for (int i = 0; i < a; i++) {
    vec.push_back(uni(rng));
  }
}
template <>
void Generate(vector<float> &vec, int a) {
  for (int i = 0; i < a; i++) {
    vec.push_back(((0 + static_cast<float>(uni(rng))) /
                   (0 + static_cast<float>(uni(rng)))));
  }
}
template <>
void Generate(vector<string> &vec, int a) {
  string x;
  for (int j = 0; j < a; j++) {
    for (int i = uni(rng) + 1; i > 1; i--) {
      x += to_string(uni(rng));
    }
    vec.push_back(x);
    x = "";
  }
}

// Templated printVec Functions

template <typename T>
void printVec(vector<T> vec) {
  for (auto i : vec) {
    cout << i << endl;
  }
}

// Templated find Functions

template <typename T>
void find(vector<T>, string a) {}
template <>
void find(vector<int> vec, string a) {
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == stoi(a)) cout << i << " " << a << endl;
  }
}

template <>
void find(vector<float> vec, string a) {
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == stof(a)) cout << i << " " << a << endl;
  }
}

template <>
void find(vector<string> vec, string a) {
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == a) cout << i << " " << a << endl;
  }
}

// Templated isSorted Functions

template <typename T>
bool isSorted(vector<T> vec) {
  if (is_sorted(vec.begin(), vec.end())) return true;
  return false;
}

template <>
bool isSorted(vector<string> vec) {
  vector<int> toInt;
  std::transform(vec.begin(), vec.end(), std::back_inserter(toInt),
                 [&](std::string s) { return stoi(s); });

  if(is_sorted(toInt.begin(), toInt.end())) return true;
  return false;
}

#endif /* FUNCTIONS_H */
