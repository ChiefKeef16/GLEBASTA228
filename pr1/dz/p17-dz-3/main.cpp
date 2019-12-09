#include <iostream>
#include "TXLib.h"
using namespace std;
int main()
{
    int x,y,r,R,G,B;
    int i=0;
    string c;
    txCreateWindow (800, 600);
    for (i=1; i<=4; i++)
    {
    cout <<"cin coordinates x,y and "  <<"cin color of car(R G B...)";
    cin >> x >> y >> R >>G >> B;
    r=15;
    POINT CarBody [8] = {{x, y}, {x, y-25},
        {x+10, y-25}, {x+40, y-45},
        {x+80, y-45},{x+100, y-25},
        {x+140, y-15},{x+140, y}
    };
    txSetFillColor ( RGB(R,G,B) );
    txPolygon (CarBody, 8);

    POINT CarWindow [4]= {{x+50, y-40}, {x+50, y-40},
        {x+50, y-25}, {x+20, y-25}
    };
    txSetFillColor (TX_BLACK);
    txPolygon (CarWindow, 4);

    POINT CarWindow2 [4]= {{x+75, y-40}, {x+55, y-40},
        {x+55, y-25}, {x+90, y-25}
    };
    txSetFillColor (TX_BLACK);
    txPolygon (CarWindow2, 4);

    txSetFillColor (TX_GRAY);
    txCircle (x+30,y,r);

    txSetFillColor (TX_GRAY);
    txCircle (x+95,y,r);
    }
    return 0;
}
