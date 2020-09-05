#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findsmallest(int arr[],int n)
{
    int res;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            if((arr[i+1]-arr[i])!=1)
            {
                res= arr[i];
                cout<<"in if "<<res+1<<endl;
                break;
              }
                  
    }
    
    }
    //return res+1;
}
int main() {
	//code
	int t,n;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    sort(arr,arr+n);
	    int k=findsmallest(arr,n);
	    cout<<k;
	}
	return 0;
}
