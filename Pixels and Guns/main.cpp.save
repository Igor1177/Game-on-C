#include "TXLib.h"


int main()
{
txCreateWindow (1600, 900);
        HDC  Background_1 = txLoadImage ("Images/Backgrounds/Backgroundfirst.bmp");
        //HDC  Enemy = txLoadImage ("Images/Sprites_Heroes/Enemy.bmp");
        HDC  GG_Idle_1 = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle1.bmp");
        HDC  GG_Idle_2 = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle2.bmp");
        HDC  GG_Idle_3 = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle3.bmp");
        HDC  GG_Idle_4 = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle4.bmp");

        int x1GG = 0;
        int y1GG = 0;
        int x2GG = 0;
        int y2GG = 0;
        int Idle_GG = 1;

        while (!GetAsyncKeyState (VK_ESCAPE))
        {
            txBegin();
            txSetColor(TX_WHITE);
            txSetFillColor(TX_BLACK);
            txBitBlt (txDC(), 0, 0, 1600, 900, Background_1);
            //txTransparentBlt (txDC(), xEnemy, yEnemy, 350, 341, Enemy, 0, 0, TX_WHITE);

            if(!GetAsyncKeyState (VK_SPACE))
            {
                    if(Idle_GG = 1)
                {
                    txTransparentBlt (txDC(), x1GG, y1GG, x2GG+56, y2GG+83, GG_Idle_1, Idle_GG*56, Idle_GG*83, TX_WHITE);
                     Idle_GG += 1;
                }

                if(Idle_GG = 2)
                {
                    txTransparentBlt (txDC(), x1GG, y1GG, x2GG+55, y2GG+80, GG_Idle_2, Idle_GG*55, Idle_GG*80, TX_WHITE);
                     Idle_GG += 1;
                }

                if(Idle_GG = 3)
                {
                    txTransparentBlt (txDC(), x1GG, y1GG, x2GG+56, y2GG+82, GG_Idle_3, Idle_GG*56, Idle_GG*82, TX_WHITE);
                     Idle_GG += 1;
                }

                if(Idle_GG = 4)
                {
                    txTransparentBlt (txDC(), x1GG, y1GG, x2GG+55, y2GG+84, GG_Idle_4, Idle_GG*55, Idle_GG*84, TX_WHITE);
                     Idle_GG -= 3;
                }

            }


            if(GetAsyncKeyState (VK_UP))
            {
                   y1GG -= 10;
            }

            if(GetAsyncKeyState (VK_DOWN))
            {
                    y1GG += 10;
            }

            if(GetAsyncKeyState (VK_RIGHT))
            {
                    x1GG += 10;
            }

            if(GetAsyncKeyState (VK_LEFT))
            {
                    x1GG -= 10;
            }

            txEnd();
            txSleep(10);

        }

        txDeleteDC (Background_1);
        txDeleteDC (Enemy);


    txTextCursor (false);
    return 0;
}
