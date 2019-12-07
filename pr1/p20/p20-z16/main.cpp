#include <iostream>

using namespace std;

int main()
{
    /*int a,b,c;
    bool q;
    q=false;
    cin>> a >>b >>c;
    a=a%10;
    b=b%10;
    c=c%10;
    if ((a==1) or (b==1) or (c==1))
        q=true;
    cout <<q;
    return 0;*/
    int a,b,c;
    bool q;
    q=false;
    cin >>a >>b >>c;
     a=a%10;
    b=b%10;
    c=c%10;
    if ((a==1) and (b==1) and (c==1))
        q=true;
    cout <<q;
    return 0;
}
