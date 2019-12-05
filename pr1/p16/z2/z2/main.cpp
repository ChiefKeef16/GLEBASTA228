#include <iostream>

using namespace std;

#include "TXLib.h"
int main()
{
    int x,y,X,Y;
    cout <<"введите координату(x y)";
    cin>>x,y;
    txCreateWindow(800,600);
    txSetColor(TX_BLACK,3);
    txSetFillColor(TX_PINK);
    X=x+100;
    Y=y+80;
    txRectangle(x,y,x + 100,y + 80);
    //txRectangle(200,20,300,100);
    /*txSetFillColor(TX_BLUE);
    txRectangle(200,100,300,300);
    txSetFillColor(TX_GREEN);
    txRectangle(160,100,200,300);
    txRectangle(300,100,340,300);
    txSetFillColor(TX_BROWN);
    txRectangle(200,270,300,425);
    txSetFillColor(TX_GRAY);
    txRectangle(200,425,300,450);
    txLine(249,270,249,450);
    txSetColor(TX_BLACK,2);
    txLine(200,425,300,425);*/

    return 0;
}
