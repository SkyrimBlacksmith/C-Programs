#include <stdio.h>
#include <stdlib.h>

int main()

{
	double r,h,c,s,v,pi=3.1416926;
	int a=1;
	while(a=1){
		printf("Please enter the radius : \n");
		scanf("%lf",&r);
		printf("Please enter the height : \n");
		scanf("%lf",&h);
		c = 2*r*pi;
		s = pi*r*r;
		v = s*h;
		printf("The bottom perimetre is : %.2lf\nThe bottom area is : %.2lf\nThe volume is : %.2lf\n",c,s,v);
		system("pause");
		system("cls");
	}
	return 0;
}
