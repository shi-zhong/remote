#include<stdio.h>
int getSum(int p,int q,int x,int y,int *v[]){/*计算(p,q)顶点的sum*/
	int i,j;
	int sum=0;
	for(j=0;j<=y-1;j++){
		for(i=0;i<=x-1;i++){
			sum+=v[i][j];	
		}
	}
}
int main(void){
	int m,n,x,y;
	int p,q;/*左上顶点坐标(p,q)*/
	scanf("%d %d %d %d",&m,&n,&x,&y);
	int data[100][100]={{0}};
	int i,j;
	for(){
		for(){
			scanf("%d".data[][]);		
		}
	}
	int sum=0,max=0;
	for(q=0;q<=n-y;q++){
		for(p=0;p<=m-x;p++){
		        for(j=0;j<=y-1;j++){
              			for(i=0;i<=x-1;i++){
                		        sum+=data[p+i][q+j];
               			}
     			}
			max=(max>sum)?max:sum;
		}
	}
	printf("%d\n",sum);
	return 0;
}
