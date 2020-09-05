#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int solve(long int n) {
    // Complete this function
    long long int counter=0;
    for(int i=0;i<=n;i++)
    {
        if((n+i)==(n^i))
            counter++;
    }
    return counter;
}

int main() {
    long int n; 
    scanf("%li", &n);
    long int result = solve(n);
    printf("%ld\n", result);
    return 0;
}

