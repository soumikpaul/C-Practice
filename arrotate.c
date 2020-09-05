#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
}
int main(){
    int n,i; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    printarray(arr,n);
    for(i=0;i<n/2;i++)
    {
        swap(&arr[i],&arr[n-i-1]);
        printf("a");
    }
    
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    //printarray(arr,n);
    return 0;
}

