

#include <stdio.h>

int main()
{
    float basic, gross, da, hra;

    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);

    if(basic <= 10000)
    {
        da  = basic * 0.1;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.2;
        hra = basic * 0.3;
    }
    else if(basic <= 5000)
    {
        da  = basic * 0.3;
        hra = basic * 0.4;
 }
        else if(basic <= 10000)
    {
        da  = basic * 0.5;
        hra = basic * 0.5;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
