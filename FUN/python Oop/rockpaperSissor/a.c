#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define Rm 32767
double distance();
main()
{
	srand(time(NULL));
	distance();
getch();
}

double distance()
{
	double a,b,c,d;
	// a=((double(rand()))/(double(Rm)));
	// b=((double(rand()))/(double(Rm)));
	// c=((double(rand()))/(double(Rm)));
	// d=((double(rand()))/(double(Rm)));
	printf("A= (%lf,%lf)\t B= (%lf,%lf)\n",a,b,c,d);
	double dis;
	dis=sqrt((pow((a-c),2))+(pow((b-d),2)));
	printf("\n\nDISTANCE BETWEEN A & B = %lf",dis);
	
}