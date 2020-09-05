#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subarray(int arr[],int n,int m)
{
int temp[n],max=0;
findmax(temp,n);

int main()
{
 int t,n,m;
    cin>>t; 
    while(t>0)
    {
        t--;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        subarray(arr,n,m);
    }
    return 0;
}
