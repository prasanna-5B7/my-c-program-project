#include <stdio.h>
void main()
{
int a,b,x,y,i;
printf("enter a value:");
scanf("%d",&a);
printf("enter b value:");
scanf("%d",&b);
printf("enter x and y values:");
scanf("%d%d",&x,&y);
for(i=x;i<=y;i++)
 {if(i%a==0&&i%b==0)
 printf("%d\n",i);
 }
}