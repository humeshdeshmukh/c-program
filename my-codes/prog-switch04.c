/* WCAP to check whether enter character is a vowel character or a  consonant using  switch case statement */
/* Author: Humesh Deshmukh
   Roll no: 34
*/

#include <stdio.h>

int main()
{
    char ch;
    printf("\n enter  your character :");
    scanf("%c", &ch);
    switch (ch)
    {
       case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("\n entered character is a vowel");
            break;
        default:
            printf("\n entered character is a consonant");
            break;
    }
}