/*write a c program to convert value in bites into equivalent bytes ,kilobytes(kb),Megabytes(Mb),Gigabyte(gb),
terabytes(tb,petabytes(tb),exabytes(EB),zetabytes(zb)),yottabytes(yb)
*/
/*author: Humesh Deshmukh
roll no: 34*/

#include<stdio.h>
#include<conio.h>
int main()
    {
        int  bytes,bits,kb,mb,gb;
        printf("\n Enter any number in bytes");
        scanf("%d",&bytes);
        
            bits=bytes*8;
            kb=bytes/1024;
            mb=kb/1024;
            gb=mb/1024;
            printf("\n Equivalent bits: %d",bits);
            printf("\n Equivalent kb :  %d",kb);
            printf("\n Equivalent mb : %d",mb);
            printf("\n Equivalent gb : %d",gb);
        
    }