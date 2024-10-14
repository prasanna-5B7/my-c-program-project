#include <stdio.h>

int main()
{
int decimal, binary[32], index = 0;
printf("Enter a decimal number: ");
scanf("%d", &decimal);
int num = decimal;
if (decimal == 0)
printf("The binary equivalent of %d is 0\n", decimal);
while (decimal > 0)
{
binary[index] = decimal % 2; 
decimal = decimal / 2;
index++;
}
printf("The binary equivalent of %d is: ", num);
for (int i = index - 1; i >= 0; i--)
printf("%d", binary[i]); 
printf("\n");
}