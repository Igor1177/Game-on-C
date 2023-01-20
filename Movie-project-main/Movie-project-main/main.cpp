#include "TXLib.h"

int main()
{
txCreateWindow (1600, 900);
    HDC background_1 = txLoadImage ("fon.bmp");
    HDC enemy = txLoadImage ("bebra.bmp");
    xenemy = 0
    yenemy = 0

    while(!GetAsyncKeyState (VK_ESCAPE))
    {
        txBegin():
        txSetColor(TX_WHITE);
        txSetFillColor(TX_WHITE);
        txClear();

        txTransparentBlt (txDC(), xenemy, yenemy, 350, 341, enemy,  0, 0, TX_WHITE);
        txBitBlt(txDC(), 0, 0, 1600, 900, background_1);


    }



txTextCursor (false);
txDisable();
return 0;
    }

