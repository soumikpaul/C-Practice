#include <iostream>
//#include <math.h>
int main()
{
int i,peri,sum,max,n;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
for(i=n-1;i>2;i--)
{
int a=arr[i];
int b=arr[i-1];
int c=arr[i-2];
if(((a+b)>c)&&((a+c)>b)&&((b+c))>a)
{
//peri=a+b+c;
break;
}
else
{
continue;
}
}
cout<<c<<" "<<b<<" "<<a<<endl;
}
