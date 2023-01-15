#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    header_t *res = (header_t*)malloc(sizeof(header_t));
    res = function1(10,5);
    printf("Sum Result: %d\n",res->a);
    printf("Minus Result: %d\n",res->b);
    helloWorld();
    function_new_branch();
    return 0;
}