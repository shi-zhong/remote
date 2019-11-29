#include<stdio.h>
void input(char *p){
	do{
		scanf("%c",p);
	}while(!(*p=='C'||*p=='J'||*p=='B'));
}
int change(char put){
	switch (put-'A'){
		case 2:return 0;break;
		case 9:return 1;break;
		case 1:return 2;break;
	}
}
void deal(int num1,int num2,int *p,int *q){
	switch(num1-num2){
		case 1 :*p=1;*q=num2;break;
		case -1:*p=0;*q=num1;break;
		case 2 :*p=0;*q=num1;break;
		case -2:*p=1;*q=num2;break;
		case 0 :*p=2;break;
	}
}
char max(int x,int y,int z){
	int k=x;
	k=(k>y)?k:y;
	k=(k>z)?k:z;
	if (k==x){
		return 'C';
	}else if(k==y){
		return 'J';
	}else{
		return 'B';
	}
}
int main(void){
	int N;
	int use1[3]={0},use2[3]={0};
	char put1,put2;
	int win1=0,win2=0;
	int flag,num;
	scanf("%d",&N);
	for(int i=0;i<=N-1;i++){
		input(&put1);input(&put2);
		deal(change(put1),change(put2),&flag,&num);
		switch(flag){
			case 0:win1++;use1[num]++;continue;
			case 1:win2++;use2[num]++;continue;
			case 2:continue;
		}
	}
       	printf("%d %d %d\n",win1,N-win1-win2,win2);
	printf("%d %d %d\n",win2,N-win1-win2,win1);
	printf("%c %c",max(use1[0],use1[1],use1[2]),max(use2[0],use2[1],use2[2]));
	return 0;
}                                                                                

