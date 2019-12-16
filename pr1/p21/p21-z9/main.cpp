#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int j = 0;
    bool t;
    cout << "How many numbers?" << endl;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << "put one number" << endl;
        cin >> k;
        t=true;
        for (int h=2; h<k; h++)
        {
            if (k>1 and k%h==0)
                j=false;
                h=k+1;
        }
    }
    cout << j;
    return 0;
}
