#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, agg;
    float percent;
    printf("Enter the marks of Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter the marks of Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter the marks of Subject 3: ");
    scanf("%d", &sub3);
    printf("Enter the marks of Subject 4: ");
    scanf("%d", &sub4);
    printf("Enter the marks of Subject 5: ");
    scanf("%d", &sub5);
    agg=sub1+sub2+sub3+sub4+sub5;
    percent=agg/5;
    printf("Aggregate of enterd marks is: %d\n", agg);
    printf("Percentage of enterd marks is: %f%%\n", percent);
return 0;
}
