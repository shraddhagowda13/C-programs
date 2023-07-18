/*Armstrong number is the number, which forms the total of the same number, 
when each of its digits is raised to the power of the number of digits in the number. 

For example, using a simple number 153, we see there are 3 digits. If we raise each of its digits to the 
power of 3,and then totalling the sum obtained, we get 153.That is (1^3)+(5^3)+(3^3)=153. */
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
