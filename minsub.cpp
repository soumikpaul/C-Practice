#include <iostream>
using namespace std;
void findmin(int arr[],int n,int k)
{
    int index,rindex;
    int res=0;
    int min;
    for(int i=0;i<k;i++)
    {
        res+=arr[i];
        min=res;
    }
    for(int i=k;i<n;i++)
    {
        res=res+arr[i]-arr[i-k];
        if(res<min){
            min=res;
            index=i-k+1;
            }
    }
    cout<<index<<","<<index+k-1;
    
}
int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    findmin(arr,n,k);
	}
	return 0;
}
