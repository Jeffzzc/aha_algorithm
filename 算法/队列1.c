#include<stdio.h>
struct queue
{
	int data[100];
	int head;
	int tail;
};
int main()
{
	struct queue q;
	int i;
	q.head=1;
	q.tail=1;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&q.data[q.tail]);
		q.tail++;
	}
	
	while(q.head<q.tail)
	{
		printf("%d ",q.data[q.head]);
		q.head++;
		
		q.data[q.tail]=q.data[q.head];
		q.tail++;
		
		q.head++;
	}
//	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
//	head=1;
//	tail=10;
//	while(head<tail)
//	{
//		printf("%d ",q[head]);
//		head++;
//		
//		q[tail]=q[head];
//		tail++;
//		head++;
//	}
	
	getchar();getchar();
	return 0;
}
