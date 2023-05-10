/*aim:-
b) write a c program to convert lowercase letter character into uppercase letter

theory:-

 the full form of ASCII is the american standard code for information interchange . it is a
  character encoding shame used for electronics communication . Each character or a special
  character is represented by some ASCII code, and each ascii code 7 bits in memory.
  in C programming language , a character variable does not contain a character value itself
   rather the ascii value character variable . the ascii value represents the character variable
   in number, and each character variable is assigned with some number range from 0 to 127.
   for example, the ascii value of 'A' is 65.
   in the above example , we assign 'A' to the character variable whoes ascii value is 65 , so 65 wil
   be stored in the character variable rather than 'A'

  */
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("\n Name = Humesh Deshmukh \n Roll No: 34");
    printf("\n Enter any Lower case character :");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
    }
    printf("\n Upper case Equivalent = %c", ch);
    getch();
}