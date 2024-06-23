#include <stdio.h>
#include <ctype.h>
int main () {
   
    char lower,upper;
    printf ("Enter any uppercase letter:  ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf ("lowercase letter = %c\n",lower);
     
     return 0;
}