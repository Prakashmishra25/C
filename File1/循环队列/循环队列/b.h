#include<iostream>
using namespace std;
Typedef struct 

{
	int *q;
	int rear;
	int length;
}queue;

void Init(queue *S);
void Enqueue(queue *S,int x);
void Dequeue(queue *S,int x);

#endif /* DYNASEQLIST_H  */