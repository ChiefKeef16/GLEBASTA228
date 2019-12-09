#include <iostream>
#include "TXLib.h"
using namespace std;

int main()
{
    txCreateWindow(1000,1000);
    int x,y,shx,ehx,uhx,uehx,ehy;
    int h,b,rl,ll,rh,lh, RH,GH,BH,RB,GB,BB,RHH,GHH,BHH,RLL,GLL,BLL;
    cout <<"Zafigarb coordinates";
    cin >>x >>y;
    cout <<"Zafigarb color of head(RGB)";
    cin >> RH >>GH >> BH;
    cout <<"Zafigarb color of body(RGB)";
    cin >> RB >> GB >> BB;
    cout <<"Zafigarb color hands(RGB)";
    cin >> RHH >> GHH >> BHH;
    cout <<"Zafigarb color of legs(RGB)";
    cin >> RLL >>GLL >> BLL;
    shx=x;
    ehx=x+90;
    uhx=shx+30; //сверху слева
    uehx=uhx+30; // сверху справа
    ehy=y+10;

    txSetFillColor( RGB(RH,GH,BH) );
    POINT Head [6] = { {shx,y}, {shx+30, y-20}, {uehx,y-20}, {ehx,y}, {ehx-35,y+10}, {shx+35,y+10} };
    txPolygon (Head, 6);

    txSetFillColor( RGB(RB,GB,BB) );
    POINT Body [12] = { {shx+40,y+10}, {ehx-40,ehy}, {ehx-40,ehy+10}, {ehx-30,ehy+10}, {ehx-30,ehy+30}, {ehx-35,ehy+50,}, {ehx-30,ehy+60}, {shx+30,ehy+60}, {shx+35,ehy+50}, {shx+30,ehy+30}, {shx+30,ehy+10}, {shx+40,ehy+10} };
    txPolygon(Body, 12);
    ehy=ehy+60;

    txSetFillColor( RGB(RLL,GLL,BLL) );
    POINT LeftLeg [6] = { {shx+40,ehy}, {shx+40,ehy+30}, {shx+25,ehy+30}, {shx+25,ehy+25}, {shx+30,ehy+25}, {shx+30,ehy} };
    txPolygon(LeftLeg, 6);

    POINT RightLeg [6] = { {shx+50,ehy}, {shx+50,ehy+30}, {shx+65,ehy+30}, {shx+65,ehy+25}, {shx+60,ehy+25}, {shx+60,ehy} };
    txPolygon(RightLeg,6);

    txSetFillColor( RGB(RHH,GHH,BHH) );
    POINT RightHand [4] = { {ehx-30,ehy-50}, {ehx-10,ehy}, {ehx-15,ehy+5}, {ehx-30,ehy-30} };
    txPolygon(RightHand, 4);

    POINT LeftHand [4] = { {ehx-60,ehy-50}, {ehx-80,ehy}, {ehx-75,ehy+5}, {ehx-60, ehy-30} };
    txPolygon(LeftHand,4);
}
