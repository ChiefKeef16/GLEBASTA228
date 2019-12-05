#include <iostream>

using namespace std;

#include <cmath>
int main()
{
        bool b;
        int a;
    cin >> a;
    b=((a%10 == a/1000)&&((a%100-a%10)/10 == a/100-10));
    if (b){
        cout << "true" ;
    } else {
        cout << "false";
    }


}
