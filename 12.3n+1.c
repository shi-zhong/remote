#include<stdio.h>
int isdouble(int k){
	int j;
	j=(k%2)?0:1;
	return j;
}
int main(void){
	int n,time=0;
	scanf("%d",&n);
	while(n!=1){
		isdouble(n)?(n/=2):(n=(n*3+1)/2);
		time++;
	}
	printf("%d\n",time);
}

