#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,n,j,res=0;
cin>>n;
bool arr[n+1];
for(i=1;i<=n;i++)
{
arr[i]==true;
}
for(i=2;i*i<n;i++)
{
if(arr[i])
{
for(j=i*2;j<=n;j+=i)
arr[j]=false;
}
}
for(i=2;i<=n;i++)
{
if(arr[i])
res+=i;
}
cout<<res<<endl;
return 0;
}

