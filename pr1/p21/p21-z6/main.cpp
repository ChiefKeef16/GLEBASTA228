#include <iostream>

using namespace std;

int main()
{
    int z,x,c;
    for (int i=100; i<1000; i++){
    z = i/100;
    x = i%100/10;
    c = i%10;
    if (i==z*z*z+x*x*x+c*c*c)
        cout << i <<"-Armstrong's number" <<endl;
    }
    return 0;
}
