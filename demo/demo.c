#include <stdio.h>
#include <unistd.h>
#include "rbq.h"
int main(int argc, char *argv[])
{
    rbq_malloc(1,2,2,500);
    while(1)
    {
        printf("-------------------------------------\n");
        sleep(1);
    }
    return 0;
}
