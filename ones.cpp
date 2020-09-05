// longest continuous sequence of 1s in a binary array
#include<iostream>
using namespace std;
 
// Returns index of 0 to be replaced with 1 to get longest
// continuous sequence of 1s.  If there is no 0 in array, then
// it returns -1.
int maxOnesIndex(bool arr[], int n)
{
int max_count=0;
int prev=-1;
int prev_prev=-1;
int index;
for(int curr=0;curr<n;curr++)
{
if(arr[curr]==0)
{
if(curr-prev_prev>max_count)
{
max_count=curr-prev_prev;
index=prev;
}
prev_prev=prev;
prev=curr;
}
}
if(n-prev_prev>max_count)
index=prev;
return index;
}
int main()
{
    bool arr[] = {1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Index of 0 to be replaced is "
         << maxOnesIndex(arr, n);
    return 0;
}
