/*
Author : Tarunesh Gautam
*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MACRO 1;


int main()
{
    string s;
    cin >> s;
    vector<string> msg{"Hey", "there"};
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl << s << endl;
    return 0;
}