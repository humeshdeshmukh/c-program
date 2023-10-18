/*impriment above program to check  whether enter number is palimdrom no or not*/
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>

int reverse(int num)
{
    int rev = 0, d, ori = num; // Initialize rev to 0 and store original value of num in ori
    while (num > 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    if (rev == ori)
    {
        printf("\n Number is palindrome");
    }
    else
    {
        printf("\n Number is not palindrome");
    }
    return rev; // Return the reversed number
}

int main()
{
    int a, b;
    printf("\n Enter any number: ");
    scanf("%d", &a);
    b = reverse(a); // Call the reverse function and store the result in b
    printf("\n Revers of %d is %d", a, b);
    return 0; // Return 0 to indicate successful execution of main function
}
