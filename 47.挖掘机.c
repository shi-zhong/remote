#include<stdio.h>
int main(void) {
	int mark[100000]={0};
	int fNum,sNum,school=0;
	int N,flag=1;
	scanf("%d",&N);
	while(N>0){
		scanf("%d %d",&fNum,&sNum);
		school=(school>=fNum)?school:fNum;
		mark[fNum]+=sNum;
		N--;
	}
	for(int i=2;i<=school-1;i++){
		flag=(mark[flag]>=mark[i])?flag:i;
	}
	printf("%d %d",flag,mark[flag]);
	return 0;
}
