#include <iostream>
#include "TXLib.h"
using namespace std;

void DrawCarBody(int x, int y)
{
        POINT  CarBody[8] = { {x,y}, {x,y-25}, {x+10,x-25},{x+40,y+45},{x+80,y-45},{x+100,y-25},{x+140,y-15},{x+140,y} };
/*20*//*95*/
        txSetFillColor(TX_LIGHTBLUE);

        txPolygon(CarBody, 8);
}

void DrawCarWindows()
{
    txSetFillColor(TX_BLACK);

    POINT BackWindow[4]={ {40,70},{65,55},{70,55},{70,70} };

    txPolygon(BackWindow, 4);

    POINT FrontWindow[4]={ {75,55}, {95,55}, {110,70}, {75,70} };

    txPolygon(FrontWindow,4);
}

void DrawCarWheels()
{
    txSetFillColor(TX_GRAY);

    txCircle(50,95,13);

    txCircle(120,95,13);
}

int main()
{
    txCreateWindow(1000,1000);

    int x,y;

    cin >>x >> y;

    DrawCarBody(x, y);

    //DrawCarWheels();

    //DrawCarWindows();

    return 0;
}
