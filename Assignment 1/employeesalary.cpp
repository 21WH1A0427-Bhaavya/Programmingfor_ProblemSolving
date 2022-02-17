#include <stdio.h>
int main()
{
	float salary;
    short int id =427;
    short int totalhours = 245;
    short int amountperhour=500;
    salary=(totalhours*amountperhour); //salary per month
    
    printf("EMPLOYEE ID - %u",id);
    printf("\nTOTAL SALARY OF EMPLOYEE IS %.2f",salary);
}
