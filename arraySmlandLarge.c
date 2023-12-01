#include <stdio.h>

int main()
{
    int array[10],max,min,i;
    printf("enter array values");
    for(i=0;i<3;i++){
        
    scanf("%d",&array[i]);
    }
    
    max=array[0];
    min=array[0];
    
    for(i=0;i<3;i++){
        
        if(array[i] > max){
            
            max=array[i];
        }
        if(array[i]< min){
            
            min=array[i];
        }
    }
    printf("maximum value = %d\n",max);
    printf("minimum value = %d",min);

    return 0;
}
