//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
/*int calred(int no_red, int red)
{
int
*/ 
int calculate(int red,int blue, int yellow, int k)
{
int no_red=0,no_yellow=0,no_blue=0;
int count=0,pairs=0,i=0,j=0,l=0;
while(pairs<=k)
{
if(red>0)
{
i=no_red++;
red--;
}
if(i==2)
{
i=i-2;
pairs++;
count =i+j+l;
if(pairs==k)
break;
}

if(blue>0)
{
j=no_blue++;
blue--;
}
if(j==2)
{
j=j-2;
pairs++;
count =i+j+l;
if(pairs==k)
break;
}

if(yellow>0)
{
l=no_yellow++;
yellow--;
}

if(l==2)
{
l=l-2;
pairs++;
count =i+j+l;

}
}
return count;
}
int main()
{
int m;
//cin>>m;
int red,blue,yellow,k;
cin>>red;
cin>>blue>>yellow>>k;
int p=calculate(red,blue,yellow,k);
cout<<p;
return 0;
}
