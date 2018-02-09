#include <stdio.h>

int main(void){
	const double pi = 3.412;
	double height, radius, base, volume;

	printf("Enter the height and the radius of the cone\n");
	scanf("%lf%lf",&height,&radius);

	base = pi * radius * radius;

	volume = (1.0/3.0) * base * height;

	printf("\nThe volume of the cone is %f\n", volume);
}