#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void encrypt(char *s,int k)
{
    int i;
    //int p=s[i]+k;
    for(i=0;i<strlen(s);i++)
    {
        if(!((s[i]>=65)&&(s[i]<=90))||((s[i]>=97)&&(s[i]<=122)))
        break;
        if((((s[i]+k)>=65)&&((s[i]+k)<=90))||(((s[i]+k)>=97)&&((s[i]+k)<=122)))
            s[i]=s[i]+k;
        else if(((s[i]+k)>90)&&((s[i]+k)<97))
            s[i]=s[i]+k-'Z'+'A'-1;
        else if((s[i]+k)>122)
            s[i]=s[i]+k-'z'+'a'-1;
        //if(s[i]>122)
            //s[i]=s[i]-k;
    }
    printf("%s",s);
}
int main(){
    int n; 
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    encrypt(s,k);
    return 0;
}

