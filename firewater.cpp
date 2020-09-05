#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int time=0;
void changeadjW(char arr[][],int i,int j)
{
    if((arr[i+1][j]=="W")
        arr[i+1][j]=".";
    if(arr[i-1][j]=="W")
        arr[i-1][j]=".";
    if(arr[i][j+1]=="W")
        arr[i][j+1]=".";
    if(arr[i][j-1]=="W")
        arr[i][j-1]=".";
    if(arr[i-1][j-1]=="W")
        arr[i-1][j-1]=".";
    if(arr[i-1][j+1]=="W")
        arr[i-1][j+1]=".";
    if(arr[i+1][j+1]=="W")
        arr[i+1][j+1]=".";
    if(arr[i+1][j-1]=="W")
        arr[i+1][j-1]=".";
    time++;
}
void changeadjT(char arr[][],int i,int j)
{
    if((arr[i+1][j]=="T")&&nowater(arr,i,j))&&nowater(aarr[i-1][j]||arr[i][j+1]||arr[i][j-1])==T)
        arr[i+1][j]=="F";
    
       
        
            
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char arr[10][10];
    for(int i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            cin>>arr[i][j];
        }
    }
   for(int i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[i][j]=="F")
                changeadjW(arr,i,j);
                changeadjT(arr,i,j);
                    
                    
    return 0;
}

