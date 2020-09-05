#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
int n1,n2;
cin>>n1>>n2;
int arr1[n1],arr2[n2];
for(int i=0;i<n1;i++)
cin>>arr1[i];
for(int i=0;i<n2;i++)
cin>>arr2[i];
unordered_map<int,int> m;
for(int i=0;i<n1;i++)
m[arr1[i]]++;
for(int j=0;j<n2;j++)
{

if(m.find(arr2[j])!=m.end())
{
cout<<"NO";
break;
}

else 
cout<<"yes";
}
return 0;
}
