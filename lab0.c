#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("Hello, World!\n");
    int sum = 0;
    int num = 200;
    while(num >0)
    {
        num--;
        num--;
        sum +=num;
    };
    printf("%d\n", sum);

}