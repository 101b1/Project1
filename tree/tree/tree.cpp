// tree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

class Tree
{
private:
	int val;
	int num;
	Tree* son;
public:

	Tree()
	{
		val=0;
		son=NULL;
		num=0;
	}

	Tree* find(int* number)
	{
		Tree* ptr=this; 
		 
		if  (*number!=0)
		{
			(*number)--;
			if (ptr->son!=NULL) 
			{
				int i=0;
				Tree* buf=NULL;
				while (buf==0 && i<num)
				{
					buf=ptr->son[i].find(number);
					i++;
				}
				return buf;
			}else return 0;
		}
		else if(*number==0) {return this;}
	}

	/*	Tree* find(int* number)
	{
		Tree* p=NULL;
		if  (*number!=0)
		{
			*number--;
			if (this->son!=NULL) 
			{
				Tree* ptr=NULL;
				while (ptr==0)
				{
					ptr=find(number);
				}
				return ptr;
			}else return 0;
		}
		else if(*number==0) {return this;}
	}*/

	int getnum()
	{ 
		return num;
	}



	int print(int n)
	{
		return find(&n)->val; 
	}



	int getval()
	{
		printf("%d ", val);
		return val;
	}



	void printson()
	{
		for (int i=0; i<num; i++)
		{
			printf("%d ", son[i].val);
		}
	}



	Tree getson(int i)
	{
		return son[i];
	}
	

	void push(int* n, int v)
	{
		Tree* buf=find(n);
		buf->son=(Tree*)realloc(buf->son, ((buf->num)+1)*sizeof(Tree));
		buf->son[buf->num].val=v;
		buf->son[buf->num].son=NULL;
		buf->son[buf->num].num=0;
		buf->num++;
	} 


	int reverse(int key=0)
{
	/*if (this->son[0].son!=NULL)
	{
		this->son[0].reverse(1);
	}
	if (key==1)
	{
		printf("%d %d ", this->son[0].val, this->val);
		for (int i=1; i<num; i++)
		{
			if (this->son[i].son!=NULL)	this->son[i].reverse(1);
			else printf("%d ", this->son[i].val);
		}
	}
	else 
	{
		printf("%d ", this->val);
		for (int i=1; i<num; i++)
		{
			if (this->son[i].son!=NULL)	this->son[i].reverse(1);
			else printf("%d ", this->son[i].val);
		}
	}*/


	if (this->son[0].son!=NULL)	this->son[0].reverse(1);
	else printf("%d ", this->son[0].val);
	printf("%d ", this->val);
	for (int i=1; i<num; i++)
		{
			if (this->son[i].son!=NULL)	this->son[i].reverse(1);
			else printf("%d ", this->son[i].val);
		}
	return 0;
}

	int symmetric(int key=0)
{
	/*if (this->son[0].son!=NULL)
	{
		this->son[0].symmetric(1);
	}  
	if (key==1)
	{		*/
		for (int i=0; i<num; i++)
		{
			if (this->son[i].son!=NULL)	this->son[i].symmetric(1);
			else printf("%d ", this->son[i].val);
		}
		printf("%d ", this->val);
	/*}
	else 
	{
		
		for (int i=1; i<num; i++)
		{
			if (this->son[i].son!=NULL)	this->son[i].symmetric(1);
			else printf("%d ", this->son[i].val);
		}
		printf("%d ", this->val);
	}*/
	return 0;
}

};

int _tmain(int argc, _TCHAR* argv[])
{

	Tree t;
	int v=0;
	int n=0;
	int id=0;

	printf("Enter the number of nodes.\n");
	scanf("%d", &n);
	printf("Enter %d pairs of 'node number' 'value'.\n", n);

	for (int i=0; i<n; i++)
	{
		scanf("%d %d", &id, &v);
		t.push(&id, v);
	}

	
	//t.find(&v)->printson();
	//t.printson();
	int k=0;
	for (int i=0; i<n; i++)
	{
		
		t.find(&k)->getval();
		k=i+1;
	}

	t.reverse();
	printf("\n");
	t.symmetric();
	
	return 0;
}

