// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

class Stack
{
private:
	int val;
	Stack *next;
public:
		Stack()
	{
		val=0;
		next=NULL;
	}

		Stack* push(int v)
		{
			next=new Stack [1];
			val=v;	
			return next;
		}

		int pull(Stack** head)
		{
			int buf=(*head)->val;
			*head=next;
			return buf;
		}

		Stack* getnext()
		{
			return next;
		}

		int getval()
		{
			return val;
		}
};




int _tmain(int argc, _TCHAR* argv[])
{

	Stack s;
	Stack *head=&s;
	Stack *ps=&s;

	for (int i=0; i<10; i++)
	{
		ps=ps->push(i);
	}
	while(head->getnext()!=NULL)
	{
		printf("%d", head->pull(&head));
	}	
	free(head);
	return 0;
}

