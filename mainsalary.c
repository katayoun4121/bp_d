#include <stdio.h>
float calclatingtax(int salary)
{
    float tax;
    if (salary <= 10000000)
    {
        tax = 0;
    }
    else if (salary > 10000000 && salary < 20000000)
    {
        tax = 0.05 * salary;
    }
    else
    {
        tax = 0.1 * salary;
    }
    return tax;
}
int main()
{
    int salary;
    printf("please enter ur salary:");
    scanf("%d", &salary);
    float tax = calclatingtax(salary);
    printf("ur tax is:%f.", tax);
    return 0;
}