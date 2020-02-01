#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int number ( char k )
{
    if ( k=='a' )
    {
        int n = 10;
        return n;
    }
    else if ( k=='b' )
    {
        int n = 11;
        return n;
    }
    else if ( k=='c' )
    {
        int n = 12;
        return n;
    }
    else if ( k=='d' )
    {
        int n = 13;
        return n;
    }
    else if ( k=='e' )
    {
        int n = 14;
        return n;
    }
    else if ( k=='f' )
    {
        int n = 15;
        return n;
    }
    else
    {
        int n=atoi( k );
        return n;
    }
}
int hex2dec (string s)
{
    char k;
    int l; int n;
    for (int i; i<=s.size(); i++)
    {
        k=s[s.size()-1];
        if ( k == 'a' or k == 'b' or k == 'c' or k == 'd' or k == 'e' or k == 'f' )
        {
            n=number(k);
            l=l+(n*pow(16,i))
        }
        else
        {
            n=number()
            l=l+(n*pow(16,i))
        }
    }
    return l;
}
int main()
{
    string s;
    getline( cin, s);
    l=hex2dec(s);
    cout << l;
}
