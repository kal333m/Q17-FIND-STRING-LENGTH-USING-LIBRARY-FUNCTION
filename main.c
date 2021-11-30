#include <stdio.h>
#include <stdlib.h>

int main()
{ char str[100];
   int len;

   printf("\nEnter the String : ");
   gets(str);

   len = strlen(str);

   printf("\nLength of Given String : %d", len);

    return 0;
}
