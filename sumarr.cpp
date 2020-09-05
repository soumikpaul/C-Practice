#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n,i,a,b,k,max;
    cin>>n>>m;
    int arr[n];
    for(i=0;i<n;i++)
        arr[i]=0;
    
    while(m>0)
    {
        cin>>a>>b>>k;
        for(i=a-1;i<=b-1;i++)
            arr[i]+=k;
        m--;
    }
    max=arr[0];
   for(i=1;i<n;i++)
   {
       
       if(arr[i]>max)
           max=arr[i];
   }
    cout<<max<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

