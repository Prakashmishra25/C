#include <stdio.h>
#include <math.h>
double s1(double a,double b,double c)
{
if (a+b>c&&a+c>b&&b+c>a)
{
	double p,s;
	p=1.0/2*(a+b+c);
	a=p-a;b=p-b;c=p-c;
	s=sqrt(p*a*b*c);
	return s;
}
else 
return 0;
	}
double s2(double a,double b,double c)
{
if (c<180)
{
double s;
s=1.0/2*a*b*sin(3.14159265358979323846*c/180);
return s;
}
else 
return 0;
	}
double s3(double a,double b)
{
	double s;
	s=1.0/2*a*b;
	return s;
}
void main ()
{
int e=1;
while (e)
{
int f;
double a,b,c,s=0;
printf ("求三角形面积\n输入1已知三边\n输入2已知两边及其夹角\n输入3已知底和高\n");
scanf ("%d",&f);
if (f==1)
{
	printf ("输入三边长，空格隔开\n");
	scanf ("%lf%lf%lf",&a,&b,&c);
	s=s1(a,b,c);
	}
else if (f==2)
{
	printf ("输入两边及其夹角，空格隔开\n");
	scanf ("%lf%lf%lf",&a,&b,&c);
	s=s2(a,b,c);
	}
else if (f==3)
{
	printf ("输入底和高，空格隔开\n");
	scanf ("%lf%lf",&a,&b);
	s=s3(a,b);
	}
else 
printf ("输入错误\n");
if (s!=0)
printf ("所求三角形的面积为%g\n",s);
else 
printf ("输入不符合要求\n");
printf ("输入0结束，输入其他字符继续\n");
scanf ("%d",&e);
	}
printf ("欢迎再次使用\n");
}
	