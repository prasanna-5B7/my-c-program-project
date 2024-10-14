#include<math.h>
void main()
{
float a,b,c,r1,r2, discriminant,real, imaginary;
printf("enter coefficient of a,b,c:");
scanf("%f%f%f",&a,&b,&c);
discriminant=b*b-4*a*c;
if(discriminant>0){
printf("roots are real and distinct\n");
r1=(-b+sqrt(discriminant))/(2*a);
r2=(-b-sqrt(discriminant))/(2*a);
printf("one root is %f \n",r1);
printf("another root is %f\n",r2);}
else if(discriminant<0)
{printf("roots are complex and imaginary");}
else if(discriminant == 0)
{printf("roots are real and equal");
r1=r2=-b/(2*a);
printf("roots are %f",r1);}
}