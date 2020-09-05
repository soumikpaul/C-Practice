#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
void compare(string a[],string b[],int n,int k)
{
int i,count;
for(i=0;i<k;i++)
{
count=0;
for(int j=0;j<n;j++)
{
if(b[i]==a[j])
count++;
}
cout<<count<<endl;
}

}

int main() {
    int n,i,k;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
    cout<<"Enter size next"<<endl;
    cin>>k;
    string str1[k];
    cout<<"Enter the strings"<<endl;
    for(int j=0;j<k;j++)
        cin>>str1[j];
    compare(str,str1,n,k);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

