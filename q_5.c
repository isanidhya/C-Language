#include <stdio.h>

int main()
{
    float l, b, ar,pr,r;
    printf("Enter the Length of Rectange: ");
    scanf("%f", &l);
    printf("Enter the breath of Rectange: ");
    scanf("%f", &b);
    ar=l*b;
    pr=(l+b)*2;
    printf("Area of Rectange is: %f units square\n", ar);
    printf("perimeter of Rectange is: %f units\n", pr);

    printf("Enter the radius of Circle: ");
    scanf("%f", &r);
    ar=r*r*3.14;
    pr=2*3.14*r;
    printf("Area of Circle is: %f units square \n", ar);
    printf("Circumferencer of Circle is: %f\n", pr);

    return 0;
}
