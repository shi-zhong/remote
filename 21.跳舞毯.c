#include<stdio.h>
#include<math.h>
/*
 * 由A开始,每个A延伸出一个B和C，而每个B和C又分别延伸出A和另一个与自己互异的字母
 * 所以下一层的A的数量等于上一层(B+C)，而B和C的数量和等于上层的(B+C+2A)
 * 不考虑最后一层 第一层(B+C)=2;第二层A=2,B+C=2^2-A=2;第三层A=2,(B+C)=2^3-2=6……
 * 所以这构成了一个递归结构,构架函数"getA"获取上层A的数量,并计算出这层的B+C,
 * 逐级递归，最终得到相关数据，
 * 跳t下,最后一下一定是A,倒数第二下不能是A，所以倒数第三次的结果引申出的分支
 * 决定了最后的结果。
 * 
 *
 *子函数引用<math.h>文件时需要外加链接,否则函数被视为未定义
 ×gcc document.c -o a.out -lm
 *赋值符"="和运算符等于"=="千万不要搞错啊!!
 * */
long long getA(int n){
	long long numA;
	if(n==0){
		numA=1;	
	}else{
		numA=(long long)pow(2,n-1)-getA(n-1);
	}
	return numA;
}
int getResult(long long A,int n){
	int result;
	result=(int)((A+(long long)pow(2,n))%10000);
	return result;
}
int main(void){
	int data[10000]={0};
	int t=0;
	/*input*/
	do{
		scanf("%d",&data[t]);
		t++;
	}while(data[t-1]!=0);
	/*process*/
	for(int i=0;i<=t-2;i++){
		if(data[i]==1){
		printf("Are you kidding me?\n");
		}else{
		printf("%d\n",getResult(getA(data[i]-2),data[i]-2));
		}
	}
	return 0;
}
