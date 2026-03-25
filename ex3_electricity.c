/*Name: OKELLO ELVIS BECHKAM*/
/*Student Number: 25/U/BIE/01412/PE*/
#include<stdio.h>

int main()
{
    float units, cost_per_unit, total_bill;
    //Input
    printf("Enter units consumed: ");
    scanf("%f", &units);
    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);
    //Calculation
    total_bill = units * cost_per_unit;
    //Output
    printf("\n-----ELECTRICAL BILL-----\n");
    printf("Units: %.2f\n", units);
    printf("Cost per unit: %.2f UGX\n", cost_per_unit);
    printf("\nToatal bill: %.2f UGX\n", total_bill);
    printf("\n--------------------------\n");

    return 0;
}
