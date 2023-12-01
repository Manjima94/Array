#include <stdio.h>
#include <string.h>
int main()
{
   char str1[10]={"man"},str2[10]={"jima"},result[20];
   
   strcpy(result,str1);
   strcat(result,str2);
   
   printf("%s",result);
    return 0;
}
