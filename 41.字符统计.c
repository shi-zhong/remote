#include<stdio.h>
char downer(char z){
	if (z>='A'&&z<='Z'){
		z+=32;
	}
	return z;
}
int main(void){
	char ch;
	int letter[27]={0};
	int k=1;
	do{
		ch=getchar();
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
			letter[downer(ch)-'a'+1]++;
		}
	}while(ch!='\n');
	for(int i=2;i<=26;i++){
		k=(letter[k]<letter[i])?i:k;
	}
	printf("%c %d",k-1+'a',letter[k]);


}
