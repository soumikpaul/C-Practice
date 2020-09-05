#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,result=0;;
cin>>n;
int arr1[n],arr2[n];
for(int i=0;i<n;i++)
{
cin>>arr2[i];
arr1[i]=i+1;
}
for(int i=0;i<n;i++)
{
if(abs(arr2[i]-arr1[i])>2)
{
cout<<"Too chaos"<<endl;
break;
}
result+=abs(arr2[i]-arr1[i]);
}
result=result/2;
cout<<result;
return 0;
}
