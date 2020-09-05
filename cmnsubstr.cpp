#include <iostream>
#include <string.h>
using namespace std;
int max(int a,int b)
{ return (a>b?a:b);
}
int lcssub(char* x, char* y, int m, int n)
{
int lcs[m+1][n+1];
int result=0;
for(int i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
{
if(i==0||j==0)
lcs[i][j]=0;
else if(x[i-1]==y[j-1])
{
lcs[i][j]=lcs[i-1][j-1]+1;
result=max(result,lcs[i][j]);
}
else 
lcs[i][j]=0;
}
}
return result;
}
int main()
{
char x[]="geeksforgeeks";
char y[]="geeksquiz";
int m=strlen(x);
int n=strlen(y);
cout<<lcssub(x,y,m,n);
return 0;
}

