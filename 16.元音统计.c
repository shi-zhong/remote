#include<stdio.h>
#define MAXG	10
int main(void)
{
	int n,i,j,g;/*实例个数.循环变量.组数变量*/
	char data[MAXG][100];
	int num[MAXG][5]={{0}};
	/*输入组数*/
	scanf("%d",&n);
	/*输入数字*/
	for(i=0;i<=n-1;i++){
		j=1;
		data[i][0]=getchar();
		do{
			data[i][j]=getchar();
			j++;
		}while(data[i][j-1]!='\n');
	}
	/*统计*/
	for(i=0;i<=n-1;i++){
		j=0;
 		do{
 			switch (data[i][j]){
 				case ('a'):num[i][0]++;break;
 				case ('e'):num[i][1]++;break;
				case ('i'):num[i][2]++;break; 
 				case ('o'):num[i][3]++;break;
				case ('u'):num[i][4]++;break;
				default:; break;
			}
			j++;
		}while(data[i][j-1]);
 	}
	/*输出各组数字*/
	for(i=0;i<=n-1;i++){
		printf("\na:%d\n",num[i][0]);
		printf("e:%d\n",num[i][1]);
		printf("i:%d\n",num[i][2]);
		printf("o:%d\n",num[i][3]);
		printf("u:%d\n",num[i][4]);
	}
 
	return 0;
}
