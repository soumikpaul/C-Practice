#include <bits/stdc++.h>
using namespace std;
string getkey(string &str)
{
bool visited[26]={false};
for(int i=0;i<str.length();i++)
{
visited[str[i]-'a']==true;
}
string key="";
for(int i=0;i<26;i++)
{
if(visited[i])
key=key+char(i+'a');
}
return key;
}
void searchword(string word[],int n)
{
unrodered_map<string, vector<int> > Hash;
for (int i=0;i<n;i++)
{
string key=getkey(word[i]);
Hash[key].push_back(i);
}
for(auto it=Hash.begin();it!=Hash.end();it++)
{
for(auto v=(*it).second.begin();v!=(*it).second.end();v++)
cout<<word[*v]<<",";
}
cout<<endl;
}
int main()
{
string word[]={"Soumik" "Paul" "Zeba" "Mullick" "baze" "laup"};
int n=sizeof(word)/sizeof(word[0]);
searchword(word,n);
return 0;
}
