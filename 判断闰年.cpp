#include <stdio.h>
int main(void){
	int x;
	scanf("%d",&x);
	if(x%400!=0) 
		if(x%100==0||x%4!=0){
		printf("·ñ");
	}
	else if(x%100!=0&&x%4==0)
			printf("ÊÇ");
	return 0; 
}

