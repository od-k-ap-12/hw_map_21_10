#pragma once
#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;
void ReadFile(ifstream& text, map<string, int>& obj);
void PrintMap(map<string,int>& obj);
void MostCommonWord(ofstream& result, map<string, int>& obj);
void CountMoreThanTwo(ofstream& result, map<string, int>& obj);

