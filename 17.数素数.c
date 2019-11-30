#include<stdio.h>
int isSuShu(int num){/*判断是否为素数*/
	int flag=1;
	int i,j;
	for(i=2;i<=(num/2);i++){
		if (num%i==0){
			return flag=0;
		}
	}
	return flag;
}
int main(void){
	int first,second;/*input*/
	int count=0,isTen=0;/*第几个素数;是否换行*/
	int number=2;
	scanf("%d %d",&first,&second);
	while(count<=second-1){
		if(isSuShu(number)){
			count++;
			if (count>=first){
				isTen++;
				printf("%d",number);
				if (isTen%10!=0){
					printf(" ");
				}else{
					printf("\n");
				}
			}
		}
		number++;	
	}
	printf("\n");
	return 0;
}
