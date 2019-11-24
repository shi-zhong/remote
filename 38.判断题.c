#include<stdio.h>
int eq(int f,int s){
	return (f==s)?1:0;
}
int main(){
	int student=0,questions=0;
	int weight[100],key[100];
	int answer[100][100];
	int result[100]={0};
	scanf("%d %d",&student,&questions);
	for (int i=0;i<=questions-1;i++){
		scanf("%d",&weight[i]);
	}
	for (int i=0;i<=questions-1;i++){
		scanf("%d",&key[i]);
	}
	for (int i=0;i<=student-1;i++){
		for (int j=0;j<=questions-1;j++){
			scanf("%d",&answer[i][j]);
		}
	}
	/*----------------------------------------*/
	for (int i=0;i<=student-1;i++){
		for (int j=0;j<=questions-1;j++){
			result[i]+=eq(key[j],answer[i][j])*weight[j];
		}
		printf("%d\n",result[i]);
	}
	return 0;
}
