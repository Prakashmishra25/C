#include "stdio.h"    
#include "stdlib.h"   
#include "string.h"  
#include "conio.h"   
#include "mem.h"   
#include "ctype.h"   
#include "alloc.h"   
#define N 3      
typedef struct z1  
{
   char no[11];
   char name[20];
   int score[N];
   float sum;
   float average;
   int order;
   struct z1 *next;
 }STUDENT;
STUDENT  *init();      
STUDENT *create();   
STUDENT *delete(STUDENT *h);   
void print(STUDENT *h);   
void search(STUDENT *h);    
void save(STUDENT *h);    
STUDENT *load();        
void computer(STUDENT *h);  
STUDENT *insert(STUDENT *h);   
void append();            
void copy();            
STUDENT *sort(STUDENT *h);    
void total(STUDENT *h);       
int menu_select();            
main()
{
   int i;
   STUDENT *head;    
   head=init();          
   clrscr();          
   for(;;)            
   {
      switch(menu_select())   
	 case 0:head=init();break;   
	 case 1:head=create();break; 
	 case 2:head=delete(head);break; 
	 case 3:print(head);break;   
	 case 4:search(head);break;
	 case 5:computer(head);break;  
	 case 6:head=insert(head);  break; 
	 case 7:copy();break;    
	 case 8:head=sort(head);break;  
	 case 9:total(head);break;   
	 case 10:exit(0);       
      }
   }
}
menu_select()
{
   char *menu[]={"***************MENU***************",  
   " 0. init list",    
   " 1. Enter list",   
   " 2. Delete a record from list", 
   " 3. print list ",      
   " 4. Search record on name",   
   " 5. compute the score",    
   " 6. insert record to list ",   
   " 7. copy the file to new file",   /*复制文件*/
   " 8. sort to make new file",   /*排序*/
   " 9. total on nomber",      /*分类合计*/
   " 10. Quit"};              /*退出*/
   char s[3];      
   int c,i;       
   gotoxy(1,25);        
   printf("press any key enter menu......\n");  
   getch();                       
   clrscr();                     
   gotoxy(1,1);            
   textcolor(BLUE);   
   textbackground(WHITE);  
   gotoxy(10,2);          
   putch(0xc9);        
   for(i=1;i<44;i++)
      putch(0xcd);    
   putch(0xbb);          
   for(i=3;i<20;i++)
   {
      gotoxy(10,i);putch(0xba);   
      gotoxy(54,i);putch(0xba);
   }   /*输出右垂直线*/
   gotoxy(10,20);putch(0xc8);  
   for(i=1;i<44;i++)
      putch(0xcd);      
   putch(0xbc);                
   window(11,3,53,19);      
   clrscr();             
   for(i=0;i<16;i++)      
   {
      gotoxy(10,i+1);
      cprintf("%s",menu[i]);
   }
   textbackground(GREEN);  
   window(1,1,80,25);       
   gotoxy(10,21);       
   do{
      printf("\n	 Enter you choice(0~10):");    
      scanf("%s",s);          
      c=atoi(s);           
   }while(c<0||c>10);    
   return c;              
}
STUDENT *init()
{
   return NULL;
}
STUDENT *create()
{
   int i; int s;
   STUDENT *h=NULL,*info;  
   for(;;)
   {
      info=(STUDENT *)malloc(sizeof(STUDENT));  
      if(!info)  
      {
	 printf("\nout of memory");  
	 return NULL;           
      }
      inputs("enter no:",info->no,11);   
      if(info->no[0]=='!') break;    
      inputs("enter students' name:",info->name,20);
      printf("please input %d score \n",N);  
      s=0;         
      for(i=0;i<N;i++)          {
	 do{
	    printf("score%d:",i+1);    
	    scanf("%d",&info->score[i]);    
	    if(info->score[i]>100||info->score[i]<0) 
	    printf("Data is bad ,repeat input\n");  
	 }while(info->score[i]>100||info->score[i]<0);
	 s=s+info->score[i];   
      }
      info->sum=s;    
      info->average=(float)s/N;  
      info->order=0;    
      info->next=h;   
      h=info;    
   }
   return(h);  
}
inputs(char *prompt, char *s, int count)
{
   char p[255];
   do{
      printf(prompt);  
      scanf("%s",p);  
      if(strlen(p)>count)printf("\n too long! \n"); 
   }while(strlen(p)>count);
   strcpy(s,p); 
}
void print(STUDENT *h)
{
   int i=0;     
   STUDENT *p; 
   clrscr();     
   p=h;     
   printf("\n\n\n****************************STUDENT********************************\n");
   printf("|Rec|No        |      Name     | Sc1| Sc2| Sc3|   Sum  |  Ave  |Order|\n");
   printf("|---|----------|---------------|----|----|----|--------|-------|-----|\n");
   while(p!=NULL)
   {
       i++;
       printf("|%3d |%-10s|%-15s|%4d|%4d|%4d| %4.2f | %4.2f | %3d |\n", i, p->no,p->name,p->score[0],p->score[1],
p->score[2],p->sum,p->average,p->order);
       p=p->next;
   }
   printf("**********************************end*********************************\n");
}
STUDENT *delete(STUDENT *h)
{
   STUDENT *p,*q;  
   char s[11];    
   clrscr();       
   printf("please deleted no\n");      
   scanf("%s",s);  
   q=p=h;    
   while(strcmp(p->no,s)&&p!=NULL)  
   {
      q=p;       
      p=p->next;     
   }
   if(p==NULL)    
      printf("\nlist no %s student\n",s);
   else      
   {
      printf("*****************************have found***************************\n");
      printf("|No        |      Name     | Sc1| Sc2| Sc3|   Sum  |  Ave  |Order|\n");
      printf("|----------|---------------|----|----|----|--------|-------|-----|\n");
      printf("|%-10s|%-15s|%4d|%4d|%4d| %4.2f | %4.2f | %3d |\n", p->no,
       p->name,p->score[0],p->score[1],p->score[2],p->sum,
       p->average,p->order);
      printf("********************************end*******************************\n");
      getch();      
      if(p==h)   
	 h=p->next;     
      else
	 q->next=p->next; 
      free(p);          
      printf("\n have deleted No %s student\n",s);
      printf("Don't forget save\n"); 
   }
   return(h);     
}
void search(STUDENT *h)
{
   STUDENT *p;    
   char s[15];   
   clrscr();   
   printf("Please enter students' name for search\n");
   scanf("%s",s);   
   p=h;    
   while(strcmp(p->name,s)&&p!=NULL) 
   p=p->next;     
   if(p==NULL)        
      printf("\nlist no %s student\n",s);   
   else          
   {
      printf("\n\n*****************************havefound***************************\n");
      printf("|No        |      Name     | Sc1| Sc2| Sc3|   Sum  |  Ave  |Order|\n");
      printf("|----------|---------------|----|----|----|--------|-------|-----|\n");
      printf("|%-10s|%-15s|%4d|%4d|%4d| %4.2f | %4.2f | %3d |\n", p->no,
p->name,p->score[0],p->score[1],p->score[2],p->sum,p->average,p->order);
      printf("********************************end*******************************\n");
   }
}
STUDENT  *insert(STUDENT *h)
{
   STUDENT *p,*q,*info; 
   char s[11]; 
   int s1,i;
   printf("please enter location  before the no\n");
   scanf("%s",s);  
   printf("\nplease new record\n");     
   info=(STUDENT *)malloc(sizeof(STUDENT));  
   if(!info)
   {
      printf("\nout of memory");   
      return NULL;            
   }
   inputs("enter no:",info->no,11); 
   inputs("enter name:",info->name,15); 
   printf("please input %d score \n",N); 
   s1=0;   
   for(i=0;i<N;i++)   
   {
      do{        
	 printf("score%d:",i+1);
	 scanf("%d",&info->score[i]);
	 if(info->score[i]>100||info->score[i]<0)
	    printf("bad data,repeat input\n");
      }while(info->score[i]>100||info->score[i]<0);
      s1=s1+info->score[i];   
   }
   info->sum=s1;    
   info->average=(float)s1/N;  
   info->order=0;         
   info->next=NULL;     
   p=h;               
   q=h;             
   while(strcmp(p->no,s)&&p!=NULL)   
   {
      q=p;                 
      p=p->next;          
   }
   if(p==NULL)      
      if(p==h)      
	 h=info;  
      else
	 q->next=info; 
   else
      if(p==h)    
      {
	 info->next=p; 
	 h=info;    
      }
      else
      {
	 info->next=p;   
	 q->next=info;  
      }
   printf("\n ----have inserted %s student----\n",info->name);    printf("---Don't forget to save---\n");     
   return(h);         
}
void copy()
{
   char outfile[10],infile[10];
   FILE *sfp,*tfp;        
   STUDENT *p=NULL;   
   clrscr();    
   printf("Enter infile name,for example c:\\f1\\te.txt:\n");
   scanf("%s",infile);         
   if((sfp=fopen(infile,"rb"))==NULL)   
   {
      printf("can not open input file\n");
      exit(0);
   }
   printf("Enter outfile name,for example c:\\f1\\te.txt:\n");      scanf("%s",outfile); 
   if((tfp=fopen(outfile,"wb"))==NULL)  
   {
      printf("can not open output file \n");
      exit(0);
   }
   while(!feof(sfp))  
   {
      if(1!=fread(p,sizeof(STUDENT),1,sfp))
	 break; 
      fwrite(p,sizeof(STUDENT),1,tfp);  
   }
   fclose(sfp);    
   fclose(tfp);   
   printf("you have success copy  file!!!\n");   
}
STUDENT *sort(STUDENT *h)
{
   int i=0;                  
   STUDENT *p,*q,*t,*h1;  
   h1=h->next;           
   h->next=NULL;        
   while(h1!=NULL)    
   {
      t=h1;            
      h1=h1->next;    
      p=h;           
      q=h;         
      while(t->sum<p->sum&&p!=NULL)  
      {
	 q=p;           
	 p=p->next;
      }
      if(p==q)      
      {
	 t->next=p;     
	 h=t;         
      }
      else    
      {
	 t->next=p;  
	 q->next=t;   
      }
   }
   p=h;              
   while(p!=NULL) 
   {
      i++;       
      p->order=i;   
      p=p->next;   
   }
   printf("sort sucess!!!\n");   
   return h;     
}
void computer(STUDENT *h)
{
   STUDENT *p;   
   int i=0;  
   long s=0;  
   float average=0;  
   p=h;       
   while(p!=NULL)    
   {
      s+=p->sum;    
      i++;         
      p=p->next;   
   }
   average=(float)s/i;
   printf("\n--All students sum score is:%ld  average is %5.2f\n",s,average);
}
void total(STUDENT *h)
{
   STUDENT *p,*q;  
   char sno[9],qno[9],*ptr;    
   float s1,ave;       
   int i;      
   clrscr();    
   printf("\n\n  *******************Total*****************\n");
   printf("---class---------sum--------------average----\n");
   p=h;      
   while(p!=NULL)  
   {
      memcpy(sno,p->no,8);  
      sno[8]='\0';          
      q=p->next;        
      s1=p->sum;      
      ave=p->average;  
      i=1;          
      while(q!=NULL)   
      {
	 memcpy(qno,q->no,8);   
	 qno[8]='\0';     
	 if(strcmp(qno,sno)==0)  
	 {
	    s1+=q->sum;    
	    ave+=q->average; 
	    i++;        
	    q=q->next;   
	 }
	 else
	    break;  
      }
      printf("%s     %10.2f           %5.2f\n",sno,s1,ave/i);
      if(q==NULL)
	 break;  
      else
	 p=q;  
   }
   printf("---------------------------------------------\n");
}
