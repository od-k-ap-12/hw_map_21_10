#include "Functions.h"

void ReadFile(ifstream& text, map<string, int>& obj)
{
    string word;
    while (!text.eof()) {
        text >> word;
        cout << word<<" ";
        obj[word]++;
    }
    cout << endl << endl;
    text.close();
}

void PrintMap(map<string, int>& obj)
{
    for (auto it = obj.begin(); it != obj.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
}

void MostCommonWord(ofstream& result,map<string, int>& obj)
{
    string maxword;
    int max = 0;
    auto it = obj.begin();
    for (auto it = obj.begin(); it!=obj.end(); it++) {
        if (it->second > max) {
            max = it->second;
            maxword = it->first;
        }
    }
    cout << maxword << ": " << max << endl<<endl<<endl;
    result << maxword << ": " << max << endl<<endl<<endl;
}

void CountMoreThanTwo(ofstream& result,map<string, int>& obj)
{
    for (auto it = obj.begin(); it != obj.end(); it++) {
        if (it->second > 2) {
            cout << it->first << ": " << it->second << endl;
            result << it->first << ": " << it->second << endl;
        }
    }
}
