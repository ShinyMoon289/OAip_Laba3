#include <iostream>
#include<math.h>

int main()
{
	double pi=1;
	int i;
	
	for (i = 1; i < 501; i++)
	{
		pi = pi + ((1./ (2*i+1))*pow(-1,i));
	}
	pi *= 4;
	printf("%f", pi);
	return 0;
}
