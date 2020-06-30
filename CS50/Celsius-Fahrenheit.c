#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, 300; floating-point versión */

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0; //* lower limit of temperature table */ 
    upper = 300; //* upper limit */
    step = 20; //* step size */
    celsius = lower;
    
    printf("Celsius-Fahrenheit table\n");
    
    while (celsius <= upper) 
    {
        fahr = (celsius * 1.8) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr); 
        celsius = celsius + step;
    }
}
