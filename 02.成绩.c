#include<stdio.h>
int result(int i,int j){
	int n;
	if(i>=60&&j>=60) n=1;
	if(i<60||j<60) n=2;
	if((i<0||i>100)||(j<0||j>100)) n=3;
	return n;
}
int main (void)
{
	int a,b;
	printf("第一门课：");scanf("%d",&a);
	printf("第二门课：");scanf("%d",&b);
	switch(result(a,b)){
		case 1:puts("It is pass.");break;
		case 2:puts("It is not pass.");break;
		case 3:puts("It is error.");break;
	}
	return 0;
 } 
