#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct{
	int nation;
	int number;
	int score;
}Student;


int main() {
	
	int N,temp;
	int first=0, second=0, third=0;
	Student child[100];
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &child[i].nation, &child[i].number, &child[i].score);
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (child[j].score < child[j + 1].score) {
				temp = child[j].nation;
				child[j].nation = child[j + 1].nation;
				child[j + 1].nation = temp;

				temp = child[j].number;
				child[j].number = child[j + 1].number;
				child[j + 1].number = temp;

				temp = child[j].score;
				child[j].score = child[j + 1].score;
				child[j + 1].score = temp;
			}
		}
	}
	int num[100]={0,};
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		if (num[child[i].nation] < 2) {
			printf("%d %d\n", child[i].nation, child[i].number);
			cnt++;
			num[child[i].nation]++;
		}
		if (cnt == 3)
			break;


	}


	return 0;
}