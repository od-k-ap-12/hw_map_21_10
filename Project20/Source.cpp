#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include "Functions.h"
using namespace std;

int main()
{
    string word;
    ifstream text("C:\\task\\text.txt");
    ofstream result("result.txt",ios::trunc);
    map<string, int> counting;
    ReadFile(text, counting);
    MostCommonWord(result,counting);
    CountMoreThanTwo(result,counting);
    return 0;
}
