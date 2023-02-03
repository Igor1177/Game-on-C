#include "TXLib.h"


int main()
{
txCreateWindow (1600, 900);
        HDC  Background_1 = txLoadImage ("Images/Backgrounds/Backgroundfirst.bmp");
        HDC  GG_Run_Right = txLoadImage ("Images/Sprites_Heroes/Run_knight/Run_right.bmp");
        //HDC GG_Run_Left
        HDC  GG_Idle = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle.bmp");
        int xGG = 0;
        int yGG = 0;
        int Idle_GG = 1;
        int Run_GG = 1;

        while (!GetAsyncKeyState (VK_ESCAPE))
        {
            txBegin();
            txSetColor(TX_WHITE);
            txSetFillColor(TX_BLACK);
            txBitBlt (txDC(), 0, 0, 1600, 900, Background_1);
            //txTransparentBlt (txDC(), xEnemy, yEnemy, 350, 341, Enemy, 0, 0, TX_WHITE);

            if(!GetAsyncKeyState ('W') || ('S') || ('D') || ('A'))
            {
                txTransparentBlt (txDC(), xGG, yGG, 53, 72, GG_Idle, Idle_GG*53, 0, TX_WHITE);
                Idle_GG += 1;
                txSleep(40);
                    if (Idle_GG>=4) Idle_GG = 1;
            }


            if(GetAsyncKeyState ('W'))
            {
                   yGG += 10;
                    txTransparentBlt (txDC(), xGG, yGG, 67, 72, GG_Run_Right, Run_GG*67, 0, TX_WHITE);
                        Run_GG += 1;
                        txSleep(40);
                            if (Run_GG>=7) Idle_GG = 1;
            }

            if(GetAsyncKeyState ('S'))
            {
                    yGG -= 10;
                    txTransparentBlt (txDC(), xGG, yGG, 67, 72, GG_Run_Right, Run_GG*67, 0, TX_WHITE);
                        Run_GG += 1;
                        txSleep(40);
                            if (Run_GG>=7) Idle_GG = 1;
            }

            if(GetAsyncKeyState ('D'))
            {
                    xGG += 10;
                    txTransparentBlt (txDC(), xGG, yGG, 67, 72, GG_Run_Right, Run_GG*67, 0, TX_WHITE);
                        Run_GG += 1;
                        txSleep(40);
                            if (Run_GG>=7) Idle_GG = 1;
            }

            if(GetAsyncKeyState ('A'))
            {
                    xGG -= 10;
                    txTransparentBlt (txDC(), xGG, yGG, 67, 72, GG_Run_Right, Run_GG*67, 0, TX_WHITE);
                        Run_GG += 1;
                        txSleep(40);
                            if (Run_GG>=7) Idle_GG = 1;
            }

            txEnd();
            txSleep(10);

        }

        txDeleteDC (Background_1);


    txTextCursor (false);
    return 0;
}
