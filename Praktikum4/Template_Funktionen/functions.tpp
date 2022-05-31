/**
 * @author		: Leopold Keller (leopold.keller@stud.h-da.de)
 * @created		: 30/05/2022
 * @filename	: functions
 */
#ifndef FUNCTIONS_CPP
#define FUNCTIONS_CPP

#include <iostream>
#include "functions.h"
#include <vector>
using namespace std;
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

template <typename T>
void Generate(vector<T> &vec, int a) {}
template <>
void Generate(vector<int> &vec, int a) {
  for (int i = 0; i < a; i++) {
    vec.push_back(rand());
  }
}
template <>
void Generate(vector<float> &vec, int a) {
  vec.push_back(0 + static_cast<float>(rand()) /
                        (static_cast<float>(RAND_MAX / (0 - 1000))));
}
template <>
void Generate(vector<string> &vec, int a) {
  string x;
  for (int i = uni(rng); i > 0; i--) {
    x += to_string(uni(rng));
  }
  vec.push_back(x);
}









 #endif /* FUNCTIONS_CPP */

