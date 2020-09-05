#include <stdio.h>
bool pali(int arr[],int n)
{
int i;
for(i=0;i<n/2;i++)
{
if(a[i]==a[n-i-1];
continue;
else 
{
return false;
break;
}
}
return true;
}
bool pali_9(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==9)
continue;
else 
{
return false;
break;
}
}
return true;
}
void next_pali(int arr[],int n)
{
if((n%2)==1)
{
arr[n/2]=arr[n/2]+1
int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
if(pali(arr,n))
{
if(pali_9(arr,n))
{
nextpail_9(arr,n);
}
else 
{
next_pali(arr,n);
}
}
else next_pali_gen(arr,n);
}

