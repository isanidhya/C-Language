#include <stdio.h>

int main()
{
    int C,D,temp;
    printf("Enter the Number to be stored in C:");
    scanf("%d", &C);
    printf("Enter the Number to be stored in D:");
    scanf("%d", &D);
    temp=C;
    C=D;
    D=temp;
    printf("Number stored in C is: %d\n", C);
    printf("Number stored in D is: %d\n", D);

return 0;
}

    