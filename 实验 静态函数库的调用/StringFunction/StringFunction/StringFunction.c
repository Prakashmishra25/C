#include"StringFunction.h"
int myStrlen(const char *p)
{
	int i=0;
	while(p[i]!='\0')
	{
		i++;
	}
	return i;
}

void myStrcpy(char *p, const char *q)
{
	int len=myStrlen(q);
	int i;
	for(i=0;i<len;i++)
	{
		p[i]=q[i];

	}
	p[i]='\0';
}

void myStrcat(char *p, const char *q)
{
	int lenA=myStrlen(p);
	int lenB=myStrlen(q);
	int i, j;
	i=lenA;
	for(j=0;j<lenB;j++, i++)
	{
		p[i]=q[j];
	}
	p[i]='\0';
}

int myStrcmp(const char *p, const char *q)
{
	int lenA=myStrlen(p);
	int lenB=myStrlen(q);
	int i=0, j=0;
	while((i<lenA)&&(j<lenB))
	{
		if(p[i]>q[i])
		{
			return 1;
		}
		else if(p[i]<q[i])
		{
			return -1;
		}
		i++;
		j++;
	}
	if(i<lenA)
	{
		return 1;
	}
	if(j<lenB)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

