//write a program to accept a number and print it in the format of charecter , decimal, octal , hexadecimal , 
#include <stdio.h>

int main()
{
    int num ;
    num = 93;
    printf ("In the form of Charecter = %c \n", num);
    printf ("In the form of decimal = %d\n", num);
    printf ("In the form of octal = %o\n " , num);
    printf ("In the form of Hexadecimal = %x \n", num);
    return 0;

}