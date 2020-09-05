#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char *removedirty(string *str1, string *mask)
{
int *count=(int*)malloc(sizeof(int)*mask->size());
for(int i=0;i<mask.size();i++)
{
count[str1[i]]++;
}
for(int i=0;i<mask.size();i++)
{cout<<count[i]<<"   ";
}
int ip_ind=0, res_ind=0;
while(str1[ip_ind])
{
char temp=str1[ip_ind];
if(count[temp]==0)
{
str1[res_ind]=str1[ip_ind];
res_ind++;
}
ip_ind++;
}
str1[res_ind]='\0';
cout<<str1;
}
int main()
{
string str1,mask;
getline(cin,str1);
getline(cin,mask);
removedirty(str1,mask);
}


