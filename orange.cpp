#include <iostream>
using namespace std;
int findtime(int r,int c,int ** arr[][c])
{
    int time=0;  
     for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        {
	            if(arr[i][j]==2)
	            {
	                if(arr[i-1][j]==1)
	                arr[i-1][j]=2;
	                if(arr[i+1][j]==1)
	                arr[i+1][j]=2;
	                if(arr[i][j-1]==1)
	                arr[i][j-1]=2;
	                if(arr[i][j+1]==1)
	                arr[i][j+1]=2;
	                time++;
	            }
	        }
	    }
	    return time;
}
int main() {
	//code
	int t,r,c;
	cin>>t;
	while(t>0)
	{
	    cin>>r>>c;
	    int arr[r][c];
	    for(int i=0;i<r;i++)
	    {
	        for(int j=0;j<c;j++)
	        cin>>arr[i][j];
	    }
	    int k=findtime(r,c,arr);
	}
	return 0;
}
