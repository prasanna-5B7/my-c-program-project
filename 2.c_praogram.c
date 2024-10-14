#include <stdio.h>
int main() 
{
int number, rev_Num = 0, remainder, orig_Num;
printf("Enter an integer: ");
scanf("%d", &number);
orig_Num= number;
for (; number!= 0; number/=10)
{
remainder = number % 10;
rev_Num = rev_Num* 10+remainder;
}
if (orig_Num == rev_Num)
printf("%d is a palindrome number\n", orig_Num);
else
printf("%d is not a palindrome number\n", orig_Num); 
}