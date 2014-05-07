#include "stdio.h"
///Bubble sort header

int* bubble(int* a, int n)
{
	int buf=0;
	 printf("\nUnsorted:\n");
	 for (int i=0; i<n; i++)
	 {
		 printf("%d ", a[i]);
	 }

	 for (int i=0; i<n-1; i++)  /**< Cycle that sorts*/
	 {
		 for (int j=i+1; j<n; j++)
		 {
			 if (a[i]>a[j])
			 {
				 buf=a[i];
				 a[i]=a[j];
				 a[j]=buf;
			 }
		 }
	
	 }
	 printf("\nSorted:\n");
	 for (int i=0; i<n; i++)
	 {
		 printf("%d ", a[i]);
	 }

	 return a;
}