#include <stdio.h>

int main()
{
    int num,r,rev=0,,sum;

    printf("Input a number: ");
    scanf("%d",&num);

    for(;num!=0;num=num/10)
    {   
         r=num % 10;
         sum=sum+r;
         rev=rev*10+r;
          
    }  
    
    
    printf("The number in reverse order is : %d   and sum is %d \n",rev,sum);
}