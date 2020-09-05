#include <graphics.h>
int main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,NULL);
arc(100,100,0,180,50);

getch();
closegraph();
delay(5000);
return 0;
}

