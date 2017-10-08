//#include<stat.h>
#include "libmath.h"
int mean(int * par, int size)
{
	int sum =0;
	for(int ir=0;ir<size;ir++)
	{
		sum+=par[ir];
	}
	return (sum/size);
}
