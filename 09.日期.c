#include<stdio.h>
#define MAXDATE 10
int isyear (int year){/*闰年*/
	int result;
	if (year%100)/*判断百年*/ 
		if (year%4) result=0;else result=1;
	else
		if (year%400) result=0 ;else result=1;
	return result;
} 
int main(void){
	int year[2][11]={{31,28,31,30,31,30,31,31,30,31,30},
			{31,29,31,30,31,30,31,31,30,31,30}};/*平闰年各月(12月除外)天数*/ 
	int date[MAXDATE][3]={{0}};/*存储年月日*/
	int i=0,j,m;
	int sum[MAXDATE]={0};
	do{
		scanf("%d/%d/%d",&date[i][0],&date[i][1],&date[i][2]);
	       	i++;
	}while(date[i-1][0]);/*input*/
	m=i-1;/*m组*/
	for(i=0;i<m;i++){	
		for(j=1;j<date[i][1];j++){
			sum[i]+=year[isyear(date[i][0])][j];
		}/*前几个月的天数*/
		sum[i]+=date[i][2];/*加上日*/	
	}
	for(i=0;i<m;i++)
		printf("%d\n",sum[i]);
} 
