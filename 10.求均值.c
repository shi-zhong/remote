#include<stdio.h>
#define MAXG 10
int main(void){
	int info[MAXG][2];/*存入m.n*/
	int score[MAXG][50][5];/*存入score[组数][学生数][课程数]*/
	int sum=0,top[50]={0},group=0;/*优等生*//*标记组数*/
	double aver1[MAXG][5],aver2[MAXG][50];/*各课均分*//*各生均分*/
	int i,j,m,n,q;/*i,j 用于数据循环处理使用,q标记组数*/
	int flag[MAXG][50]={{0}};
	puts("输入0 0结束");
	do{/*输入部分ok*/             /*n*/           /*m*/
		scanf("%d %d",&info[group][0],&info[group][1]);
		for(i=0;i<=info[group][0]-1;i++)
			for(j=0;j<=info[group][1]-1;j++){
				scanf("%d",&score[group][i][j]);
			}
		group++;
	}while((info[group-1][0])&&(group<=MAXG));

	group--;/*使group等于实际组数*/

	/*process*/
	for(q=0;q<=group-1;q++){/*组数循环*/
		m=info[q][1];n=info[q][0];
		for(i=0;i<=m-1;i++)/*各科均分*/{
			for(j=0;j<=n-1;j++)
				sum+=score[q][j][i];
			aver1[q][i]=(double)sum/(double)n;
			sum=0;
		}
		for(i=0;i<=n-1;i++){/*人均分*/
			for(j=0;j<=m-1;j++){/*各科和*/
				sum+=score[q][i][j];
				if ((double)score[q][i][j]<aver1[q][j]) flag[q][i]=1;	
			}
			aver2[q][i]=(double)sum/(double)m;
			if (!flag[q][i]) top[q]++;
			sum=0;
		}	
	}

	/*output*/
	for(q=0;q<=group-1;q++){
		for(i=0;i<=info[q][0]-1;i++) printf("%.2f ",aver2[q][i]);
		printf("\n");
		for(i=0;i<=info[q][1]-1;i++) printf("%.2f ",aver1[q][i]);
		printf("\n%d\n\n",top[q]);
	}

}
