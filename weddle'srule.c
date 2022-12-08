#include<stdio.h>
float f(float x)
{
float a=1/(1+x);
return a;
}
int main()
{
int n;
float a,b,x,h,area=0.0;
printf("enter lower bound,upper bound ,number of intervals=\n");
scanf("%f%f%d",&a,&b,&n);
x=a;
h=(b-a)/n;
do{
 area=area+((3*n/10)*(f(a)+f(a+2*n)+5*f(a+n)+6*f(a+3*n)+f(a+4*n)+5*f(a+5*n)+f(a+6*n)));
x=x+6*n;
}
while(x<b);
printf("result=%f",area);
return 0;
}
