// list.cpp : Defines the entry point for the console application.
//

/// List container
#include "stdafx.h"
#include <stdlib.h>

class List/**< Name of the class*/
{
private:

	int* lst;/**< massive of values*/
	int num;/**< number of elements*/

public:

	List()/**< \param [in] constructor of the class*/
	{
		lst=(int*)calloc(1 ,sizeof(int));
		num=1;
	}

	void add/**< function of adding an element*/(int i, int val)
	{
		if (i==num)
		{
			num++;
			lst=(int*)realloc(lst, num*sizeof(int));
			lst[i]=val;
		}
		else if (i<num)
		{
			lst[i]=val;
		}
		else printf("Element number doesn't exist\n");
	}

	void del/**< function of deleting an element*/(int i)
	{
		if (i<num)
		{
			int* buf=(int*)calloc(num, sizeof(int));

			for (int i=0; i<num; i++)
			{
				buf[i]=lst[i];
			}

			lst=(int*)realloc(lst, sizeof(int)*(num-1));

			for (int l=0; l<i; l++)
			{
				lst[l]=buf[l];
			}

			for (int l=i; l<num-1; l++)
			{
				lst[l]=buf[l+1];
			}

			num--;
		}else printf("Element number doesn't exist\n");
	}

	int get/**< getting an element*/(int i)
	{
		printf("\nElement %d = %d", i, lst[i]);

		return lst[i];
	}

	int getnum/**< function of getting number of elements*/()
	{
		return num;
	}
};

/** The main body. just an example*/
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	printf("How many elements to add? ");
	scanf("%d", &n);
	List L1;
	List* l1=&L1;

	int i=0, val=0;
	printf("\nEnter a pair: element_number value\n");
	for (int i=0; i<n; i++)
	{
		scanf("%d %d", &i, &val); 
		l1->add(i, val);
	}
	printf("Element to delete? ");
	scanf("%d", &i);
	l1->del(i);

	for (int i=0; i<l1->getnum(); i++)
	{
		l1->get(i);
	}


	return 0;
}

