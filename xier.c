//没用的希尔加密与解密
#include<stdio.h>
int changeEnToNum(char n){
	if (n=='Z'){
		return 0;
	}else if(n>='A'&&n<='Y'){
		return n-'A'+1;
	}else{
		return 0;
	}
}
void changeNumToEn(int n){
        if (n==0){
                printf("Z ");
        }else{
                printf("%c ",n+'A'-1);
        }
}
//逆元素-固定
int checkA(int a){
	switch (a){
		case 1: return 1; break;
		case 3: return 9; break;
		case 5: return 21;break;
		case 7: return 15;break;
		case 9: return 3; break;
		case 11:return 18;break;
		case 15:return 7; break;
		case 17:return 23;break;
		case 19:return 11;break;
		case 21:return 5; break;
		case 23:return 17;break;
		case 25:return 25;break;
		default:return 0;
	}

}
void push(int let[],int *putNum){
	char ch=' ';
	int k=0;
	scanf("%c",&ch);
	ch=' ';
	do{
		scanf("%c",&ch);
		let[k]=changeEnToNum(ch);
		k++;
	}while(ch!='\n'&&k<20);
	*putNum=k-1;
}
void keypush(int n,int key[]){
	for(int i=0;i<=n*n-1;i++){
		scanf("%d",&key[i]);
	}
}
void multiplication(int N,int K,int data1[],int data2[]){
	int sum=0;
	for(int k=0;k<=K-1;k++){
		for(int m=0;m<=N-1;m++){
			sum=0;
			for(int n=0;n<=N-1;n++){
				sum+=data1[m*N+n]*data2[k*N+n];
			}
			changeNumToEn(sum%26);
		}
	}
}
int main(void){
	int again=0,choose=0;
	int letter[19]={0};//code
	int key[9];
	int K=0;
	int n;//class
	do{
		{
			printf("加密OR解密 0/1\n");
			scanf("%d",&choose);
		}
		{
			printf("请输入ｎ\n");
			scanf("%d",&n);
			if(!choose){
				printf("请输入秘钥矩阵\n");
				keypush(n,key);
			}else{
				printf("请输入秘钥逆矩阵\n");
				keypush(n,key);
			}
			printf("请输入明文/密文\n");
			push(letter,&K);
			if(K%n==0){
				K=K/n;
			}else{
				K=K/n+1;
			}
		}
			multiplication(n,K,key,letter);
		{
			printf("\n是否继续？是(1)/否(0)\n");
			scanf("%d",&again);
		}
	}while(again);
	return 0;
}
