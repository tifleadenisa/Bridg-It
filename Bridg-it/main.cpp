#include <iostream>
#include<graphics.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <MMSystem.h>
#include <cstdlib>
#include <mmsystem.h>


using namespace std;

int N, t[12][12], cre, k=1, contorDificultate=1, meniu;
int player=1;
void citireHard ()
{
    N=11;
    t[1][1]=0;
t[1][2]=1;
t[1][3]=0;
t[1][4]=1;
t[1][5]=0;
t[1][6]=1;
t[1][7]=0;
t[1][8]=1;
t[1][9]=0;
t[1][10]=1;
t[1][11]=0;
t[2][1]=2;
t[2][2]=0;
t[2][3]=2;
t[2][4]=0;
t[2][5]=2;
t[2][6]=0;
t[2][7]=2;
t[2][8]=0;
t[2][9]=2;
t[2][10]=0;
t[2][11]=2;
t[3][1]=0;
t[3][2]=1;
t[3][3]=0;
t[3][4]=1;
t[3][5]=0;
t[3][6]=1;
t[3][7]=0;
t[3][8]=1;
t[3][9]=0;
t[3][10]=1;
t[3][11]=0;
t[4][1]=2;
t[4][2]=0;
t[4][3]=2;
t[4][4]=0;
t[4][5]=2;
t[4][6]=0;
t[4][7]=2;
t[4][8]=0;
t[4][9]=2;
t[4][10]=0;
t[4][11]=2;
t[5][1]=0;
t[5][2]=1;
t[5][3]=0;
t[5][4]=1;
t[5][5]=0;
t[5][6]=1;
t[5][7]=0;
t[5][8]=1;
t[5][9]=0;
t[5][10]=1;
t[5][11]=0;
t[6][1]=2;
t[6][2]=0;
t[6][3]=2;
t[6][4]=0;
t[6][5]=2;
t[6][6]=0;
t[6][7]=2;
t[6][8]=0;
t[6][9]=2;
t[6][10]=0;
t[6][11]=2;
t[7][1]=0;
t[7][2]=1;
t[7][3]=0;
t[7][4]=1;
t[7][5]=0;
t[7][6]=1;
t[7][7]=0;
t[7][8]=1;
t[7][9]=0;
t[7][10]=1;
t[7][11]=0;
t[8][1]=2;
t[8][2]=0;
t[8][3]=2;
t[8][4]=0;
t[8][5]=2;
t[8][6]=0;
t[8][7]=2;
t[8][8]=0;
t[8][9]=2;
t[8][10]=0;
t[8][11]=2;
t[9][1]=0;
t[9][2]=1;
t[9][3]=0;
t[9][4]=1;
t[9][5]=0;
t[9][6]=1;
t[9][7]=0;
t[9][8]=1;
t[9][9]=0;
t[9][10]=1;
t[9][11]=0;
t[10][1]=2;
t[10][2]=0;
t[10][3]=2;
t[10][4]=0;
t[10][5]=2;
t[10][6]=0;
t[10][7]=2;
t[10][8]=0;
t[10][9]=2;
t[10][10]=0;
t[10][11]=2;
t[11][1]=0;
t[11][2]=1;
t[11][3]=0;
t[11][4]=1;
t[11][5]=0;
t[11][6]=1;
t[11][7]=0;
t[11][8]=1;
t[11][9]=0;
t[11][10]=1;
t[11][11]=0;
}

void citireEasy()
{
       N=7;
    t[1][1]=0;
t[1][2]=1;
t[1][3]=0;
t[1][4]=1;
t[1][5]=0;
t[1][6]=1;
t[1][7]=0;
t[2][1]=2;
t[2][2]=0;
t[2][3]=2;
t[2][4]=0;
t[2][5]=2;
t[2][6]=0;
t[2][7]=2;
t[3][1]=0;
t[3][2]=1;
t[3][3]=0;
t[3][4]=1;
t[3][5]=0;
t[3][6]=1;
t[3][7]=0;
t[4][1]=2;
t[4][2]=0;
t[4][3]=2;
t[4][4]=0;
t[4][5]=2;
t[4][6]=0;
t[4][7]=2;
t[5][1]=0;
t[5][2]=1;
t[5][3]=0;
t[5][4]=1;
t[5][5]=0;
t[5][6]=1;
t[5][7]=0;
t[6][1]=2;
t[6][2]=0;
t[6][3]=2;
t[6][4]=0;
t[6][5]=2;
t[6][6]=0;
t[6][7]=2;
t[7][1]=0;
t[7][2]=1;
t[7][3]=0;
t[7][4]=1;
t[7][5]=0;
t[7][6]=1;
t[7][7]=0;
}



int culoare1=COLOR(245, 152, 66);
int culoare2=COLOR(90, 66, 245);




int h=0;
int minute=0;
int sec=0;

void cronometru();
void displayClock();
void ecranstart();
bool rezolvare(int x, int y);
int main();
bool solutie2();
bool solutie();
void afisareCastigator( int castigator);

void creare1()
{

    int i,j;

    cre=initwindow(1920,1080,"creare");



    setfillstyle(SOLID_FILL, 0xfaecd2);//tabla
    rectangle(800,150,1350,700);
     floodfill(805, 160,WHITE);

    rectangle(200,400,400,450);



   // setfillstyle(SOLID_FILL, COLOR(46, 29, 3));//background
    //floodfill(801,151,WHITE);
    readimagefile("fundalStart.jpg",0,0,1920,1080);

    settextstyle(BOLD_FONT,HORIZ_DIR, 4);
    outtextxy(300,400, "Player 1");
    outtextxy(300,450,"Player 2");
    circle(480,415,20);
    circle(480,470,20);
     setfillstyle(SOLID_FILL, 7);
        floodfill(480,415,WHITE);
         floodfill(480,470,WHITE);
    readimagefile("back2.gif", 300, 550,400,650);

    int aux1=0, aux2=0;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
                if(t[i][j]==1)
                {
                    circle(875+aux1,175+aux2,25);
                    setfillstyle(SOLID_FILL, culoare1);
                    floodfill(875+aux1,175+aux2, WHITE);
                    aux1+=100;
                }
                if(t[i][j]==2)
                {
                    circle(825+aux1, 175+aux2, 25);
                    setfillstyle(SOLID_FILL,culoare2);
                    floodfill(825+aux1, 175+aux2,WHITE);
                    aux1+=100;
                }
        }
        aux1=0;
        aux2+=50;
    }
    setfillstyle(SOLID_FILL, culoare1);
    bar(800,125,1351,150);
    bar(800,700,1351,725);
    setfillstyle(SOLID_FILL, culoare2);
    bar(775, 150, 800, 700);
    bar(1350, 150, 1375,700);


}

void creare2()
{

    int i,j;

    cre=initwindow(1920,1080,"creare");


    setfillstyle(SOLID_FILL, 0xfaecd2);//tabla
    rectangle(800,150,1150,500);
    floodfill(805, 160,WHITE);

    rectangle(200,400,400,450);



   // setfillstyle(SOLID_FILL, COLOR(46, 29, 3));//background
    //floodfill(801,151,WHITE);
    readimagefile("fundalStart.jpg",0,0,1920,1080);

    settextstyle(BOLD_FONT,HORIZ_DIR, 4);
    outtextxy(300,400, "Player 1");
    outtextxy(300,450,"Player 2");
    circle(480,415,20);
    circle(480,470,20);
     setfillstyle(SOLID_FILL, 7);
        floodfill(480,415,WHITE);
         floodfill(480,470,WHITE);
    readimagefile("back2.gif", 300, 550,400,650);
    int aux1=0, aux2=0;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
                if(t[i][j]==1)
                {
                    circle(875+aux1,175+aux2,25);
                    setfillstyle(SOLID_FILL, culoare1);
                    floodfill(875+aux1,175+aux2, WHITE);
                    aux1+=100;
                }
                if(t[i][j]==2)
                {
                    circle(825+aux1, 175+aux2, 25);
                    setfillstyle(SOLID_FILL,culoare2);
                    floodfill(825+aux1, 175+aux2,WHITE);
                    aux1+=100;
                }
        }
        aux1=0;
        aux2+=50;
    }
    setfillstyle(SOLID_FILL, culoare1);
    bar(800,125,1151,150);
    bar(800,500,1151,525);
    setfillstyle(SOLID_FILL, culoare2);
    bar(775, 150, 800, 500);
    bar(1150, 150, 1175,500);


}
int maiMic(int n)
{
    while(n%50!=0)
        n--;
    return n;
}

int cej1(int x)
{
    //in functie de coordonata x vedem ce coloana marcam
    if(x>850 && x<=900)return 2;
    if(x>900 && x<=950)return 3;
    if(x>950 && x<=1000)return 4;
    if(x>1000 && x<=1050)return 5;
    if(x>1050 && x<=1100)return 6;
    if(x>1100 && x<=1150)return 7;
    if(x>1150 && x<=1200)return 8;
    if(x>1200 && x<=1250)return 9;
    if(x>1250 && x<=1300)return 10;
    return 0;
}

int cei1(int y)
{
    //in functie de coordonata y vedem ce linie marcam
    if(y>200 &&y<=250)return 2;
    if(y>250 &&y<=300)return 3;
    if(y>300 &&y<=350)return 4;
    if(y>350 &&y<=400)return 5;
    if(y>400 &&y<=450)return 6;
    if(y>450 &&y<=500)return 7;
    if(y>500 &&y<=550)return 8;
    if(y>550 &&y<=600)return 9;
    if(y>600 &&y<=650)return 10;
    return 0;
}

int cej2(int x)
{
    //in functie de coordonata x vedem ce coloana marcam
    if(x>850 && x<=900)return 2;
    if(x>900 && x<=950)return 3;
    if(x>950 && x<=1000)return 4;
    if(x>1000 && x<=1050)return 5;
    if(x>1050 && x<=1100)return 6;
    return 0;
}

int cei2(int y)
{
    //in functie de coordonata y vedem ce linie marcam
    if(y>200 &&y<=250)return 2;
    if(y>250 &&y<=300)return 3;
    if(y>300 &&y<=350)return 4;
    if(y>350 &&y<=400)return 5;
    if(y>400 &&y<=450)return 6;
    return 0;
}

int linie(int contor)
{
    //contor impar -> vertical
    //contor par -> orizontal

    int mX, mY, aux1, aux2;
     while(1)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            mX=mousex();
            mY=mousey();
            if(contorDificultate==1)
            {
                aux1=cei1(mY);
                aux2=cej1(mX);
            }
            else
            {
                aux1=cei1(mY);
                aux2=cej1(mX);
            }
            //readimagefile("back2.gif", 300, 550,400,650);
            if(mX>=300 && mX<=400 && mY>=550 && mY<=650)
            {
                setcurrentwindow(meniu);
                ecranstart();
            }
            if(contor%2==1 && t[aux1][aux2]==0)//pentru bulinele 1
            {
               // setfillstyle(SOLID_FILL,4);
                //floodfill(270,220,WHITE);


                setfillstyle(SOLID_FILL, culoare1);
                   if(t[aux1-1][aux2]==1 && t[aux1+1][aux2]==1)
                   {
                        bar(maiMic(mX)+20, maiMic(mY), maiMic(mX)+30, maiMic(mY)+50);//verticala
                        t[aux1][aux2]=1;


                        setfillstyle(SOLID_FILL,7);
                        floodfill(480,415,WHITE);//player 1

                        setfillstyle(SOLID_FILL,culoare2);
                        floodfill(480,470,WHITE);//player2
                        return 1;
                   }
                    else
                    {    //setfillstyle(SOLID_FILL,4);
                        //floodfill(280,275,WHITE);


                        setfillstyle(SOLID_FILL, culoare1);
                        if(t[aux1][aux2-1]==1 && t[aux1][aux2+1]==1)
                        {
                            bar(maiMic(mX),maiMic(mY)+20, maiMic(mX)+50,maiMic(mY)+30);//orizontala
                            t[aux1][aux2]=1;

                        setfillstyle(SOLID_FILL,7);
                        floodfill(480,415,WHITE);

                        setfillstyle(SOLID_FILL, culoare2);
                        floodfill(480,470,WHITE);

                        return 2;
                        }
                    }
            }
            else
            {
                if(contor%2==0 && t[aux1][aux2]==0)//pentru bulinele 2
                {
                    setfillstyle(SOLID_FILL, culoare2);
                    if(t[aux1-1][aux2]==2 && t[aux1+1][aux2]==2)
                    {
                        bar(maiMic(mX)+20, maiMic(mY), maiMic(mX)+30, maiMic(mY)+50);//verticala
                        t[aux1][aux2]=2;

                         setfillstyle(SOLID_FILL, culoare1);
                        floodfill(480,415,WHITE);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(480,470,WHITE);
                        return 3;
                    }
                    else
                    {
                        if(t[aux1][aux2-1]==2 && t[aux1][aux2+1]==2)
                        {
                            bar(maiMic(mX),maiMic(mY)+20, maiMic(mX)+50,maiMic(mY)+30);//orizontala
                            t[aux1][aux2]=2;

                        setfillstyle(SOLID_FILL, culoare1);
                        floodfill(480,415,WHITE);
                        setfillstyle(SOLID_FILL,7);
                        floodfill(480,470,WHITE);
                            return 4;
                        }
                    }
                }
            }
        }
        { displayClock();

            delay(1000);
            sec++;

        if(sec>=60)
        {
        minute++;
            if(minute>=60)
                {
                    h++;
                    minute=0;
                }
        sec=0;
        }


        }



    }
    return 0;
}



//Verificare pentru player 1
int sol[12][12];
bool isSafe( int x, int y)
{
    if (x >= 1 && x <= N && y >= 1 && y <=N && t[x][y] == 1 && sol[x][y]!=1)
        return 1;
    return 0;
}

bool solutie()
{
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
         sol[i][j]=0;

    for(int i=1;i<=N;i++)
    {
        int ok=1;
        if (rezolvare(1, i) == 0){
            ok=0;}
        if(ok==1)
        {
            return 1;
        }
    }
    return 0;
}

bool rezolvare( int x, int y)
{
    if (x == N ) {
        sol[x][y] = 1;
        return 1;
    }
    if (isSafe( x, y) == 1) {
        sol[x][y] = 1;
        if (rezolvare( x + 1, y) == 1)
            return 1;
        if (rezolvare( x - 1, y) == 1)
            return 1;
        if (rezolvare( x, y + 1) == 1)
            return 1;
        if (rezolvare( x, y - 1) == 1)
            return 1;
        sol[x][y] = 0;
        return 0;
    }
    return 0;
}

//Verificare pentru player2
bool rezolvare2( int x, int y);

bool isSafe2( int x, int y)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N && t[x][y] == 2 && sol[x][y]!=2)
        return 1;

    return 0;
}

bool solutie2()
{
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
         sol[i][j]=0;

    for(int i=1;i<=N;i++)
    {
        int ok=1;
        if (rezolvare2( i, 1) == 0)
            ok=0;
        if(ok==1)
        {
            return 1;
        }
    }
    return 0;
}

bool rezolvare2(int x, int y)
{
    if (y== N) {
        sol[x][y] = 2;
        return 1;
    }

    if (isSafe2( x, y) ==1) {
        sol[x][y] = 2;
        if (rezolvare2( x + 1, y) == 1)
            return 1;
        if (rezolvare2( x - 1, y) == 1)
            return 1;
        if (rezolvare2( x, y + 1) == 1)
            return 1;
        if (rezolvare2( x, y - 1) == 1)
            return 1;
        sol[x][y] = 0;
        return 0;
    }
    return 0;
}

void afisareCastigator( int castigator)
{
    int big=initwindow(400, 200, "Winner",250,300);
    setcurrentwindow(big);
    setfillstyle(SOLID_FILL,0xfaecd2);
    floodfill(2,2,WHITE);
    if(castigator==1)
         readimagefile("jucator1.jpg",0,0,400,200);
    else
         readimagefile("jucator2.jpg",0,0,400,200);
    int x, y;
    while(1)
    {
        x=mousex();
        y=mousey();
        if(GetAsyncKeyState(VK_LBUTTON))
        {
                getch();
                closegraph(big);
                closegraph(cre);
                ecranstart();
        }
    }

}

bool melodie1=true;
bool melodie2=false;
int ok=0;
bool sing=true;

void options()
{
        initwindow(1920,1080);
        readimagefile("fundalOptions.jpg",0,0,1920,1080);
        //setcolor(BLACK);

        settextstyle(BOLD_FONT,HORIZ_DIR, 3);

        readimagefile("back2.gif", 50,70,150,170);

        outtextxy(400,510,"Sound options:");
        readimagefile("song1.gif",680,550,890,596);

        readimagefile("song2.gif",680,620,890,666);

        if(ok%2==0)
          readimagefile("cusunet1.gif",440,550,540,650);
        else
          readimagefile("farasunet1.gif",440,550,540,650);



        //outtextxy(800,500,"INCEPE PLAYER:");
        outtextxy(400,50,"Choose which player starts first:");
        outtextxy(670,90,"Player 1");
        outtextxy(670,140, "Player 2");
        circle(850,100,20);
        circle(850,150,20);
        setfillstyle(SOLID_FILL, 7);
        floodfill(850,100,WHITE);
        floodfill(850,150,WHITE);



        outtextxy(400,200,"Choose the color of each player:"); //Alegere culori jucatori
        outtextxy(670,240,"Player 1");
        //cerc 1
        circle(850,250,20);
        setfillstyle(SOLID_FILL, COLOR(245, 152, 66));//portocaliu
        floodfill(850,250,WHITE);

        //cerc2
        circle(910,250,20);
        setfillstyle(SOLID_FILL, COLOR(114, 245, 66));//verde
        floodfill(910,250,WHITE);

        //cerc3
        circle(970,250,20);
        setfillstyle(SOLID_FILL, COLOR(227, 38, 9)); //rosu
        floodfill(970,250,WHITE);

        outtextxy(670,290, "Player 2");
        //cerc1
        circle(850,300,20);
        setfillstyle(SOLID_FILL, COLOR(90, 66, 245));//albastru
        floodfill(850,300,WHITE);

        //cerc2
        circle(910,300,20);
        setfillstyle(SOLID_FILL, COLOR(176, 32, 186));//Mov
        floodfill(910,300,WHITE);

        //cerc3
        circle(970,300,20);
        setfillstyle(SOLID_FILL, COLOR(240, 205, 10));  //Galben
        floodfill(970,300,WHITE);

        setfillstyle(SOLID_FILL,7);
        outtextxy(400,350,"Choose the difficulty:");
        outtextxy(670,380,"Easy");
        outtextxy(670,430, "Hard");
        circle(850,390,20);
        circle(850,440,20);
        floodfill(850,395,WHITE);
        floodfill(850,445,WHITE);

         while(1)
         {

                int x=mousex();
                int y=mousey();
             if(GetAsyncKeyState(VK_LBUTTON))
             {
                 if(x>=50 && x<=150 && y>=70 && y<=170)
                   ecranstart();

                 if(x>=830 && x<=870 && y>=80 && y<=120)   //setare player1
                    {k=1;
                    setfillstyle(SOLID_FILL, COLOR(235, 21, 74));
                    floodfill(850,100,WHITE);
                    setfillstyle(SOLID_FILL, 7);
                    floodfill(850,150,WHITE);
                    player=1;
                    }

                if(x>=830 && x<=870 && y>=130 && y<=170)   //setare player2
                    {k=2;
                    setfillstyle(SOLID_FILL, COLOR(235, 21, 74));
                    floodfill(850,150,WHITE);
                    setfillstyle(SOLID_FILL, 7);
                    floodfill(850,100,WHITE);
                    player=2;
                    }

                if(x>=680 && x<=890 && y>=550 && y<=596)
                    {PlaySound(NULL,0,0);
                    PlaySound(TEXT("Melodie1.wav"),NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                    melodie1=true;
                    melodie2=false;
                    }

                if(x>=680 && x<=890 && y>=620 && y<=666)
                       { PlaySound(NULL,0,0);
                        PlaySound(TEXT("Melodie2.wav"),NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                        melodie2=true;
                        melodie1=false;
                       }

                if(x>=440 && x<=540 && y>=550 && y<650 )
                {   delay(500);
                    if(ok%2==0)
                  {
                    PlaySound(NULL,0,0);
                    readimagefile("farasunet1.gif",440,550,540,650);
                    sing=false;
                  }
                  else
                  { sing=true;
                    readimagefile("cusunet1.gif",440,550,540,650);
                   if(melodie1==true)
                    {
                      PlaySound(TEXT("Melodie1.wav"),NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
                    }
                  else
                       PlaySound(TEXT("Melodie2.wav"),NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

                  }
                  ok++;
                }

                if(x>=830 && x<=870 && y>=230 && y<=270)  //buton,portocaliu
                {
                    culoare1=COLOR(245, 152, 66);
                    readimagefile("bifa.gif",834,234,866,266);
                    readimagefile("verde.gif",894,234,926,266);
                    readimagefile("rosu.gif",954,234,986,266);


                }
                if(x>=890 && x<=930 && y>=230 && y<=270) //buton Verde
                {
                    culoare1=COLOR(114, 245, 66);
                    readimagefile("bifa.gif",894,234,926,266);
                    readimagefile("portocaliu.gif",834,234,866,266);
                    readimagefile("rosu.gif",954,234,986,266);

                }
                if(x>=950 && x<=990 && y>=230 && y<=270) //buton rosu
                {
                    culoare1=COLOR(227, 38, 9);
                    readimagefile("bifa.gif",954,234,986,266);
                    readimagefile("portocaliu.gif",834,234,866,266);
                    readimagefile("verde.gif",894,234,926,266);

                }
                if(x>=830 && x<=870 && y>=280 && y<=320) //buton albastru
                {
                    culoare2=COLOR(90, 66, 245);
                    readimagefile("bifa.gif",833,283,867,317);
                    readimagefile("mov.gif",894,284,926,316);
                    readimagefile("galben.gif",954,284,986,316);


                }
                if(x>=890 && x<=930 && y>=280 && y<=320)  //buton mov
                {
                    culoare2=COLOR(176, 32, 186);
                    readimagefile("bifa.gif",894,284,926,316);
                    readimagefile("albastru.gif",833,283,867,317);
                    readimagefile("galben.gif",954,284,986,316);

                }
                if(x>=950 && x<=990 && y>=280 && y<=320) //buton galben
                {
                    culoare2=COLOR(240, 205, 10);
                    readimagefile("bifa.gif",954,284,986,316);
                    readimagefile("mov.gif",894,284,926,316);
                    readimagefile("albastru.gif",833,283,867,317);

                }
                if(x>=830 && x<=870 && y>=370 && y<=410)
                    {
                    //easy
                    setfillstyle(SOLID_FILL, COLOR(235, 21, 74));
                    floodfill(850,375,WHITE);
                    setfillstyle(SOLID_FILL, 7);
                    floodfill(850,425,WHITE);
                    contorDificultate=0;
                    }
                if(x>=830 && x<=870 && y>=420 && y<=460)
                    {
                    //hard
                    setfillstyle(SOLID_FILL, COLOR(235, 21, 74));
                    floodfill(850,425,WHITE);
                    setfillstyle(SOLID_FILL, 7);
                    floodfill(850,375,WHITE);
                    contorDificultate=1;
                    }




             }
         }

    getch();
    closegraph();
}


void displayClock()
{  char s[50];
    char m[50];
    char H[50];

    readimagefile("timer2.gif",300,150,500,302);
    settextstyle(BOLD_FONT,HORIZ_DIR, 5);

    sprintf(H, "%d: ", h);
    sprintf(m, "%d: " , minute);
    sprintf(s, "%d", sec);
    outtextxy(335,210, H);
    outtextxy(385,210, m);
    outtextxy(425,210, s);


}
void cronometru()
{ while(true)
  { displayClock();

    delay(1000);
    sec++;

    if(sec>=60)
    {
        minute++;
        if(minute>=60)
        {
            h++;
            minute=0;
        }
        sec=0;
    }
   }

}

void instructions()
{
    int fereastra=initwindow(700,700);
    setcurrentwindow(fereastra);
    readimagefile("instructiuni.gif",0,0,700,700);
    //delay(5000);
    int x, y;
    while(1)
    {
        x=mousex();
        y=mousey();
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            //delay(500);
            if(x>=0 && x<=100 && y>=0 && y<=700)
            {
                getch();
                closegraph(fereastra);
                ecranstart();
            }
        }
    }

}
void ecranstart()
{
    meniu=initwindow(1920,1080);

   if(melodie1==true && sing==true)
    PlaySound(TEXT("Melodie1.wav"),NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
  else
    if(melodie2==true && sing==true)
        PlaySound(TEXT("Melodie2.wav"),NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);


   readimagefile("fundal2.jpg",0,0,1920,1080);
   readimagefile("titlugif.gif",500,0,1100,454);

   readimagefile("startgif.gif",600,380,1000,480);
   readimagefile("optionsgif.gif",600,520,1000,620);
   readimagefile("instructions.gif",600,670,1000,770);


    int x; int y;

     while(1)
    {


        x=mousex();
        y=mousey();
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            if(x>=600 && x<=1000 && y>=380 && y<=480)
            {
                if(contorDificultate==1)
                {
                    citireHard();
                    creare1();
                }
                else
                {
                    citireEasy();
                    creare2();
                }

    while(solutie()==false && solutie2()==false)
    {
        linie(k);
        k++;
    }
    //afiseaza msj a castigat
    if(solutie()==true) afisareCastigator(1);
    else afisareCastigator(2);


            }

            if(x>=600 && x<=1000 && y>=520  && y<=620)
            {
                options();
            }
            if(x>=600 && x<=1000 && y>=670  && y<=770)
            {
                instructions();
            }
        }

    }
    getch();
    closegraph();
}




int main()
{
    ecranstart();

    return 0;
}



