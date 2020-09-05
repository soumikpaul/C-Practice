#include <bits/stdc++.h>
using namespace std;
void f(char *str)
{
int i;
int *count=(int*)malloc(sizeof(int)*256);
for(i=0;*(str+i);i++)
{
if(*(str+i)!=' ')
count[*(str+i)]++;
}
int n=i;
for(i=0;i<n;i++)
{
if(count[*(str+i)]==1)
cout<<str[i];
}
}
int main()
{
char str[100];
cin>>str;
f(str);
}
