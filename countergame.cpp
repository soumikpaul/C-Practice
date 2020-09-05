#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int findno(int n)
{
    int term=0,p=n;
    while(n>1)
    {
    for(int i=0;i<=n/2;i++)
    {
        if(pow(2,i)==n)
        {
            n=n/2;
            //cout<<n<<endl;
            break;
        }
        else if(pow(2,i)>n)
        {
            n=n-pow(2,i-1);
            //cout<<n<<endl;
            break;
        }
        //cout<<n<<endl;
    }
    //n=p;
    
    term++;
    }
    //cout<<term<<endl;
    //cout<<term%2<<endl;    
    return (term%2);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t>0)
    {
    t--;

    int n;
    cin>>n;
    //cout<<"S"<<endl;
    int k=findno(n);
    //cout<<"P";
    if(k==1)
        cout<<"Louise";
    else  
        cout<<"Richard";
        }
    return 0;
}

