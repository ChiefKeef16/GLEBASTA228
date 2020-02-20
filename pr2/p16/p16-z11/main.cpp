#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int b[5];
    int j,i,l;
    const int k=5;
    for (i=0; i<k; i++ )
        cin >> a[i];
    for ( i = 0; i < k; i++)
        b[i] = a[k-i-1];
    for (int i=0; i<k; i++ )
    {
        cout << b[i] << endl;
    }
}
