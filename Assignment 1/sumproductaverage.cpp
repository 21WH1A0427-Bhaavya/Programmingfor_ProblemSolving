#include <stdio.h>
int main()
{ int a,b,c,sum,product,avg;
printf("ENTER THE VALUES OF A,B,C =");
scanf("%d,%d,%d",&a,&b,&c);
sum=a+b+c;
product=a*b*c;
avg=(a+b+c)/3;
printf("\nSUM OF A,B,C IS %d",sum);
printf("\nPRODUCT OF A,B,C IS %d",product);
printf("\nAVERAGE OF A,B,C IS %d",avg);
}
