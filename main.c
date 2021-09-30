//Mansueto Mi2Act2
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int result;
    printf("input first number");
    scanf("%d", &num1);
    printf("input second number");
    scanf("%d", &num2);
    printf("inpute third number");
    scanf("%d", &num3);
    
    result = num1 / num2 * num3;
    printf("\n%d RPM devide %d secs Multiply to %d is equal to %d Degrees per second", num1, num2, num3, result);
    return 0;
    }