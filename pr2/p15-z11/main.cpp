#include <iostream>

using namespace std;

string trim( string s )
{
    int i=0;
    for ( int n=0; s[0+n] == ' '; n++)
    { i+=1; }
    s.erase(0, i);
    i=0;
    for ( int n=0; s[s.size()-n] == ' '; n++)
    { i+=1; }
    s.erase(s.size()-i, s.size());
    return s;
}

int main()
{
    string s;
    getline( cin, s);
    s=trim(s);
    cout << s;
}
