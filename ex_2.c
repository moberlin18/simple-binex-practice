#include <stdio.h>
#include <stdlib.h>

int main() {

    int target;
    char buffer[64];

    target = 0;
    printf("*Earth sends a message to you confirming HAL was most likely in error*\n");
    gets(buffer);

    if (target ==  0x41424344) 
    {
        printf("\nCongrats! *You confer privately with your fellow astronaut about HAL's error*\n");
    } 
    else 
    {
        printf("\n*HAL convinces you that an error was made by Earth, not HAL*\n");
    }

}