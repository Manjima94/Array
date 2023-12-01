#include <stdio.h>

int main()
{
   int array[10]={2,3,4},i;
   for(i=0;i<3;i++){
       printf("%d",array[i]);
   }
   printf("reversed array ");
   for(i=3-1;i>=0;i--){
   
   printf("%d ",array[i]);
   }
    return 0;
}
