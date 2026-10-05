#include<stdio.h>
int main(void)
{
	float h1,h2,h3;
	float average;
	float missing_height;
	printf("Enter the heights of the 3 known people:");
	scanf("%f %f %f", &h1,&h2,&h3);
	printf("Enter the calculated average height of all 5 people:");
	scanf("%f", &average);
	missing_height = ((5*average)-(h1+h2+h3))/2;
	printf("\n The two missing heights are approximately: %.2f and %.2f\n",missing_height,missing_height);

	return 0;
}




	 
		
	
	
