#include <stdio.h>
main()
{ int lenght=5,breadth=6,area,perimeter;
area=lenght*breadth;
perimeter=2*(lenght+breadth);
printf("AREA AND PERIMETER OF RECTANGLE OF LENGHT 5 UNITS AND BREADTH 6 UNITS IS = %d units^2 and %d units",area,perimeter);

float radius,Area,Circumference;
printf("\nENTER RADIUS=");
scanf("%f",&radius);
Area=3.14*radius*radius;
Circumference=2*3.14*radius;
printf("\nArea and Circumference of a circle = %f units^2 and %f units",Area,Circumference);


}
