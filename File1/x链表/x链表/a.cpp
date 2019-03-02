/*#include<stdio.h>
#include<malloc.h>
#include <memory.h>
#include<stdlib.h>
#define Elemtype int
typedef struct Node
{
	Elemtype data;				
	struct Node *next;			
} LNode, *LinkList;
void InitList(LinkList *L)
{
	(*L)=(LinkList)malloc(sizeof(LNode));
	(*L)->data=0;
	(*L)->next=NULL;
	
}

void createLinkList(LinkList *L,int n)
{
	LinkList s;
	int i;
	int p;
	for(i=1;i<=n;++i)
	{
		printf("请输入第%d项的数据项:\n",i);
		scanf("%d",&p);
		s=(LinkList)malloc(sizeof(LNode));
		s->data=p;
		s->next=(*L)->next;
		(*L)->next=s;
	}
}

LinkList P(LinkList * pHead,int x)  
{  
    
    LinkList smallstart = NULL;  
	LinkList smallend = NULL;     
    LinkList bigstart = NULL;  
    LinkList bigend = NULL;  
    LinkList pCur = *pHead;  
  
    while(pCur)  
    {  
        if (pCur->data< x)  
        {  
            if (smallend == NULL) 
            {  
                smallstart = smallend = pCur;  
            }  
            else  
            {  
                smallend->next = pCur;  
                smallend = pCur;  
            }  
        }  
        else  
        {  
            if(bigend == NULL) 
            {  
                bigstart = bigend = pCur;  
            }  
            else  
            {  
                bigend->next = pCur;  
                bigend = pCur;  
            }  
        }  
        pCur = pCur->next;  
    }  
  
	smallend->next = bigstart;  
    bigend->next = NULL;
	return smallstart;
      
  
    
  
}  
void display(LinkList S)
{
	LinkList p=S->next;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
int main(void)
{
	LinkList S;
	InitList(&S);
	createLinkList(&S,5);
	display(S);
	S=P(&S,4);
	display(S);
	return 0;
	
}*/
