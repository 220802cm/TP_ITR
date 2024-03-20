#include <stdio.h>

int main ()
{
	int a[10]={2,8,5,3,9,1,34,76,4,6};
	int s=5;
	int c=1;
	for (int i=1;i<11;i++)
	{
		if (i==a[i])
		{
			printf("trouvé en position %d",c);
			break;
		}
		else 
		{
			c=c+1;
		}
	}
	return 0;
}
