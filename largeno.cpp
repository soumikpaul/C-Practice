#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int mycomp(string x,string y)
{
string xy=x.append(y);
string yx=y.append(x);
return XY.compare(YX) > 0 ? 1: 0;
}
void printlargest(vector <int> v)
{
sort(v.begin(),v.end(),mycomp);
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
}
int main()
{
vector <int> v;
v.push_back("19");
v.push_back("28");
v.push_back("37");
v.push_back("46");
v.push_back("55");
v.push_back("99");
printlargest(v);
}
