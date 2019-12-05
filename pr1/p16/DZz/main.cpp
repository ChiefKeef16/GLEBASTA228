#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
 int x,y,r,st,en,h1,h2,d;
 cout << "¬ведите координаты x,y" << endl;
 cin >>x >>y;
txCreateWindow (1000, 1000);
r= 60;
st=y+r-10;
h1=st+200;
txSetColor(TX_BLUE,40);
txSetFillColour (TX_BLUE);
txCircle(x,y,r);

txSetColor(TX_YELLOW,25);
txSetFillColor (TX_YELLOW);
txLine (x, st, x, h1 );


txSetColor (TX_BLUE,25);
txLine (x, h1, x+100, h1+100 );

txSetColor (TX_YELLOW,25);
txLine (x, h1, x-100, h1+100 );

txSetColor (TX_BLUE,25);
txLine (x, st+50, x+100, st+150 );

txSetColor (TX_YELLOW,25);
txLine (x, st+50, x-100, st+150 );

return 0;
}
