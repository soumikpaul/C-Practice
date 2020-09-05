#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
string s,res="";
cin>>s;
cout<<s<<endl;
int n=s.length();
for(int i=0;i<n-1;i++)
{
if(!(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'))
res=res+s[i];
}
cout<<res<<endl;
}
