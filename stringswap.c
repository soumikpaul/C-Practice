#include <stdio.h>
#include <string.h>
//#include <conio.h>
void reverse(char *begin, char *end);
void stringswap(char *arr)
{
char *word_be=arr;
char *temp=arr;
while(*temp)
{
temp++;
if(*temp == '\0')
{
reverse(word_be,temp-1);
}
else if(*temp==' ')
{
reverse(word_be,temp-1);
word_be=temp+1;
}
}
reverse(arr,temp-1);
printf("%s",arr);
}
void reverse(char *begin, char *end)
{
char temp;
while(begin<end)
{
temp=*begin;
*begin++=*end;
*end--=temp;
}
}
int main()
{
char arr[100];
char s[100];
scanf("%[^\n]",&arr);
//printf("%s",arr);
gets(s);
stringswap(arr);
printf("%s",strrev(s));
//printf("%s",arr);
return 0;
}
