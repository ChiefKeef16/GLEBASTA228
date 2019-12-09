#include <iostream>

using namespace std;

int main()
{
    int a;
    string b;
    cout<< "put the number <=100 and >=0" <<endl;
    cin>>a;
    if (a/10==2)
        cout<<"dvadcatb " ;
    else if (a/10==3)
        cout<<"tridcatb ";
    else if (a/10==4)
        cout<<"sorok ";
    else if (a/10==5)
        cout<<"pyatdesyat ";
    else if (a/10==6)
        cout<<"shestdesyat ";
    else if (a/10==7)
        cout<<"semdesyat ";
    else if (a/10==8)
        cout<<"vosemdesyat ";
    else if (a/10==9)
        cout<<"devyanosto ";
    if (a==0)
        cout<< "nol";
    else if (a%10==1)
        cout<< "odin";
    else if (a%10==2)
        cout<< "dva";
    else if (a%10==3)
        cout<< "tri";
    else if (a%10==4)
        cout<< "chetire";
    else if (a%10==5)
        cout<< "pyatb";
    else if (a%10==6)
        cout<< "shestb";
    else if (a%10==7)
        cout<< "semb";
    else if (a%10==8)
        cout<< "vosemb";
    else if (a%10==9)
        cout<< "devyatb";
    else if (a==10)
        cout<< "desyatb";
    else if (a==11)
        cout<< "odinnadcatb";
    else if (a==12)
        cout<< "dvennadcatb";
    else if (a==13)
        cout<< "trennadcatb";
    else if (a==14)
        cout<< "chetirnadcatb";
    else if (a==15)
        cout<< "pyatnadcatb";
    else if (a==16)
        cout<< "shestnadcatb";
    else if (a==17)
        cout<< "semnadcatb";
    else if (a==18)
        cout<< "vosemnadcatb";
    else if (a==19)
        cout<< "devyatnadcatb";
    else if (a==100)
        cout<<"sto" <<endl;
    else if (a==0)
        cout<<"nolb" <<endl;
}
