#include <bits/stdc++.h>
using namespace std;
int r,c;
int min(int a,int b)
{
return a>b?a:b;
}
int findpath(int arr[][], int r, int c)
{
int ans=0;
if(arr[c][r]!=1)
return 0;
else 
return min(findpath(arr,r,c-1)||findpath(arr,r-1,c))+1;
}
int main()
{
//int r,c;
cin>>r>>c;
int arr[c][r];
for(int i=0;i<c;i++)
{
for(int j=0;j<r;j++)
{
cin>>arr[i][j];
}
}
int k=findpath(arr,r,c);
cout<<k;
return 0;
}
