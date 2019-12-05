#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int a = rand();
int b = rand();
int m = 0;
int c = 0;
int d = 0;
int e = 0;
a= a%100;
b= b%100;
cout <<a << ' ' << b << endl;
int l=a-b;
l=abs(l);
int r1 = rand();

if (a<b) {
     m=a;
    }else{
        m=b;
    }
r1 = r1 % l;
r1 += m;

cout << a << ' ' << b << ' ' << r1 << endl;

a=m%l;
b=m%l;
c=m%l;
d=m%l;
e=m%l;
cout << a << ' ' <<b << ' ' <<c << ' ' <<d<< ' ' <<e;
cin.get();
return 0;
}
