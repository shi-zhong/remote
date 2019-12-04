#include<stdio.h>
int which(char t){
	if (t>='A'&&t<='Z'){
		return 1;
	}else if(t>='a'&&t<='z'){
		return 2;
	}else if(t>='0'&&t<='9'){
		return 3;
	}else{
		switch(t){
			case '~':;
			case '!':;
			case '@':;
			case '#':;
			case '$':;
			case '%':;
			case '^':return 4;
		}
	}
	return 0;
}
void put(int n){
	if(n){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
int main(void){
	int M;
	char password;
	int num=0;
	int flag[5]={0};
	int out[100]={0};
	scanf("%d",&M);
	password=' ';
	for(int i=0;i<=M;i++){
		do{
			scanf("%c",&password);
			flag[which(password)]=1;
			num++;
		}while(password!='\n');
		if (num-1>=8&&num-1<=16){
			if(flag[1]+flag[2]+flag[3]+flag[4]>=3){
				out[i]=1;
			}
		}
		for(int j=1;j<=4;j++){
			flag[j]=0;
		}
		password=' ';
		num=0;
	}
	for(int i=1;i<=M;i++){
		put(out[i]);	
	}
	return 0;
}
