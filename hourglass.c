#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int max(int a, int b)
{
return (a>b?a:b);
}
int calculate(int arr[6][6])
{
int i,j,total_sum,sum;
total_sum=0;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
int sum=0;
sum=sum+arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
total_sum=max(sum,total_sum);
}
}
return total_sum;
}
int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    int k;
    k=calculate(arr); 
    printf(" %d",k);
    return 0;
}

