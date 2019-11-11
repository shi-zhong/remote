#include<stdio.h>
double getAnwser(int n){
	int flag=1;
	double sum=0;
	for(double i=1;i<=n;i++){
		sum+=flag*(1/i);
		flag*=-1;	
	}
	return sum;
}
int main(void){
	int t;
	int num[1000];
	scanf("%d",&t);
	for (int i=0;i<=t-1;i++){
		scanf("%d",&num[i]);
	}
	for(int i=0;i<=t-1;i++){
		printf("%.3f ",getAnwser(num[i]));
	}
	printf("\n");
	return 0;
}
