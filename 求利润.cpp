#include <stdio.h>
int main(){
	int x,y,n=0,i,a,b;
	float z[]={1,1,1,1,1};
	printf("Enter interest rate:");
	scanf("%d",&x);
	printf("Enter number of years:");
	scanf("%d",&y);
	
	printf("Years\t%3d%%\t%3d%%\t%3d%%\t%3d%%\t%3d%%\n",x,x+1,x+2,x+3,x+4) ;
	for(a=0;a<y;a++){
		n=0;
		for(i=x;i<=x+4;i++){
			z[n]=1;
			for(b=0;b<a+1;b++){
				z[n] *=1+i*0.01;
			}
			z[n] *= 100;
			n++;
		}
	printf("%3d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",a+1,z[0],z[1],z[2],z[3],z[4]);
	}
}
