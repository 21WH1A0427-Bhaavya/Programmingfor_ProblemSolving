#include<stdio.h>
int main()
{ int weight,cost,number,totalweight,totalcost;
printf("Weight of the item =");
scanf("%d",&weight);
printf("\nCost of the item =");
scanf("%d",&cost);
printf("\nNumber of units =");
scanf("%d",&number);

totalweight=weight*number;
totalcost=cost*number;

printf("TOTAL WEIGHT OF THE ITEMS IS %d KILOGRAMS AND TOTAL COST OF THE ITEMS IS Rs.%d",totalweight,totalcost);



}
