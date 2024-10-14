#include <stdio.h>
int main()
{
int n, originalNumber, sum = 0, rem;
printf("Enter n: ");
scanf("%d", &n);
originalNumber = n; 
while (n > 0)
{
rem=n%10;
sum+=rem*rem*rem;
n /= 10;
}
if (sum == originalNumber)
printf("%d is an Armstrong number.\n", originalNumber);
else
printf("%d is not an Armstrong number.\n", originalNumber);
}