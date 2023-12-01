#include <stdio.h>
    
int main()
{
    int sum[100],i, arr1[]={1,2,3,4,},arr2[]={5,6,7,8};
    
    for(i=0;i<4;i++){
        sum[i]=arr1[i]+arr2[i];
    }
for(i=0;i<4;i++){
    printf("[%d] = %d\n",i,sum[i]);
    }
    
    return 0;
};