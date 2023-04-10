#include <stdio.h>

int main()
{
    float km, meters, feet, inches, cm;
    printf("Enter the distance in KM: ");
    scanf("%f", &km);
    meters=km*1000;
    cm=meters*100;
    feet=cm*0.0328084;
    inches=feet*12;
    printf("Distance in Meters: %f\n", meters);
    printf("Distance in Centimeters: %f\n", cm);
    printf("Distance in Feet: %f\n", feet);
    printf("Distance in Inches: %f\n", inches);
return 0;
}