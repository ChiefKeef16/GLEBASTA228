#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    cin >> a ;
    float x = a, x0 = 0;
    float eps = 0.00001;
    while ( abs(x-x0) > eps ) {
    x0 = x;
    x = ( x + a/x ) / 2;
    }
    cout << x;
    return 0;
}
