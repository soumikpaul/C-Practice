#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,m,n,n3,sum,z;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;i++)
	    cin>>arr1[i];
	    for(int i=0;i<n;i++)
	    cin>>arr2[i];
	    cin>>z;
	    int arr3[m*n];
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	        for(int k=0;k<m*n;k++)
	        arr3[i]=arr2[j]+arr1[i];
	    }
	    }
	    sort(arr3,arr3+m*n);
	    cout<<arr3[z-1]<<endl;
	    
	}
	return 0;
}
