#include <stdio.h>
#include <stdlib.h>

int main() {

    int target;
    char buffer[32];

    target = 0;
    
    printf("Well, I don't think there is any question about it.\nIt can only be attributable to human error.\n");
    gets(buffer);

    if (target != 0) 
    {
       
        printf("\nCongrats! *You become suspicious towards HAL's behavior*\n");
    } 
    else 
    {
        printf("*You continue believing HAL is the perfect computing machine*");
    }
}