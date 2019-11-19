#include<stdio.h>
int sumNum(int num){
	int sum=0;
	do{
		sum+=num%10;
		num/=10;
	}while(num>0);
	return sum;
}
int main(void){
	int num;
	int data[1000];
	int pass[35]={0};
	scanf("%d",&num);
	for(int i=0;i<=num-1;i++){
		scanf("%d",&data[i]);
		pass[sumNum(data[i])]++;
	}
	int all=0;
	for(int i=0;i<=35;i++){
		if (pass[i]>=2){
			all++;
		}
	}
	printf("%d\n",all);
	int j=0;
	for(int i=0;i<=35;i++){
		if(pass[i]>=2){
			if(j==all-1){
				printf("%d",i);
				break;
			}else{
				printf("%d ",i);
				j++;
			}
		}	
	}
	return 0;
}
