#include <bits/stdc++.h>
using namespace std;
void findsum(int arr[], int x,int n)
{
for(int i=1;i<n-1;i++)
{
int j=i-1;
int k=i+1;
if(arr[i]+arr[j]+arr[k]==x)
cout<<arr[j]<<" "<<arr[i]<<" "<<arr[k]<<endl;
else if(arr[i]+arr[j]+arr[k]<x)
k++;
else if(arr[i]+arr[j]+arr[k]>x)
i--;
}


}
int main()
{
int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
findsum(arr,x,n);
return 0;
}

