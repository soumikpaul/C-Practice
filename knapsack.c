#include <stdio.h>
int max(int a,int b)
{
return (a>b?a:b);
}
void knapsack(int W,int wt[],int val[],int n)
{
int i,j;
int arr[n+1][W+1];
for(i=0;i<=n;i++)
{
for(j=0;j<=W;j++)
{
if(i==0||j==0)
{
arr[i][j]=0;
}
else if(wt[n-1]>=W)
{
arr[i][j]=arr[i-1][j];
}
else 
{
arr[i][j]=max(arr[i-1][j],arr[i-1][j-wt[i-1]]+val[i-1]);
}
}
}
printf("%d",arr[n][W]);
}
int main()
{
int n,W,i;
scanf("%d",&n);
int wt[n],val[n];
for (i=0;i<n;i++)
{
scanf("%d",&wt[i]);
}
//printf("S1");
for (i=0;i<n;i++)
{
scanf("%d",&val[i]);
}
scanf("%d",&W);
//printf("S2");
knapsack(W,wt,val,n);
return 0;
}
