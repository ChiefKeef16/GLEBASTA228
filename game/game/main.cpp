#include <iostream>
#include "TXLib.h"
#include <sstream>
using namespace std;

const int WIDTH = 500,
          HEIGHT = 600;
const int MAX_PLATES = 16;
const int MIN_V = 1, MAX_V = 5;
const int MIN_R = 10, MAX_R = 30;
int score = 0;

int rPlate [MAX_PLATES], xPlate[ MAX_PLATES ],
    yPlate[MAX_PLATES],velPlate [ MAX_PLATES ];
COLORREF color [ MAX_PLATES ];

bool hit ( int x, int y, int plateNo )
{
    float distX = xPlate[plateNo] - x;
    float distY = yPlate[plateNo] - y;
    float distance = hypot (distX, distY );
    return distance < rPlate[plateNo];
}

int randInt ( int a, int b )
{
    return a + rand() % (b-a+1);
}
COLORREF randColor()
{
    return RGB(randInt (0, 255),
               randInt(0, 255), randInt(0, 255));
}

void init()
{
    for( int i = 0; i < MAX_PLATES; i++)
    {
        rPlate[i] = randInt( MIN_R, MAX_R);
        xPlate[i] = randInt ( rPlate[i], WIDTH-rPlate[i] );
        yPlate[i] = randInt( rPlate[i], HEIGHT-rPlate[i] );
        velPlate[i] = randInt ( MIN_V, MAX_V );
        color[i] = randColor();
    }
}

void movePlates()
{
    for ( int i = 0; i < MAX_PLATES; i++)
    {
        xPlate[i] -= velPlate[i];
        if ( xPlate[i] < -rPlate[i] )
        xPlate[i] += WIDTH + 2*rPlate[i];
    }
}

void onMouseClick( int x, int y )
{
    for ( int i = 0; i < MAX_PLATES; i++)
        if ( hit(x, y, i) )
    {
        score +=1;
        rPlate[i] = 0;
        break;
    }
}



void drawPlates()
{
    for ( int i = 0; i< MAX_PLATES; i++)
    {
        txSetFillColor ( color[i] );
        txCircle ( xPlate[i], yPlate[i], rPlate[i] );
    }
}

int main()
{
    txCreateWindow( WIDTH, HEIGHT );
    init();
    while ( not GetAsyncKeyState ( VK_ESCAPE ) )
    {
        movePlates();
        txSetFillColor ( TX_BLACK);
        txClear();
        drawPlates();
        txSleep(50);
        if ( score == 16)
        {
            score=0;
            init();
        }
        if ( txMouseButtons() > 0)
            onMouseClick ( txMouseX(), txMouseY() );
    }
}
