#include <iostream>

using namespace std;

int main()
{
    string d;
    int a,b,c;
    cin >> a >> b >> c;
    if ((a<0) or (b<0) or (c<0))
        d="true";
    else
        d="false";
    cout << d;
    return 0;
}
