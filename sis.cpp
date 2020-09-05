#include <iostream>
using namespace std;
void sis(int arr[],int n)
{
int s[n];
for(int i=0;i<n;i++)
s[i]=arr[i];
for(int i=1;i<n;i++)
{
for(int j=0;j<i;j++)
{
if((arr[i]>arr[j])&&(s[i]<s[j]+arr[i]))
{
s[i]=s[j]+arr[i];
}
}
}
int max=s[0];
for(int i=1;i<n;i++)
{
if(max<s[i])
max=s[i];
}
cout<<max;
}

int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t>0)
	{
	t--;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    sis(arr,n);
	}
	return 0;
}
