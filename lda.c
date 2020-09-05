#include <graphics.h>
//#include <device.h>
#include <math.h>
#define Round(a) ((int)(a+0.5))
void grid(){
	int i;
	    setcolor(8);
    for(i=0;i<640;i+=10){
	if(i==320)
	    setcolor(12);
	line(i,0,i,480);
	if(i==320)
	    setcolor(8);
    }
    for(i=0;i<480;i+=10){
	if(i==240)
	    setcolor(12);
	line(0,i,640,i);
	if(i==240)
	    setcolor(8);
    }
}
void plot(int x,int y,int col){
	int k,j;
	//if(dx>0&&dy>0)
	for(k=320+x*10+1;k<320+x*10+10;k++){
	for(j=240-y*10-1;j>240-y*10-10;j--){
	   putpixel(k,j,col);
	}}
}
void lineDDA(int xa,int ya,int xb,int yb)
{
int dx=xb-xa,steps,k;
int dy=yb-ya;
float xIncre,yIncre,x=xa,y=ya;
if(abs(dx)>=abs(dy))
steps=dx;
else steps=dy;
xIncre=dx/(float)steps;
yIncre=dy/(float)steps;
//setPixel(Round(x),Round(y));
for(k=0;k<=steps;k++)
{
x+=xIncre;
y+=yIncre;
plot(Round(x),Round(y),5);
delay(15);
}
}
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
grid();
lineDDA(10,10,20,10);
lineDDA(10,10,15,20);
lineDDA(20,10,15,20);
outtextxy(460,100,"Soumik");
getch();
delay(10000);
closegraph();
}
