#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    if ((a>119) or (a<1))
        cout << "you are stupid or you are not alive or dead";
        else if (a%10==1)
        cout<<a <<" god";
        else if (a>9 and a<21)
        cout<<a <<" let";
        else if ((a%10>1) and (a%10<5))
        cout<<a <<" goda";
        else if ((a%10==0) or (a%10>4 and a%10<10))
        cout<<a  <<" let";
    return 0;
}
