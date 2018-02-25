#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double a,b,c,x1,x2,e,f,g;
	int s=1;
	while(s=1){
		printf("Please enter a : ");
		scanf("%lf",&a);
		printf("Please enter b : ");
		scanf("%lf",&b);
		printf("Please enter c : ");
		scanf("%lf",&c);
		e = b*b-4*a*c;
		f = -b/(2*a);
		g = sqrt(e)/(2*a);
		x1 = f+g;
		x2 = f-g;
		printf("x1=%7.2lf,\nx2=%7.2lf,\n",x1,x2);
		system("pause");
		system("cls");
	}
	return 0;
}
