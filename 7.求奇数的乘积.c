#include<stdio.h>
#define MAXZS 10/*最大组数*/
int jishu(int n)/*判断是否为奇数，返回0/1*/
{	
	int i=1;
	if (n%2==0&&n>0) i=0;
	return i;
}
int main (void)
{	int a[MAXZS][99]={{0}};
	int b[MAXZS]={1};
	int i=0,j=0,m=0;
	do{/*读取组数*/
		for(j=0;j<=a[i][0];j++)
			scanf("%d",&a[i][j]);
		i++;
	}while(a[i-1][0]);
	m=i;/*记录组数,m-1组*/
	for(i=0;i<=m-2;i++) b[i]=1;
	for(i=0;i<=m-1;i++){/*判断奇数并相乘*/
		for(j=1;j<=a[i][0];j++)
			if(jishu(a[i][j])) b[i]*=a[i][j];
	}

	for (i=0;i<=m-2;i++)
		printf("%d\n",b[i]);
	return 0; 
}
