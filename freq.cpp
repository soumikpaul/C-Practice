#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int a[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8};
int n = sizeof(a)/sizeof(a[0]);
//int it; 
pair<int, int>s;
map <int,int> p;
for(int i=0;i<n;i++)
{
s.first=a[i];
map <int,int> ::iterator it=p.begin();
for(it=p.begin();it!=p.end();it++)
{
if(s.first==(*it).first)
{

s.second+=1;

p.insert(s);
}
//s.second++;
}
}
map <int,int> ::iterator itt=p.begin();
for(itt=p.begin();itt!=p.end();itt++)
cout<<(*itt).first<<" "<<(*itt).second<<endl;
}
