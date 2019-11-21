#include<stdio.h>
int change(char c){
	int result;
	switch (c) {
		case 'Z' :result=0;break;
		case 'O' :result=1;break;
		case 'J' :result=2;break;
		case '\n':result=10;break;	
	}
	return result;
}
void putout(int Z,int O,int J){
	while(Z!=0||O!=0||J!=0){
		if(Z){printf("%c",'Z');Z--;}
		if(O){printf("%c",'O');O--;}
		if(J){printf("%c",'J');J--;}
	}
}
int main(){
	char c;
	int data[100][3]={{0,0,0}};
	int n;
	int i=0;
	do{
		c=getchar();
		if(c=='E'){break;}
		if(change(c)<=2){ 
			data[i][change(c)]++;
		}else{
			i++;
		}
	}while(1);
	n=i;
	for(int j=0;j<=n-1;j++){
		putout(data[j][0],data[j][1],data[j][2]);
		printf("\n");
	}
	return 0;
}
