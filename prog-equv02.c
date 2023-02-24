/* write a c program to convert cm to in inch,feet,mm value inter by user
author : Humesh Deshmukh
roll no: 34 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int mm,cm,inch,feet;
    printf(" \n Enter any value in cm ");
    scanf("%d",&cm);
    mm=cm*10;
    inch=cm/2.54;
    feet=inch/12;
    printf("\n Equvalent cm : %d",cm );
    printf("\n Equvalent mm : %d", mm);
    printf("\n Equvalent inch : %d",inch);
    printf("\n Equvalent feet : %d", feet);
}