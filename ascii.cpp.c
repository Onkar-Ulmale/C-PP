/*print ascii value of user entered charecter in decimal , hex , octal format 
and also print the charecter for the user entered ASCII value.*/
#include <stdio.h>
int main()
{
     char ch ;
    printf("entrer the charecter");
    scanf ("%c",&ch);
    printf ("The chatrecter you entered is  = %c \n", ch);
    printf ("In the form of decimal = %d\n", ch);
    printf ("In the form of octal = %o\n " , ch);
    printf ("In the form of Hexadecimal = %x \n", ch);
    return 0;
}
