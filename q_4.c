#include <stdio.h>

int main()
{
    float f, c;
    printf("Enter the Temperature in Fahrenheit Degree: ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("The temperature in Centigrade gedree is: %f\n", c);
return 0;
}
