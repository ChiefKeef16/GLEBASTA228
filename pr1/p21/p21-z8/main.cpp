#include <iostream>

using namespace std;

int main()
{
    int f1=0, f2=1;
    int g, n, sum;
    bool j=false;
    //cout << "put 10 numbers not bigger that 16" <<endl;
    for (int i=0; i<99999; i++)
    {
        cin >> n;
        j=false;
        for (int k=0; k<10; k++)
        {
            sum=f1+f2;
            f2=f1;
            f1=sum;
            if (n==sum)
            {
                cout << n << " - yes" << endl;
                k=10;
                j=true;
            }
            else
            {
                j=false;
            }
        }
        if (j==false)
            cout << n << " - no";
        f1=0, f2=1;
    }

    return 0;
}
