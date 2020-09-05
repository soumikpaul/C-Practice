#include <stdio.h>
#include <graphics.h>

int main()
{
    int i,j,k,gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    setpixel(200,200);
    getpixel(300,300);
    for(i=0;i<=100;i++)
    {
    for(j=0;j<=i;j++)
    {
    putpixel(i,j,RED);
    }
    }
    //int i=4;
    getch();
    closegraph();
    return 0;
}
