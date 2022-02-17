#include <stdio.h>
int main()
{ float P,T,R,SI;
printf("ENTER PRINCIPLE =");
scanf("%f",&P);
printf("\nENTER TIME PERIOD =");
scanf("%f",&T);
printf("\nENTER RATE =");
scanf("%f",&R);

SI=(P*T*R)/100;
printf("\nSIMPLE INTEREST = %f",SI);
}
