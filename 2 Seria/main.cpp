//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <Заголовок>\n
//! @brief      <Подзаголовок>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Автор>, <Год> (<Имя> <Почта>)
//! @date       <Дата>
//!
//! @par        Протестировано
//!           - (TODO: список платформ)
//!
//! @todo     - (TODO: список ближайших планов по этому файлу)
//!
//! @bug      - (TODO: список найденных ошибок в этом файле)
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!             - Только что созданный файл
//!
//}=======================================================================

#include "TXLib.h"

const COLORREF FEILD = RGB(222, 185, 117);
const COLORREF DIRT2 = RGB(90, 67, 33);
const COLORREF DIRT1 = RGB(118, 84, 50);
const COLORREF REDBRICK_COLOR = RGB(230, 50, 50);
const COLORREF RED_WOOD = RGB(200, 34, 34);
const COLORREF BROWN_COLOR = RGB(128, 64, 48);
const COLORREF BLUE_COLOR = RGB(0,191-50, 255);
const COLORREF GRASS_COLOR = RGB(124-55, 200, 0);
const COLORREF YELLOW_COLOR = RGB(200, 200, 0);
const COLORREF CLOUD_COLOR = RGB(100, 100, 130);
const COLORREF ASFALT_COLOR = RGB(128/2, 128/2, 160/2);
const COLORREF CUAN_COLOR = RGB(230, 230, 255);
const COLORREF FABRIKA = RGB(90, 90, 120);

const COLORREF P1 = RGB(173, 118, 63);
const COLORREF P2 = RGB(100, 68, 36);
const COLORREF P3 = RGB(207, 125, 42);
const COLORREF P4 = RGB(160,160, 255);

const COLORREF TREE = RGB(80+70, 136+70, 0);

const COLORREF ST = RGB(133, 94, 66);
const COLORREF ST_P = RGB(128,128,128);

const COLORREF DD = RGB(150,75,0);

void domik(int x, int y)
{
    txSetColor(DD, 0);
    txSetFillColor(DD);
    POINT dom[6] = {{x, y}, {x, y-100}, {x+50, y-150}, {x+100, y-100}, {x+100, y}, {x, y}};

    txPolygon(dom, 6);

}

void amb()
{
    POINT krisha[5] = {{300, 300}, {350, 250}, {450, 200}, {550, 250}, {600, 300}};

    txSetColor(RED_WOOD, 5);
    txSetFillColor(REDBRICK_COLOR);
    txRectangle(300, 500, 500+100, 300);
    txPolygon(krisha, 5);
    txSetColor(TX_WHITE, 3);
    txSetFillColor(RED_WOOD);
    txRectangle(375, 500, 525, 375);
}

void koleso(int x, int y, int r, float a)
{
    float a1 = a;
    float a2 = a+45;
    float a3 = a+90;
    float a4 = a+135;
    float a5 = a+180;
    float a6 = a+225;
    float a7 = a+270;
    float a8 = a+315;


    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
    int x5, y5;
    int x6, y6;
    int x7, y7;
    int x8, y8;


    txSetColor(TX_BLACK, 0);
    txSetFillColor(TX_BLACK);

    txCircle(x, y, r);

    x1 = x+r*cos(a1*3.14/180);
    y1 = y+r*sin(a1*3.14/180);
    x2 = x+r*cos(a2*3.14/180);
    y2 = y+r*sin(a2*3.14/180);
    x3 = x+r*cos(a3*3.14/180);
    y3 = y+r*sin(a3*3.14/180);
    x4 = x+r*cos(a4*3.14/180);
    y4 = y+r*sin(a4*3.14/180);
    x5 = x+r*cos(a5*3.14/180);
    y5 = y+r*sin(a5*3.14/180);
    x6 = x+r*cos(a6*3.14/180);
    y6 = y+r*sin(a6*3.14/180);
    x7 = x+r*cos(a7*3.14/180);
    y7 = y+r*sin(a7*3.14/180);
    x8 = x+r*cos(a8*3.14/180);
    y8 = y+r*sin(a8*3.14/180);


    txSetColor(TX_GRAY, 2);
    txSetFillColor(TX_GRAY);

    txLine(x, y, x1, y1);
    txLine(x, y, x2, y2);
    txLine(x, y, x3, y3);
    txLine(x, y, x4, y4);
    txLine(x, y, x5, y5);
    txLine(x, y, x6, y6);
    txLine(x, y, x7, y7);
    txLine(x, y, x8, y8);

    a1+=2;
    a2+=2;
    a3+=2;
    a4+=2;
    a5+=2;
    a6+=2;
    a7+=2;
    a8+=2;

}

void carr(int x, int y, float a)
{
    //x = 100
    //y = 100
    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);
    txRectangle(x, y+25, x+200, y+150);

    txSetColor(YELLOW_COLOR, 0);
    txSetFillColor(YELLOW_COLOR);
    POINT cabina[5] = {{x+210, y+25}, {x+250, y+50}, {x+299, y+100}, {x+299, y+165}, {x+210, y+165}};

    txPolygon(cabina, 5);

    txSetColor(TX_GRAY, 0);
    txSetFillColor(TX_GRAY);
    txRectangle(x, y+150, x+300, y+170);


    koleso(x+50, y+170, 20, a);
    koleso(x+250, y+170, 20, a);

    //txCircle(x+50, y+170, 20);
    //txCircle(x+250, y+170, 20);

    txSetColor(CUAN_COLOR, 0);
    txSetFillColor(CUAN_COLOR);
    txRectangle(x+220, y+65, x+255, y+115);

}

void carl(int x, int y, float a)
{
    //x = 100
    //y = 100
    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);
    txRectangle(x, y+25, x-200, y+150);

    txSetColor(YELLOW_COLOR, 0);
    txSetFillColor(YELLOW_COLOR);
    POINT cabina[5] = {{x-210, y+25}, {x-250, y+50}, {x-299, y+100}, {x-299, y+165}, {x-210, y+165}};

    txPolygon(cabina, 5);

    txSetColor(TX_GRAY, 0);
    txSetFillColor(TX_GRAY);
    txRectangle(x, y+150, x-300, y+170);



    koleso(x-50, y+170, 20, a);
    koleso(x-250, y+170, 20, a);

    //txCircle(x-50, y+170, 20);
    //txCircle(x-250, y+170, 20);

    txSetColor(CUAN_COLOR, 0);
    txSetFillColor(CUAN_COLOR);
    txRectangle(x-220, y+65, x-255, y+115);

}

void trackr(int x, int y, float a)
{
    txSetColor(YELLOW_COLOR, 0);
    txSetFillColor(YELLOW_COLOR);
    txRectangle(x, y, x+160, y-50);


    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);
    txRectangle(x-10, y, x-200, y-75);

    txSetColor(YELLOW_COLOR, 4);
    txSetFillColor(CUAN_COLOR);
    txRectangle(x, y-50, x+90, y-120);



    koleso(x+40, y, 40, a);
    koleso(x+140, y+10, 30, a*1.5);
    koleso(x-30, y+15, 25, a*2);
    koleso(x-180, y+15, 25, a*2);

    //txCircle(x+40, y, 40);
    //txCircle(x+140, y+10, 30);

    //txCircle(x-30, y+15, 25);
    //txCircle(x-180, y+15, 25);



    txRectangle(x, y, x-10, y-10);

}

void tree(int x, int y)
{
    //x = 100
    //y = 100

    txSetColor(DIRT2, 0);
    txSetFillColor(DIRT2);
    txRectangle(x+35, y+50, x+65, y+125);

    txSetColor(TREE, 0);
    txSetFillColor(TREE);
    txEllipse(x, y+100, x+100, y-50);

}

void trackl(int x, int y, float a)
{
    txSetColor(YELLOW_COLOR, 0);
    txSetFillColor(YELLOW_COLOR);
    txRectangle(x, y, x-160, y-50);

    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);
    txRectangle(x+10, y, x+200, y-75);

    txSetColor(YELLOW_COLOR, 4);
    txSetFillColor(CUAN_COLOR);
    txRectangle(x, y-50, x-90, y-120);


    koleso(x-40, y, 40, a);
    koleso(x-140, y, 30, a*1.5);
    koleso(x+30, y+15, 40, a);
    koleso(x+180, y+15, 25, a);

    //txCircle(x-40, y, 40);
    //txCircle(x-140, y, 30);

    //txSetColor(TX_BLACK, 0);
    //txSetFillColor(TX_BLACK);
    //txCircle(x-40, y, 40);
    //txCircle(x-140, y+10, 30);

    //txCircle(x+30, y+15, 25);
    //txCircle(x+180, y+15, 25);



    txRectangle(x, y, x-10, y-10);
}

void combain(int x, int y, float a)
{
    txSetColor(YELLOW_COLOR, 0);
    txSetFillColor(YELLOW_COLOR);

    POINT comb[7] = {{x, y}, {x+150, y}, {x+150, y-100}, {x, y-100}, {x-50, y-100}, {x-50, y-50}, {x, y}};

    txPolygon(comb, 7);

    POINT shatka[4] = {{x+150, y-30}, {x+190, y-10}, {x+190, y}, {x+150, y}};

    txPolygon(shatka, 4);

    //txPolygon(x, y, x+200, y-100);

    txSetColor(YELLOW_COLOR, 4);
    txSetFillColor(CUAN_COLOR);
    txRectangle(x+100, y-50, x+150, y-120);



    koleso(x, y+5, 15, a*2);
    koleso(x+130, y-5, 25, a*1.3);

    //txCircle(x, y+5, 15);
    //txCircle(x+130, y-5, 25);

    txSetColor(CLOUD_COLOR, 0);
    txSetFillColor(CLOUD_COLOR);
    txCircle(x+190, y-10, 17);
}

void stolb(int x, int y)
{

    txSetColor(ST,0);
    txSetFillColor(ST);

    txRectangle(x, y+200, x+10, y+50);

    txSetColor(TX_BLACK, 2);
    txSetFillColor(TX_BLACK);

    txArc (x, y+50-10, x+300, y+50+50-10, 183, 173);
    txArc (x, y+10+50-10, x+300, y+50+10+50-10, 183, 173);

    txSetColor(ST_P, 0);
    txSetFillColor(ST_P);

    txCircle(x+10, y+75, 6);
    txCircle(x+10, y+75+10, 6);

}

void man(int x, int y, int t)
{
    if(t == 1)
    {
    txSetColor(TX_BLACK, 3);
    txSetFillColor(TX_WHITE);
    txCircle(x, y, 10);
    txLine(x, y+10, x, y+50);

    txLine(x, y+10, x-25, y+40);
    txLine(x, y+10, x+25, y+40);

    txLine(x, y+50, x+10, y+100);
    txLine(x, y+50, x-10, y+100);
    }

}

void pekarna(int x, int y)
{
    // x = 100;
    // y = 100;

    txSetColor(P2, 0);
    txSetFillColor(P2);

    txRectangle(x, y, x+300, y+200);

    txSetColor(P1, 0);
    txSetFillColor(P1);

    txRectangle(x+20, y+20, x+280, y+200);

    txSetColor(P2, 5);
    txSetFillColor(P3);

    txRectangle(x+75, y+25, x+225, y+75);

    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);

    txSelectFont ("Arial", 20, 0, FW_BOLD);
    txDrawText   (x+80, y+30, x+215, y+70, "Вкусные\n"
                                        "булочки");

    txSetColor(TX_WHITE, 7);
    txSetFillColor(P4);

    txRectangle(x+200, y+100, x+250, y+200);

    txRectangle(x+50, y+90, x+150, y+160);

}

void mangr(int x, int y)
{

    txSetColor(TX_BLACK, 3);
    txSetFillColor(TX_WHITE);
    txCircle(x, y, 10);
    txLine(x, y+10, x, y+50);

    txLine(x, y+10, x-25, y+40);
    txLine(x, y+10, x+25, y+10);

    txLine(x, y+50, x+10, y+100);
    txLine(x, y+50, x-10, y+100);

    txSetColor(DIRT1, 0);
    txSetFillColor(DIRT1);

    txRectangle(x+25, y+10, x+75, y-25);

}

void mangl(int x, int y)
{

    txSetColor(TX_BLACK, 3);
    txSetFillColor(TX_WHITE);
    txCircle(x, y, 10);
    txLine(x, y+10, x, y+50);

    txLine(x, y+10, x-25, y+10);
    txLine(x, y+10, x+25, y+40);

    txLine(x, y+50, x+10, y+100);
    txLine(x, y+50, x-10, y+100);

    txSetColor(DIRT1, 0);
    txSetFillColor(DIRT1);

    txRectangle(x-25, y+10, x-75, y-25);
}

void rost4(int x, int y)
{


    txSetColor(FEILD, 0);
    txSetFillColor(FEILD);

    txRectangle(x, y, x+5, y-40);

    //abc = abc + 1;


}


void v_pole(int x, int y)
{
        txSetColor(DIRT2, 0);
        txSetFillColor(DIRT2);
        txRectangle(0, y, x, y-100);



}


int main()
    {

    txCreateWindow (1000, 700);

    int time = 0;
    if(time <= 1000)
    {
    while(time <= 1000)
    {




    txSetColor(TX_WHITE, 0);
    txSetFillColor(TX_WHITE);



    txSelectFont ("Arial", 60, 0, FW_BOLD);
    txDrawText   (100, 250, 1000, 500, "Вторая часть мини-фильма:\n"
                                        "Как появляются булочки");

     time = time + 5;

     Sleep(3);

    }
    }

    int timea = 0;

    if(timea <= 1000)
    {
    //l = 1;
    while(timea <= 1000)
    {
    txBegin();
    txSetColor(TX_BLACK, 0);
    txSetFillColor(TX_BLACK);
    txRectangle(0, 0, 1000, 1000);


    txSetColor(TX_RED, 0);
    txSetFillColor(TX_RED);
    txSelectFont ("Arial", 60, 0, FW_BOLD);
    txDrawText   (300, 100, 700, 300, "ДИСКЛЕЙМЕР");

    txSetColor(TX_WHITE, 0);
    txSetFillColor(TX_WHITE);



    txSelectFont ("Arial", 30, 0, FW_BOLD);
    txDrawText   (100, 250, 1000, 1000, "Фильм не является учебным пособием.\n"
                                        "Булочки не создаются именно так, если бы был "
                                        "весь процесс, то мы бы сидели не 2 минуты а минут так 10.\n"
                                        "Мне дальше лень придумывать текст. \n"
                                        "Приятного просмотра!");




     timea = timea + 4;

    Sleep(1);
    txEnd();
    }
    }





int x = 750;
if(x >= 200)
{

    while(x >= 200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(800, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);
        //txPlaySound("track.wav",NULL, SND_LOOP);

        tree(100, 300);
        tree(700, 300);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

    amb();
    combain(60, 600, 0);
    //trackr(500, 500);
        man(x, 600, 1);



        Sleep(10);
        x = x - 2;
        txEnd();
    }
}
float l = 0;
int x1 = 60;
if(x1 <= 900)
{
    txPlaySound ("1.wav", SND_LOOP);
    while(x1 <= 900)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(800, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        tree(100, 300);
        tree(700, 300);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);



    amb();
    combain(x1, 600, l);

    man(0, 600, 0);
    l = l + 4;
    x1 = x1+3;
    Sleep(5);
    txEnd();
    }

}

int x_h[1000];
int y_h[1000];

int lb = 0, ub = 1000;
int bl = 440, bu = 690;

for(int i = 0; i <= 1000; i++)
{


    x_h[i] = (rand() % (ub - lb + 1)) + lb;


    y_h[i] = (rand() % (bu - bl + 1)) + bl;

}
l = 0;
int f = 0;
if(f <= 1200)
{

    //txPlaySound ("1.wav", SND_LOOP);
    while(f <= 1200)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);




        //////1полоса








        for(int i = 0; i <= 1000; i++)
        {
            rost4(x_h[i], y_h[i]);
        }
    v_pole(f+0, 700);
    combain(f-175, 650, l);
    l =  l+4;
    f = f+2;





    Sleep(3);
    txEnd();

}
}
l = 0;
int a = 0;
if(a <= 1200)
{

    //txPlaySound ("1.wav", SND_LOOP);
    while(a <= 1200)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);



        //////1полоса





        for(int i = 0; i <= 1000; i++)
        {
            rost4(x_h[i], y_h[i]);
        }




    v_pole(10000, 700);
    v_pole(a+0, 600);
    combain(a-175, 550, l);
    a = a+2;
    l = l + 4;




    Sleep(3);
    txEnd();

}
}
l = 0;
int b = 0;
if(b <= 1200)
{

    //txPlaySound ("1.wav", SND_LOOP);
    while(b <= 1200)
    {


            txBegin();
            txSetColor(BLUE_COLOR, 0);
            txSetFillColor(BLUE_COLOR);
            txRectangle(0, 0, 1000, 1000);


            txSetColor(DIRT1, 0);
            txSetFillColor(DIRT1);
            txRectangle(0, 400, 1000, 1000);



        //////1полоса





        for(int i = 0; i <= 1000; i++)
        {
            rost4(x_h[i], y_h[i]);
        }



    v_pole(10000, 700);
    v_pole(10000, 600);
    v_pole(b+0, 500);
    combain(b-175, 450, l);
    b = b+2;
    l = l+4;




    Sleep(3);
    txEnd();

}
}


int e = 400;

if(e <= 1200)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(400, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);





        combain(225, 600, 0);
        trackr(e, 600, l);


        Sleep(10);
        l = l+4;
        e = e + 2;
        txEnd();
    }
}

e = -100;
if(e <= 1200)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(700, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);
        tree(350, 400);
        tree(600, 400);
        tree(850, 400);




        trackr(e, 600, l);


        Sleep(10);
        e = e + 2;
        l = l+4;
        txEnd();
    }
}

e = -100;
if(e <= 400)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 400)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);


        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(615, 200, 1000, 700);
        //////////////окна
        txSetColor(CUAN_COLOR, 0);
        txSetFillColor(CUAN_COLOR);
        txRectangle(700, 300, 800, 400);

        txSetColor(CUAN_COLOR, 0);
        txSetFillColor(CUAN_COLOR);
        txRectangle(900, 300, 1000, 400);
        ///////////////
        trackl(e, 600, l);

        tree(200, 400);



        Sleep(10);
        e = e + 2;
        l = l+4;
        txEnd();
    }
}

e = 600;
if(e <= 1200)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);


        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0+385, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(615-615, 200, 1000-615, 700);
        //////////////окна
        txSetColor(CUAN_COLOR, 0);
        txSetFillColor(CUAN_COLOR);
        txRectangle(700-615, 300, 800-615, 400);

        txSetColor(CUAN_COLOR, 0);
        txSetFillColor(CUAN_COLOR);
        txRectangle(900-630, 300, 1000-630, 400);
        ///////////////

        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(385, 400, 550, 450);
        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(500, 450, 550, 500);

        tree(700, 400);

        trackr(600, 600, l);





        Sleep(5);
        e = e + 10;
        txEnd();
    }
}

e = 600;
if(e <= 1200)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);


        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0+385, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(615-615, 200, 1000-615, 700);
        //////////////окна
        txSetColor(CUAN_COLOR, 0);
        txSetFillColor(CUAN_COLOR);
        txRectangle(700-615, 300, 800-615, 400);

        txSetColor(CUAN_COLOR, 0);
        txSetFillColor(CUAN_COLOR);
        txRectangle(900-630, 300, 1000-630, 400);
        ///////////////

        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(385, 400, 550, 450);
        txSetColor(FABRIKA, 0);
        txSetFillColor(FABRIKA);
        txRectangle(500, 450, 550, 500);

        tree(700, 400);




        trackr(e, 600, l);


        Sleep(5);
        l = l+4;
        e = e + 2;
        txEnd();
    }
}

e = -100;
if(e <= 1200)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1200)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(200, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);
        tree(350, 400);
        tree(600, 400);
        tree(850, 400);




        trackr(e, 600, l);


        Sleep(10);
        e = e + 2;
        l = l+4;
        txEnd();
    }
}

e = -100;
if(e <= 600)
{
    txPlaySound ("1.wav", SND_LOOP);
    while(e <= 600)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);


        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        trackr(e, 600, l);

        txSetColor(RED_WOOD, 0);
        txSetFillColor(RED_WOOD);
        txRectangle(300, 300, 800, 700);

        Sleep(10);
        e = e + 2;
        l = l+4;
        txEnd();
    }
}
l = 0;
e = 500;
if(e <= 1100)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1300)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);



        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        carr(e, 500, l);

        txSetColor(RED_WOOD, 0);
        txSetFillColor(RED_WOOD);
        txRectangle(300, 300, 800, 700);

        Sleep(10);
        e = e + 2;
        l = l+10;
        txEnd();
    }
}

e = -100;
if(e <= 1100)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 1300)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(500, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);
        tree(350, 400);
        tree(600, 400);
        tree(850, 400);



        carr(e, 500, l);



        Sleep(10);
        e = e + 2;
        l = l+10;
        txEnd();
    }
}

e = -100;
if(e <= 400)
{
    //txPlaySound ("1.wav", SND_LOOP);
    while(e <= 400)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(700, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        pekarna(400, 340);

        carl(e, 500, l);



        Sleep(10);
        e = e + 2;
        l = l+10;
        txEnd();
    }
}

e = 450;
if(e <= 600)
{
    txPlaySound (NULL);
    while(e <= 600)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);
        domik(700, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        pekarna(400, 340);

        carl(400, 500,l);

        man(625, e, 1);

        Sleep(10);
        e = e + 2;
        txEnd();
    }
}

e = 624;
if(e >= 424)
{

    while(e >= 424)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);
        domik(700, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        pekarna(400, 340);

        carl(400, 500, l);

        man(e, 600, 1);

        Sleep(10);
        e = e - 2;
        txEnd();
    }
}

e = 424;
if(e <= 624)
{

    while(e <= 624)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);

        domik(700, 420);
        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        pekarna(400, 340);

        carl(400, 500, l);

        mangr(e, 600);

        Sleep(10);
        e = e + 2;
        txEnd();
    }
}

e = 600;
if(e >= 450)
{

    while(e >= 450)
    {

        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);
        domik(700, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        pekarna(400, 340);

        carl(400, 500, l);

        mangr(625, e);

        Sleep(10);
        e = e - 2;
        txEnd();
    }
}

e = 400;
if(e >= -200)
{

    while(e >= -200)
    {
    txPlaySound ("1.wav", SND_LOOP);
        txBegin();
        txSetColor(BLUE_COLOR, 0);
        txSetFillColor(BLUE_COLOR);
        txRectangle(0, 0, 1000, 1000);
        domik(700, 420);

        txSetColor(GRASS_COLOR, 0);
        txSetFillColor(GRASS_COLOR);
        txRectangle(0, 400, 1000, 1000);

        txSetColor(ASFALT_COLOR, 0);
        txSetFillColor(ASFALT_COLOR);
        txRectangle(0, 550, 1000, 700);

        stolb(-230, 250);
        stolb(50, 250);
        stolb(330, 250);
        stolb(610, 250);
        stolb(890, 250);

        tree(100, 400);

        tree(850, 400);



        pekarna(400, 340);

        carl(e, 500, l);



        Sleep(10);
        e = e - 2;
        l = l-10;
        txEnd();
    }
}

int g = 0;
while(g <= 1000)
{
        txPlaySound (NULL);
        tree(100, 400);

        tree(850, 400);
        txBegin();
        txSetColor(TX_BLACK, 0);
        txSetFillColor(TX_BLACK);
        txRectangle(0, 0, g, 1000);




g = g+2;





Sleep(3);
txEnd();

}




txSetColor(TX_WHITE, 0);
txSetFillColor(TX_WHITE);

txSelectFont ("Arial", 60, 0, FW_BOLD);
txDrawText   (100, 250, 700, 350, "Конец последней части");

    //man(800+i, 500);

    txTextCursor(false);


}

