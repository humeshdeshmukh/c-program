/* write a c program  of file */
/* Author : Humesh Deshmukh
 Roll no 34*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("example.txt", "r"); // open the file in read mode

    if (fp == NULL) { // check if the file was opened successfully
        printf("Failed to open file.\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) { // read the file character by character until EOF
        printf("%c", c); // print each character to the console
    }

    fclose(fp); // close the file

    return 0;
}
