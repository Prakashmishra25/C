
                 
                   
                
           

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int num(char *p, int n)
{
	int i=0;
	while(i<n)
	{
		if((p[i]>=48)&&(p[i]<=57))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

}
int main(void)
{
	char a[11];
	char b[4];
	int n=0;
	char text1[][4]={"130","131","132","155","156","185","186"};
	char text2[][4]={"134","135","136","137","138","139","147","150","151","152","157","158","159","182","187","188"};
	char text3[][4]={"133","153","180","188"};
	while(1)
	{
		here:
		printf("�������ֻ����룺");
		scanf("%s",a);
		if(num(a,strlen(a)))
		{
			printf("������ĺ����з����֣�����������:");
			continue;

		}
		if(strlen(a)>11)
		{
			printf("��������ĺ���λ������11λ�����������룺");
			continue;
		}
		if(strlen(a)<11)
		{
			printf("��������ĺ���λ��С��11λ�����������룺");
			continue;
		}
		
		while(n<4)
		{
			b[n]=a[n];
			n++;
		}
		for(n=0;n<7;n++)
		{
			if(strcmp(b,text1[n])==0)
			{
				printf("���õ�����ͨ����");
			}
		}
		for(n=0;n<16;n++)
		{
			if(strcmp(b,text1[n])==0)
			{
				printf("���õ����ƶ�����");
			}
		}
		for(n=0;n<4;n++)
		{
			if(strcmp(b,text1[n])==0)
			{
				printf("���õ��ǵ��ź���");
			}
		}
		printf("û�������ĺ��룬���������룺");
		goto here;
		
		
		
	}
	system("pause");
	return 0;

}
	
	

