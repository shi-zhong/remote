#include<stdio.h>
void printNum(int num){
	switch (num){
		case 0 : printf("ling");break;
		case 1 : printf("yi");break;
		case 2 : printf("er");break;
		case 3 : printf("san");break;
		case 4 : printf("si");break;
		case 5 : printf("wu");break;
		case 6 : printf("liu");break;
		case 7 : printf("qi");break;
		case 8 : printf("ba");break;
		case 9 : printf("jiu");break;
	}
}
int main(void){
        long long number;
        int sum=0,single[100]={0};
	int i=0;
        scanf("%lld",&number);
        do{
                sum+=(int)(number%10);
                number/=10;
        }while(number>0);
	
	do{
		single[i]=sum%10;
		sum/=10;
		i++;
	}while(sum>0);
	i--;
	for(int j=i;j>=0;j--){
		if(j){
			printNum(single[j]);
			printf(" ");
		}else{
			printNum(single[j]);
		}
	}
        return 0;
}
