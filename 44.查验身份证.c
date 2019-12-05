#include<stdio.h>
int change(char c){
	if(c=='X'){
		return 10;
	}
	return c-'0';
}
int main(void){
	int n,sum=0,flagflag=0;
	int check[11]={1,0,10,9,8,7,6,5,4,3,2};
	int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char data[100][18];
	int flag[100]={0};
	char ch;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++){
		int save=0;
		sum=0;
		ch=getchar();
		do{
			ch=getchar();
			data[i][save]=ch;
			if (save<=16&&ch=='X'){
				flag[i]=1;
			}
			if (save<=16){
				sum+=(ch-'0')*weight[save];
			}
			save++;
		}while(save<=17);
		if (check[sum%11]!=change(data[i][17])){
			flag[i]=1;
		}
	}
	for(int i=0;i<=n-1;i++){
		if(flag[i]){
			for(int j=0;j<=17;j++){
				printf("%c",data[i][j]);
			}
			flagflag++;
		}
		printf("\n");
	}
	if(!flagflag){printf("All passed");}
	return 0;
}
