#include <stdio.h>
int main()
{
	float x;
	scanf("%f",&x);
	
	if(x>=0)
	{
		for(int i = 0;;i++)
		{
		if(i>x)
		{
			printf("%d",i-1);
			break;
		}else if(i == x)
		{
			printf("%d",i);
			break;
		}
		}
	}else
	{
		for(int i = 0;;i--)
		{
		if(i<x)
		{
			printf("%d",i+1);
			break;
		}else if(i == x)
		{
			printf("%d",i);
			break;
		}
		}
	} 
	return 0;
}
