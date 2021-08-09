// 9.8.2021

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    /* code */
    pid_t  cpid,  pid,  i;
    cpid = fork();
    
    if (cpid < 0) {
        print("Unsuccessfull.");
        exit(-1);
    } else if (cpid == 0) {
        for (i = 0;  i < 1;  i--) {
            pid = getpid();
            print("I am a child process");
        }
    }
    return 0;
}
