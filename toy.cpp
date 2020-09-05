#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findtoy(int arr[],int n)
{
    int temp,count=1;
    temp=arr[0];
    for(int i=1;i<n;i++)
    {
        if((abs(temp-arr[i]))>4)
            {count++;
        temp=arr[i];
        }
        cout<<temp<<endl;
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int k=findtoy(arr,n);
    cout<<k;
    return 0;
}

