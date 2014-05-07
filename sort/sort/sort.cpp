// sort.cpp : Defines the entry point for the console application.
//
///Simple example
#include "stdafx.h"
#include "bubble.h"
#include <iostream>
#include "merge.h"

using namespace:: std;

/*double fact(int n)
{
	if (n==1)
	{
		
		return n;
	}
	return n*fact(n-1);
}  

double binom(int n, int k)
{

	printf("%f\n", fact(n)/(fact(k)*fact(n-k)));
	 return fact(n)/(fact(k)*fact(n-k));
}
*/

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10]={3, 5, 8, 2, 14, 76, 55, 9, 10, 33};     /**< Massive of int to operate with*/
	
	int *b;
	
	
	b=merge(a,10);

	
	 for (int i=0; i<10; i++)
	 {
		
		  printf("%d ", b[i]);
	 }
	 
	bubble(a,10);

	return 0;
}

