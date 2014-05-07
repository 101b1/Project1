// Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

class Queue
{
protected:
	 int* val;
	 int n;
public:

	Queue()
	{
		n=1;
		val=(int*)malloc(n*sizeof(int));
		val[0]=0;
	}

	void push(int value)
	{
		if (n==1)
		{
			val[0]=value;
			
			n++;
		}
		else
		{
			
			val=(int*)realloc(val,n*sizeof(int));
			val[n-1]=value;
			n++;
		}
		
	}

	int take()
	{			
		n--;
		if (n==0)
			{
				printf("Queue is empty");
				return -1;
			}

		int buf=val[0];
		
		if (n!=1)
		{
			int* buffer=(int*)malloc((n)*sizeof(int)); 
			for (int i=0; i<n; i++)
			{
				buffer[i]=val[i];
			}
			val=(int*)realloc(val,(n-1)*sizeof(int));
			for (int i=0; i<(n-1); i++)
			{
				val[i]=buffer[i+1];
			}

			free(buffer);
		}		
		return buf;
	}

	void del()
	{			
		n--;
		if (n==0)
			{
				printf("Queue is empty");				
			}

		int buf=val[0];
		
		if (n!=1)
		{
			int* buffer=(int*)malloc((n)*sizeof(int)); 
			for (int i=0; i<n; i++)
			{
				buffer[i]=val[i];
			}
			val=(int*)realloc(val,(n-1)*sizeof(int));
			for (int i=0; i<(n-1); i++)
			{
				val[i]=buffer[i+1];
			}

			free(buffer);
		}			
	}


};

int _tmain(int argc, _TCHAR* argv[]) 
{
	Queue q;
	int n=0;
	printf("How many elements in the queue? ");
	scanf("%d", &i);
	for (int i=0; i<n; i++)
	{
		int v=0;
		printf("\nElement: ");
		scanf("%d", &v);
		q.push(v);
	}

	for (int i=0; i<n; i++)
	{
		printf("\n%d", q.take());
	}

	return 0;
}

