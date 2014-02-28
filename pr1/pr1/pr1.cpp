// pr1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Figure{
public:
	int a;
	int b;
	int c;

	Figure(int r=1, int t=2, int y=3)
	{
		a=r;
		b=t;
		c=y;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Figure A; Figure B;

	A.a=B.b-B.c;

	printf("%d %d", A.a, B.c);

	return 0;
}

