#include<stdio.h>
int main() 
{
int i,numbers[5],total=0,count=0;
float average ;
printf("\nInput the first number:");
scanf("%d", &numbers[0]);
printf("\nInput the second number:");
scanf("%d", &numbers[1]);
printf("\nInput the third number:");
scanf("%d", &numbers[2]);
printf("\nInput the fourth number:");
scanf("%d", &numbers[3]);
printf("\nInput the fifth number:");
scanf("%d", &numbers[4]);
for (i = 0; i < 5; i++) {
    if (numbers[i] >= 0) {
        count++;
        total += numbers[i];
    }
}
printf("\n The number of positive numbers:%d\n", count);


 
  
 
  
    int limit, num, positive = 0, negative = 0, zero = 0;  
  
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
  
    printf("Enter %d numbers\n", limit);  
  
    while(limit)  
    {  
        scanf("%d", &num);  
  
        if(num > 0)  
        {  
            positive++;  
        }  
        else if(num < 0)  
        {  
            negative++;  
        }  
        else  
        {  
            zero++;  
        }  
  
        limit--;  
    }  
  
    printf("\nPositive Numbers: %d\n", positive);  
    printf("Negative Numbers: %d\n", negative);  
    printf("Number of zero: %d\n", zero);  
  
    return 0;
}  
