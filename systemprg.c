#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
pid_t pid;
pid=fork();

if(pid<0)
{
fprintf(stderr,"Fork failde");
return 1;
}
else if(pid==0)
{
//execlp("/bin/ls","ls","-l",NULL);
execlp("/bin/echo","echo","HI Soumik",NULL);
//execlp("/bin/pwd","pwd",NULL);
//
}

else{
wait();
printf("Child complete");
}
return 0;
}
