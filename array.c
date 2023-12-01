#include <stdio.h>

int
main ()
{
    int n,i,values[100];
  printf (" enter array limit");
  scanf ("%d", &n);
  printf ("enter array values");
  for (i = 0; i <= n; i++)
    {
      scanf ("%d", &values[i]);
    }
    printf("array elements are ");
    for(i=0; i<= n; i++){
    
        printf("%d",values[i]);
    }
  return 0;
}