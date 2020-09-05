#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
//int min(int x, int y) { return (x < y)? x : y; }
int max(int x, int y) { return (x > y)? x : y; }
 
// Returns length of the longest contiguous subarray
int findLength(int arr[], int n)
{
    int i,j,count=1;
    int max_len = 1;  // Initialize result
    for(i=0;i<n;i++)
    {
        while(fabs((arr[i+1]-arr[i])==1))
        {
        count++;
        }   
        
        max_len=max(count,max_len);
        if(fabs(arr[i+1]-arr[i])!=1)
        count=1;
    }
    
    return max_len;  // Return result
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
    int tcases,arrsize,i,k;
    printf("Enter the number of test cases");
    scanf("%d",&tcases);
    while(tcases!=0)
    {
    printf("Enter the number of elements");
    scanf("%d",&arrsize);
    int arr[arrsize];
    printf("Enter the elements");
    for(i=0;i<arrsize;i++)
    {
        scanf("%d",&arr[i]);
        printf("a");
    }
    quickSort(arr,0,arrsize-1);
    k=findLength(arr,arrsize);
    tcases--;
    
    printf("%d",k);
}
return 0;
}
