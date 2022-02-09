#include <stdio.h>
int main()
{ int a;
printf("ENTER INT A =");
scanf("%d",&a);
short int b;
printf("\nENTER SHORT INT B =");
scanf("%u",&b);
long int c;
printf("\nENTER LONG INT C =");
scanf("%ld",&c);
long long int d,e;
printf("\nENTER LONG LONG INT D,E =");
scanf("%o,%x",&d,&e);
char f;
printf("\nENTER CHAR F =");
scanf("%c",&f);
float g;
printf("\nENTER FLOAT G =");
scanf("%f",&g);
double h;
printf("\nENTER DOUBLE H =");
scanf("%lf",&h);
long double i;
printf("\nENTER LONG DOUBLE I =");
scanf("%Lf",&i);

printf("\n%d,%u,%ld,%o,%x,%c,%f,%lf,%Lf",a,b,c,d,e,f,g,h,i);
}
