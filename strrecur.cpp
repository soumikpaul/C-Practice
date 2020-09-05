#include <bits/stdc++.h>
using namespace std;
int main()
{
string str;
getline(cin,str);
string res="";

/*for(int i=0;i<str.length();i++)
{
if((str[i]!=str[i+1])||(str[i]!=str[i-1]))
cout<<str[i];
res=res+(str[i]);
}
cout<<endl<<res<<endl;
*/
int i=0;
while(i<str.length())
{
if((str[i]!=str[i-1])&&(str[i]!=str[i+1]))
cout<<str[i];
i++;
}
return 0;
}
//
