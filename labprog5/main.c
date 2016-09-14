/*program to evaluate a polynomial using horner's method*/
#include<stdio.h>
int main()
{
int n,i;
float a[20],x,sum;
printf("enter the order of the polynomial\n");
scanf("%d",&n);
printf("enter the coefficients\n");
for(i=0;i<=n;i++)
scanf("%f",&a[i]);
printf("enter the value of x\n");
scanf("%f",&x);
sum=a[n]*x;
for(i=n-1;i>0;i--)
sum=(sum+a[i])*x
sum=sum+a[0]
printf("evaluation of polynomial,f(%f)=%f\n",x,sum);
return 0;
}
