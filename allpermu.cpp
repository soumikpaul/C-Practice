#include <bits/stdc++.h>
using namespace std;
void swap(char *a, char *b)
{
char temp=*a;
*a=*b;
*b=temp;
}
void allpermu(char *str,int l,int r)
{
if(l==r)
cout<<str<<endl;
else
{
for(int i=l;i<=r;i++)
{
swap((str+l),(str+i));
allpermu(str,l+1,r);
swap((str+l),(str+i));
}
}
}
int main()
{
int n;
cin>>n;
char str[n];
cin>>str;
allpermu(str,0,n-1);
return 0;
}
