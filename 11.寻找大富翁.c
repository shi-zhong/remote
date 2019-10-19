#include<stdio.h>
#define MAXG 10
/*抽出本质:排序算法*/
void rank(int *v,int t,int n,int m){
	int k,temp;/*选择排序哨兵,减少交换次数.交换介质*/ 
	int i,j;/*循环变量*/
	for(i=0;i<=m-1;i++)
                        k=i;
                       for(j=i+1;j<=n-1;j++)        
                                if (*v[t][k]<*v[t][j]) k=j;  
                       temp=*v[t][i],*v[t][i]=*v[t][k];*v[t][k]=temp;
}






int main(void){
	int data[MAXG][2]/*存入n,m*/,wealth[MAXG][100000]/*存入村民财产*/;
	int g=0;/*组数*/
	int t=0,i=0,j=0;/*循环变量*/
	do{
		scanf("%d %d",&data[g][0],&data[g][1]);/*存入m.n*/
		for(i=0;i<=data[g][0]-1;i++) scanf("%d",&wealth[g][i]);/*input*/
		g++;
	}while(((data[g-1][0]+data[g-1][1])>0)&&g<=MAXG);
	g--;
		
	for(t=0;t<=g-1;t++){

		rank(wealth,t,data[t][0],data[t][1]);
	}
}
