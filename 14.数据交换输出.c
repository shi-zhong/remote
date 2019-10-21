#include<stdio.h>
#define MAXG 10
int main(void)
{
	int data[MAXG][100]={{0}};
	int g=0,i,j,t,temp;
	int k;/*标记*/ 
	do {
		for(i=0;i<=data[g][0];i++)
			scanf("%d",&data[g][i]);	
		g++;
	}while(data[g-1][0]!=0&&g<=MAXG);
	g--;
	for(t=0;t<=g-1;t++){
		k=1;
		for(i=2;i<=data[t][0];i++)
			if (data[t][k]>data[t][i]) k=i;
		temp=data[t][1];data[t][1]=data[t][k];data[t][k]=temp;
		for(i=1;i<=data[t][0];i++)
			printf("%d ",data[t][i]);
		printf("\n");
	}
	return 0;
}	 
