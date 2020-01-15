#include <iostream>
#include "TxLib.h"

using namespace std;

void PythagorasTree ( float x, float y, float L, float angle, int levels, int BranchAngle )
{
    if ( levels <= 0 ) return;
    if (levels >=14) txSetColor(TX_ORANGE);
    const float k = 0.7;
    const float angle1 = angle - BranchAngle;
    const float angle2 = angle + BranchAngle;
    const float angle3 = angle + BranchAngle/2;
    float x1 = x + L * cos( angle * M_PI/180);
    float y1 = y + L * sin( angle * M_PI/180);
    if (levels <= 10) txSetColor(TX_GREEN);
    txLine ( x, y, x1, y1 );
    if (levels <= 4) txSetColor(TX_ORANGE);
    PythagorasTree ( x1, y1, k * L, angle1, levels - 1, BranchAngle);
    PythagorasTree ( x1, y1, k * L, angle2, levels - 1, BranchAngle);
    PythagorasTree ( x1, y1, k * L, angle3, levels - 1, BranchAngle);
}

int main()
{
    txCreateWindow( 1000,1000 );
    PythagorasTree( 500, 500, 100, 270, 16, 16 );
    cin.get();
}
