#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int j,i,l;
    const int k=5;
    for (i=0; i<k; i++ )
        cin >> a[i];
    j = a[0];
    for (i=0; i < k-1; i++)
    {
        l = a[i+1];
        a[i] = l;
    }
    a[k-1] = j;
    for (int i=0; i<k; i++ )
    {
        cout << a[i] << endl;
    }
}
