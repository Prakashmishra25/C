#include <stdio.h>  
#include <stdlib.h>  
typedef struct pcb   {
    int name;  
    char state;  
    int super;  
    int ntime;  
    int utime; 
	int rtime;
	struct pcb* link;
}pcb,*p;  

void InitList(list L)
{
	L.PHead=NULL;
	L.PRear=L.PHead;
	count=0;

}
void PushBack(list *L,PCB pcb)
{
	Node* newnode=new Node();
	newnode->pcb=pcb;
	newnode->next=L->PRear->next;
	L->PRear->next=newnode;
	L->PRear=newnode;
	count++;

}
void sort(list){

}


int main(void){


	return 0;



}



