#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
 int x,y,r,st,en,h1,h2,d;
 cout � "������� ���������� x,y" � endl;
 cin �x �y;
txCreateWindow (1000, 1000);
r= 60;
st=y+r-10;
h1=st+200;
txCircle(TX_BLUE)
txSetFillColour (TX_BLUE);
txCircle(x,y,r);

txSetColor (TX_YELLOW, 25);
txLine (x, st, x, h1 );


txLine (x, h1, x+100, h1+100 );

txLine (x, h1, x-100, h1+100 );

txLine (x, st+50, x+100, st+150 );

txLine (x, st+50, x-100, st+150 );
return 0;
}
