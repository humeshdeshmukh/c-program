/*sizeoffunction:-
                 this fuction is use the return the size of variable in byte*/
/* Author : Humesh Deshmukh
 Roll no 34*/


#include <stdio.h>
#include <conio.h>

struct sample
{
    int a;
    float b;
    char c;
} s1;

int main()
{
    s1.a = 10;
    s1.b = 23.43;
    s1.c = 'A';

    printf("Size of s1.a: %d bytes\n", sizeof(s1.a));
    printf("Size of s1.b: %d bytes\n", sizeof(s1.b));
    printf("Size of s1.c: %d bytes\n", sizeof(s1.c));
    printf("Size of s1: %d bytes\n", sizeof(s1));

    return 0;
}
