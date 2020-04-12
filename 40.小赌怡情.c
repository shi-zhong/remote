#include <stdio.h>

typedef struct {
	int total;
	int token;
} outs;

int console (int total, int token) {
	if (token>0) {
		printf("Win %d!  Total = %d.\n",token,total);
	} else if (token<0) {
		printf("Lost %d. Total = %d.\n",-token,total);
	} else {
		printf("Not enough tokens. Total = %d.\n",total);
	}
	if (!total) {
		printf("Game Over.\n");
		return 1;
	}
	return 0;
}

int main () {
	int init, turns, which, give, numa, numb;
	outs outputs[100]={0,0};
	scanf("%d %d",&init, &turns);
	for (int i = 0; i<turns; i++) {
		scanf("%d %d %d %d",&numa,&which,&give,&numb);
		if (give>init) {
			outputs[i].total = init;
			outputs[i].token = 0;
			continue;
		}
		if (numa<numb==which) {
			init+=give;
			outputs[i].total = init;
			outputs[i].token = give;
		} else {
			init-=give;
			outputs[i].total = init;
			outputs[i].token = -give;
		}
	}
	for (int j = 0; j<turns; j++) {
		if (console(outputs[j].total,outputs[j].token)) {
			break;
		}
	}
	return 0;
}
