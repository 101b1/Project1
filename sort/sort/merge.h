///Merge sort header.


#include "stdlib.h"


int* mergesort/**< \fn function that sorts 2 massives*/(int* a, int* b, int n1, int n2) 
{
	int m=0, k=0;
	int* c=new int[n1+n2];
	int i=0;
	/** sorting except the tail*/
	while ((k<n1) && (m<n2))
	{
			if (a[k]<b[m])
			{
				c[i]=a[k];
				k++;
			}
			else
			{
				c[i]=b[m];
				m++;
			}
			i++;
	}
	//printf("@");
	/**sorting the tail*/
		if (k==n1)
		{
			for (m;m<n2;m++)
			{
				c[i]=b[m];
				i++;
			}

		}
		else
		{ 
			for (k;k<n1;k++)
			{
				c[i]=a[k];
				i++;
			}
		}
	
		return c;
	}
int* merge(int* a, int n)      /**< function for splitting unsorted and merging sorted massives*/
{
	
	//printf("@");
	if (n>1)
	{int *b=new int[n/2], *c=new int[n-n/2];
	int j=0, n1, n2;
	
		for (int i=0; i<n; i++)
		{
			if (i<n/2)
			b[i]=a[i];
			else
			{
				c[j]=a[i];
				j++;
			}
		}//printf("@");
		
		n1=(int)n/2;   /**<new massive 1 limit*/

		n2=(int)n-n1;  /**<new massive 2 limit*/

		b=merge(b,n1);

		//printf("@");
		c=merge(c,n2);
		//printf("@");
		a=mergesort(b, c, n1, n2);

		//printf("@");
	} 

	return a;
}



