#include <bits/stdc++.h>
using namespace std;
int power(int num,int n)
{
if(n==0)
return 1;
else if(n%2==0)
return power(num,n/2)*power(num,n/2);
else
return num*power(num,n/2)*power(num,n/2);
}
int getpow(int x,int n,int curr_num=1,int curr_sum=0)
{
int result=0;
int p=power(curr_num,n);
while(p+curr_sum<x){
result =result + getpow(x,n,curr_num+1,p+curr_sum);
curr_num++;
p=power(curr_num,n);
}
if(p+curr_sum==x)
result++;
return result;
}
int main()
{
int x,n;
cin>>x>>n;
int k=getpow(x,n);
cout<<k<<endl;
}
