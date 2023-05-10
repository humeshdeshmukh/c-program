/* structure is a currection of disimiler data type*/
/* Author : Humesh Deshmukh 
 Roll no 34*/

#include<stdio.h>

struct sample
{
    int a;
    float b;
    char c;
}s1;
struct sample s2;
int main()
{
    s1.a=10;
    s1.b=23.43;
    s1.c="A";
    s2.a=16;
    s2.b=4.46;
    s2.c='Q';
    printf("\n s1 member: A=%d B=%f C=%c", s1.a,s1.b,s1.c);
    printf("\n s2 member: A=%d B=%f C=%c",s2.a,s2.b,s2.c);
}
