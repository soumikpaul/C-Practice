#include <graphics.h>
int main()
{
int gd=DETECT, gm;
initgraph(&gd,&gm,NULL);
//int points[]={200,200,100,200,100,250,200,250,200,300,100,300};
int z[]={100,100,200,100,100,200,200,200};
int e[]={330,100,230,100,230,150,300,150,230,150,230,200,330,200};
int b[]={360,100,360,200,360,100,460,100,460,150,360,150,460,150,460,200,360,200};
int a[]={480,200,530,100,580,200,555,150,505,150};
//drawpoly(6,points);
setColor(RED);
drawpoly(4,z);
/*setfillstyle(5, 8);
fillpoly(7,e);
setfillstyle(5,12);
fillpoly(9,b);
setfillstyle(5,6);
fillpoly(5,a);
*/getch();
closegraph();
delay(5000);
return 0;
}

