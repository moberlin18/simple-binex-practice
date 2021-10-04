#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>


void foo() {
    char buff[30];
    gets(buff);
    puts(buff);
    fflush(stdout);
}

int main() {
    printf("Look at what happens when you break it...");
    foo();
    printf("I said to break it!");
    return 0;
}