#include <stdio.h>
#include <ctype.h>

int add (int one, const char bad[], const char should) {
	for (int i = 0; i<one; i++) {
		if (bad[i]==toupper(should)) {
			return 0;
		}
	}
	return 1;
}

int main () {
	char should[81];
	char real[81];
	char bad[81];
	int this = 0, that =0, one = 0;
	scanf("%s",should);
	scanf("%s",real);
	while(should[this]){
		if (should[this]!=real[that]) {
			if (add(one,bad,should[this])) {
				bad[one]=toupper(should[this]);
				one++;
			}
		} else {
			that++;
		}
		this++;
	}
	for (int j = 0;j<one;j++) {
		printf("%c",bad[j]);
	}
}
