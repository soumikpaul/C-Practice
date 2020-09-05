#include <bits/stdc++.h>
using namespace std;
void kadane(int arr[],int n)
{
int res=INT_MIN;
int max_ending=0;
for(int i=0;i<n;i++)
{
max_ending+=arr[i];
if(max_ending>res)
res=max_ending;
if(max_ending<0)
max_ending=0;
}
cout<<res;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
kadane(arr,n);
return 0;
}
