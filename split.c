#include <stdio.h>
#include <math.h>
float maxi(float a,float b)
{
return (a>b?a:b);
}
int main()
{
float n,j,max=1.0;
float i,res;
int d;
scanf("%f",&n);
for(j=2.0;j<n/2;j++)
{
//d=(int)(n/j);
float sum=1.0;
float f=n/j;
//printf("%d",d);
for(i=0.0;i<j;i++)
{
sum=sum*f;

max=maxi(max,sum);
}
printf("   j=%f   f=%f     sum=%f\n",j,f,sum);
}
printf("%f",max);
}
