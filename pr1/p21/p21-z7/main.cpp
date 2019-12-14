#include <iostream>

using namespace std;

int main()
{
    int f1=0 , f2=1; int g, n, sum;
    cout << "how many numbers?" <<endl;
    cin >> n;
    cout << "put numbers" << endl;
    for (int i=0; i<n; i++){
    cin >> g;
    cout << g << ' ';
    }
    cout << endl;
    for (int i=0; i<n; i++){
        sum=f1+f2;
        cout << sum << ' ';
        f2=f1;
        f1=sum;
    }

    return 0;
}
