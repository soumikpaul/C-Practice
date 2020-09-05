#include <stdio.h>
#include <stdlib.h>

bool part(int arr[],int len,int sum)
{
if(sum==0)
return true;
if(len==0&&sum!=0)
return false;
if(arr[len-1]>sum)
return part(arr,len-1,sum);
else return part(arr,len-1,sum)||part(arr,len-1,sum-arr[len-1]);
}
bool findparti(int arr[],int len,int sum)
{
int sum1=0;
int i;
for(i=0;i<len;i++)
{
sum1+=arr[i];
}
if(sum%2==0)
part(arr,len,sum/2);
else return false;
}
int main()
{
int arr[]={1,5,11,5};
int l=4;
int sum =5;
bool s=findparti(arr,l,sum);
if(s)
printf("true");
else printf("false");
}
