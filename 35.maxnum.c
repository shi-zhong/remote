#include<stdio.h>
int max(int x,int y){
	return (x>y)?x:y;
}
int main(void){
	int n;
	double data[100][101]={{0}};
	double output[100];
	scanf("%d",&n);
	for (int i=0;i<=n-1;i++){
		for (int j=0;j<=data[i][0];j++){
			scanf("%lf",&data[i][j]);
		}
	}
	for (int i=0;i<=n-1;i++){
		output[i]=data[i][1];
		for (int j=2;j<=data[i][0];j++){
			output[i]=max(output[i],data[i][j]);
		}
		printf("%.2f\n",output[i]);
	}
	return 0;
}
