#include <stdio.h>
#include <stdlib.h>

int main()
{
               int i,n,f=1;
               printf("enter a number\n");
               scanf("%d",&n);
               for(i=1;i<=n;i++)
               {
                              f=f*i;
               }
               printf("factorial of %d is %d",n,f);
    return 0;
}
