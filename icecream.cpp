#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ispresent(int a,int arr[],int n,int i)
{
    int j;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]==a) 
            break;
}
    return j;
}
void icecreamindex(int arr[],int n,int m)
{
    int i,j;
    //if(m==0)
       // cout<<"0";
    for(i=0;i<n;i++)
    {
        int j= ispresent((m-arr[i]),arr,n,i);
        cout<<(i+1)<<" "<<(j+1)<<endl;
        break;          
    }
}
int main()
{
    int t;
    int n, m;
    cin >> t;
    while(t>0)
    {
        t--;
        cin>>m>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        icecreamindex(arr,n,m);
    }
}


