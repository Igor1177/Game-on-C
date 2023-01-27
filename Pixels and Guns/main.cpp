#include "TXLib.h"


int main()
{
txCreateWindow (1600, 900);
        HDC  Background_1 = txLoadImage ("Images/Backgrounds/Backgroundfirst.bmp");
        //HDC  Enemy = txLoadImage ("Images/Sprites_Heroes/Enemy.bmp");
        HDC  GG_Idle = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle.bmp");
        int xGG = 0;
        int yGG = 0;
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
                txTransparentBlt (txDC(), xGG, yGG, 80, 94, GG_Idle, Idle_GG*56, 0, TX_WHITE);
                Idle_GG += 1;
                    if (Idle_GG>=4) Idle_GG = 1;
            }


            if(GetAsyncKeyState (VK_UP))
            {
                   yGG -= 10;
            }

            if(GetAsyncKeyState (VK_DOWN))
            {
                    yGG += 10;
            }

            if(GetAsyncKeyState (VK_RIGHT))
            {
                    xGG += 10;
            }

            if(GetAsyncKeyState (VK_LEFT))
            {
                    xGG -= 10;
            }

            txEnd();
            txSleep(10);

        }

        txDeleteDC (Background_1);


    txTextCursor (false);
    return 0;
}
