#include<stdio.h>
int main(void){
	long long number;
	int single[999]={0};
	int count[9]={0};
	int i=0;
	scanf("%lld",&number);
	do{
		single[i]=(int)(number%10);
		number/=10;
		i++;
	}while(number>0);
	for(int j=0;j<=i-1;j++){
		count[single[j]]++;
	}
	for(int j=0;j<=9;j++){
		if (count[j]) {
			printf("%d:%d\n",j,count[j]);
		}
	}
	return 0;
}
