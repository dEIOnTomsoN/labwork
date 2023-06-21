#include<stdio.h>
int main()
{
float a,b,c,d,e,f,g,result;
printf("enter value of a : ");
scanf("%f",& a);
printf("enter value of b : ");
scanf("%f",& b);
printf("enter value of c : ");
scanf("%f",& c);
printf("enter value of d : ");
scanf("%f",& d);
printf("enter value of e : ");
scanf("%f",& e);
printf("enter value of f : ");
scanf("%f",& f);
printf("enter value of g : ");
scanf("%f",& g);
result= ((a -b / c * d + e) * (f +g));
printf("after evaluation result is :%f ",result);
}