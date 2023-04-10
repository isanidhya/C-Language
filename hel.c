#include <stdio.h>

int main()
{
    float da, hr, gross_salary, basic_salary;
    printf("Enter your Basic Salary: ");
    scanf("%f", &basic_salary);
    da = (basic_salary*40)/100;
    hr = (basic_salary*20)/100;
    gross_salary= da+hr+basic_salary;
    printf("The Gross salary: %f\n", gross_salary);
    return 0;
}