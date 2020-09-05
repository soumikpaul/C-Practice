#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void lonelyinteger(int n, int a[]) {
    // Complete this function
    int result,i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(((a[i]^a[j])!=0))
            {
                //printf("x");
                printf ("%d ",a[i]);
            }
            //printf("j");
        }
    }
    //printf("f");
}

int main() {
    int n,i; 
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
     lonelyinteger(n, a);
    //printf("%d\n", result);
    //printf("m");
    return 0;
    
}

