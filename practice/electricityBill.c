/*Write a program in C to calculate and print the Electricity bill of a given customer.
The customer id., name and unit consumed by the user should be taken from the
keyboard and display the total amount to pay to the customer. The charges are as
follow:
Unit Charge/unit
upto 199: @1.20
200 and above but less than 400: @1.50
400 and above but less than 600: @1.80
600 and above: @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum
bill should be of Rs. 100/-
*/

#include <stdio.h>

int main()
{

    int customerId, unitConsumed;
    float surcharge = 0, totalAmount, chargePreUnit;
    char name[25];

    printf("Enter your id: ");
    scanf("%d", &customerId);
    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the unit consumed: ");
    scanf("%d", &unitConsumed);

    if (unitConsumed < 199)
    {
        chargePreUnit = 1.20;
        totalAmount = unitConsumed * chargePreUnit;
    }
    else if (unitConsumed >= 200 && unitConsumed < 400)
    {
        chargePreUnit = 1.50;
        totalAmount = unitConsumed * chargePreUnit;
    }
    else if (unitConsumed >= 400 && unitConsumed < 600)
    {
        chargePreUnit = 1.80;
        totalAmount = unitConsumed * chargePreUnit;
    }
    else
    {
        chargePreUnit = 2.00;
        totalAmount = unitConsumed * chargePreUnit;
    }

    if (unitConsumed > 400)
    {
        surcharge = totalAmount * 0.15;
        totalAmount += surcharge;
    }
    if (totalAmount < 100)
    {
        totalAmount = 100;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID    : %d\n", customerId);
    printf("Customer Name  : %s", name);
    printf("Units Consumed : %d\n", unitConsumed);
    printf("Charge per Unit: %.2f\n", chargePreUnit);
    printf("Surcharge      : %.2f\n", surcharge);
    printf("Total Amount   : Rs. %.2f\n", totalAmount);

    return 0;
}