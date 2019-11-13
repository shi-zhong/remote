#include<stdio.h>
#define CLK_TCK 100
int main(void){
	long c1,c2;
	int sum_time;
	scanf("%ld %ld",&c1,&c2);
	sum_time=(c2-c1+50)/CLK_TCK;
	long second,minute,hour;
	second=sum_time%60;
	minute=(sum_time/60)%60;
	hour=(sum_time/60/60)%60;
	printf("%.2ld:%.2ld:%.2ld",hour,minute,second);
	return 0;
}
