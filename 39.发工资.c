#include <stdio.h>
int main () {
	int k, money, sum=0, outputs[100]={0}, this=0;
	do{
		scanf("%d", &k);
		for (int i = 0; i<k; i++) {
			scanf("%d",&money);
			
			sum+=money/100;
			money%=100;
			sum+=money/50;
			money%=50;
			sum+=money/10;
			money%=10;
			sum+=money/2;
			money%=2;
			sum+=money;
		}
		outputs[this]=sum;
		this++;
		sum=0;
	}while(k!=0&&this!=99);
	this=0;
	while(outputs[this]!=0) {
		printf("%d\n",outputs[this]);
		this++;
	}
	return 0;
}
