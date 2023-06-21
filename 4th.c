#include <stdio.h>
float main()
{
	float co1,co2;

	printf("Input the values for X and Y coordinate : ");
	scanf("%f %f",&co1,&co2);

	if( co1 > 0 && co2 > 0)
	  printf("The coordinate point (%f,%f) lies in the First quandrant.\n",co1,co2);
	else if( co1 < 0 && co2 > 0)
	  printf("The coordinate point (%f,%f) lies in the Second quandrant.\n",co1,co2);
	else if( co1 < 0 && co2 < 0)
	  printf("The coordinate point (%f, %f) lies in the Third quandrant.\n",co1,co2);
	else if( co1 > 0 && co2 < 0)
	  printf("The coordinate point (%f,%f) lies in the Fourth quandrant.\n",co1,co2);
	else if( co1 == 0 && co2 == 0)
	  printf("The coordinate point (%f,%f) lies at the origin.\n",co1,co2);

}
