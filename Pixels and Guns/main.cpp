#include "TXLib.h"


int main()
{
txCreateWindow (1600, 900);
        HDC  Background_1 = txLoadImage ("Images/Backgrounds/Backgroundfirst.bmp");
        HDC  GG_Run_Right = txLoadImage ("Images/Sprites_Heroes/Run_knight/Run_right.bmp");
        //HDC GG_Run_Left
        HDC GG_Jump = txLoadImage ("Images/Sprites_Heroes/Jump_knight/Jump.bmp");
        HDC GG_Idle = txLoadImage ("Images/Sprites_Heroes/Idle_knight/Idle.bmp");
        int xGG = 0;
        int yGG = 0;
        int Ground = 700;
        int Idle_GG = 1;
        int Run_GG = 1;
        int Jump_GG = 1;

        while (!GetAsyncKeyState (VK_ESCAPE))
        {
            txBegin();
            txSetColor(TX_WHITE);
            txSetFillColor(TX_BLACK);
            txBitBlt (txDC(), 0, 0, 1600, 900, Background_1);
            //txTransparentBlt (txDC(), xEnemy, yEnemy, 350, 341, Enemy, 0, 0, TX_WHITE);

            if(!GetAsyncKeyState ('D') || ('A'))
            {
                txTransparentBlt (txDC(), xGG, yGG, 53, 72, GG_Idle, Idle_GG*53, 0, TX_WHITE);
                Idle_GG += 1;
                txSleep(40);
                    if (Idle_GG>=4) Idle_GG = 1;
            }


            if(GetAsyncKeyState ('D'))
            {
                    xGG += 10;
                    txTransparentBlt (txDC(), xGG, yGG, 70, 72, GG_Run_Right, Run_GG*70, 0, TX_WHITE);
                        Run_GG += 1;
                        txSleep(10);
                            if (Run_GG>=7) Run_GG = 1;
            }

            if(GetAsyncKeyState ('A'))
            {
                    xGG -= 10;
                    txTransparentBlt (txDC(), xGG, yGG, 70, 72, GG_Run_Right, Run_GG*70, 0, TX_WHITE);
                        Run_GG += 1;
                        txSleep(10);
                            if (Run_GG>=7) Run_GG = 1;
            }

            yGG += 20;
            if (yGG > Ground-53)
            {
                yGG = Ground-53;
            }
            if(GetAsyncKeyState (VK_SPACE))
            {
                 yGG -= 30;
                 txTransparentBlt (txDC(), xGG, yGG, 70, 72, GG_Jump, Jump_GG*70, 0, TX_WHITE);
                    Jump_GG += 1;
                    txSleep(10);
                        if (Jump_GG>=7) Jump_GG = 1;
            }

            txEnd();
            txSleep(10);

        }

        txDeleteDC (Background_1);


    txTextCursor (false);
    return 0;
}
