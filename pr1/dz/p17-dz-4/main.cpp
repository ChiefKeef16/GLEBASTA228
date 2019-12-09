#include <iostream>
#include "TXLib.h"
using namespace std;

int main()
{
    txCreateWindow(1000,1000);
    int x,y,shx,ehx,uhx,uehx,ehy;
    string h,b,rl,ll,rh,lh;
    cout <<"Zafigarb coordinates";
    cin >>x >>y;
    cout <<"Zafigarb color of head(TX_PINK)";
    cin >> h;
    cout <<"Zafigarb color of body(TX_BLUE)";
    cin >> b;
    cout <<"Zafigarb color of LeftHand and RightHand(TX_RED TX_ORANGE)";
    cin >> lh >> rh;
    cout <<"Zafigarb color of LeftLeg and RightLeg(TX_BROWN TX_YELLOW)";
    cin >> ll >>rl;
    shx=x;
    ehx=x+90;
    uhx=shx+30; //сверху слева
    uehx=uhx+30; // сверху справа
    ehy=y+10;

    txSetFillColor( h );
    POINT Head [6] = { {shx,y}, {shx+30, y-20}, {uehx,y-20}, {ehx,y}, {ehx-35,y+10}, {shx+35,y+10} };
    txPolygon (Head, 6);

    txSetFillColor( b );
    POINT Body [12] = { {shx+40,y+10}, {ehx-40,ehy}, {ehx-40,ehy+10}, {ehx-30,ehy+10}, {ehx-30,ehy+30}, {ehx-35,ehy+50,}, {ehx-30,ehy+60}, {shx+30,ehy+60}, {shx+35,ehy+50}, {shx+30,ehy+30}, {shx+30,ehy+10}, {shx+40,ehy+10} };
    txPolygon(Body, 12);
    ehy=ehy+60;

    txSetFillColor( ll );
    POINT LeftLeg [6] = { {shx+40,ehy}, {shx+40,ehy+30}, {shx+25,ehy+30}, {shx+25,ehy+25}, {shx+30,ehy+25}, {shx+30,ehy} };
    txPolygon(LeftLeg, 6);

    txSetFillColor( rl )
    POINT RightLeg [6] = { {shx+50,ehy}, {shx+50,ehy+30}, {shx+65,ehy+30}, {shx+65,ehy+25}, {shx+60,ehy+25}, {shx+60,ehy} };
    txPolygon(RightLeg,6);

    txSetFillColor( rh );
    POINT RightHand [4] = { {ehx-30,ehy-50}, {ehx-10,ehy}, {ehx-15,ehy+5}, {ehx-30,ehy-30} };
    txPolygon(RightHand, 4);

    txSetFillColor( lh );
    POINT LeftHand [4] = { {ehx-60,ehy-50}, {ehx-80,ehy}, {ehx-75,ehy+5}, {ehx-60, ehy-30} };
    txPolygon(LeftHand,4);
}
