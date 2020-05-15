#include<stdio.h>

int main(){
	float pi = 3.14159265359 ,x = 0.0;
	int r;

	printf("To find the perimeter of the circle, enter its radius(cm): \n");
	scanf("%d" ,&r);
	printf("Circumference of the circle: = %f cm.\n\n" ,(2*pi)*r);

	printf("Enter the 'angle degree' value for the radian value:\n");
	scanf("%f" ,&x);
	printf("Arc length seen by angle = %f radians.\n\n" ,x*(pi/180));

	printf("The arc length of %1.f degree angle is about = %f cm." ,x ,(2*pi*r)/360*x);

    getch();
return 0;
}
