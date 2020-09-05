#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
int a,b,c,i,peri,sum,max,n;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
for(i=n-1;i>2;i--)
{
 a=arr[i];
  b=arr[i-1];
 c=arr[i-2];
if(((a+b)>c)&&((a+c)>b)&&((b+c))>a)
{
max=1;
//print(a,b,c);
break;
}
else
{
max=0;
continue;
}

}
if(max==1)
{
cout<<c<<" "<<b<<" "<<a<<endl;
}
else
{
cout<<"-1";
}
}
