#include<stdio.h>
int main() {
	int n,i;
	int sum=0;
	printf("Enter the nth  values of series: ");
	scanf("%d",&n);
	sum = (n * (n + 1) * (2 * n + 1 )) / 6;
	printf("Sum of the series : %d ",sum );
}