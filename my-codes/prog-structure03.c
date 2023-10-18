/*write a c program  to add two complex number
 using stucture*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

struct complex
{
    int real;
    int img;
};

void display(struct complex *c)
{
    if (c->img < 0)
    {
        printf("%d-i%d\n", c->real, c->img * -1);
    }
    else
    {
        printf("%d+i%d\n", c->real, c->img);
    }
}

int main()
{
    struct complex c1, c2, c3;
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%d%d", &c1.real, &c1.img);
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%d%d", &c2.real, &c2.img);
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    display(&c1);
    display(&c2);
    display(&c3);
    return 0;
}
