#include <stdio.h>
int main(){
int s,i,j;
printf("Enter s");
scanf("%d",&s);
int ar[s][s];
for(i=0;i<s;i++)
{
for(j=0;j<s;j++)
{
scanf("%d",&ar[i][j]);
}
}

for(i=0;i<s;i++)
{
for(j=0;j<s;j++)
{
printf("%d",ar[i][j]);
}
printf("#n");
}

}
