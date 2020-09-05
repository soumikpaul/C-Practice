#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    int count[26];
    for(int i=0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(count[i]==0)
        {
            cout<<"not pangram";
            return 0;
        }
        
    }
    cout<<"pangram"<<endl;
    return 0;
}

