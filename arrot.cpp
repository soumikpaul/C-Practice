#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void arrotbyone(int arr[],int len);
void display(int arr[],int len);
void arrot(int arr[],int len,int k)
{
while(k>0)
{
arrotbyone(arr,len);
k--;
}
for(int j=0;j<len;j++)
{
cout<<arr[j];
//display(arr,len);
}
}
void arrotbyone(int arr[],int len)
{
int i;
int temp=arr[0];
for(i=1;i<len;i++)
{
arr[i-1]=arr[i];
}
arr[i-1]=temp;
}
void display(int arr[],int len)
{
for(int i=0;i<len;i++)
{
cout<<arr[i]<<" ";
}
}
void search(int arr[],int len, int s)
{
int m=(1+len)/2;
if(arr[m]==s)
{
cout<<m;
}
else if(arr[m]<s&&
int main()
{
int arr[]={1,2,3,4,5,6};
int k=3;
int l=6;
arrot(arr,l,k);
int s=2;
search(arr,l,s);
}

