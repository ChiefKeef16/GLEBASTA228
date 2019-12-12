#include <iostream>
using namespace std;

int main()
{
    int a;
    for (int i = 32; i<=999; i++){
        a=i*i;
        if (i==a%1000){
            cout << i << ' ';
        }
    }
    return 0;
}
