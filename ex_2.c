#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    printf("A little tougher this time...");
    int secret = 0xdeadbeef;
    char buff[30];
    if (secret == 0x1337) {printf("Wow, you got it!\n"); }
    else {printf("lol u thought\n");}
    return 0;
}