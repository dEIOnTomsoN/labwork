#include <stdio.h>
int main()
{
   int i,n;
   printf("Input the numbers  of terms : ");
   scanf("%d",&n);
   printf("\nThe first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
   }
   

}