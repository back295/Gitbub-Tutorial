#ifndef _HEADER_H_
#define _HEADER_H_
#include <stdint.h>

typedef struct header
{
    uint16_t a;
    uint16_t b;
}header_t;

header_t *function1(uint8_t num1, uint8_t num2);
void helloWorld(void);
void function_new_branch(void);
#endif