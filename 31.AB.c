#include<stdio.h>
void output(int i){
	if(!i){
		printf("NO\n");
	}else{
		printf("YES\n");
	}
}
int ifflag(long a,long b){
        if(a%b){
                return 0;
        }else{
                return 1;
        }
}

int main(){
	int n ;
	long a,b;
	int flag[1000];
	scanf("%d",&n);
	for (int i=0;i<=n-1;i++){
		scanf("%ld",&a);
		scanf("%ld",&b);
		flag[i]=ifflag(a,b);
	}
	for (int i=0;i<=n-1;i++){
		output(flag[i]);
	}
	return 0;
}
