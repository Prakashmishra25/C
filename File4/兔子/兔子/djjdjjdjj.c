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
printf ("�����������\n����1��֪����\n����2��֪���߼���н�\n����3��֪�׺͸�\n");
scanf ("%d",&f);
if (f==1)
{
	printf ("�������߳����ո����\n");
	scanf ("%lf%lf%lf",&a,&b,&c);
	s=s1(a,b,c);
	}
else if (f==2)
{
	printf ("�������߼���нǣ��ո����\n");
	scanf ("%lf%lf%lf",&a,&b,&c);
	s=s2(a,b,c);
	}
else if (f==3)
{
	printf ("����׺͸ߣ��ո����\n");
	scanf ("%lf%lf",&a,&b);
	s=s3(a,b);
	}
else 
printf ("�������\n");
if (s!=0)
printf ("���������ε����Ϊ%g\n",s);
else 
printf ("���벻����Ҫ��\n");
printf ("����0���������������ַ�����\n");
scanf ("%d",&e);
	}
printf ("��ӭ�ٴ�ʹ��\n");
}
	