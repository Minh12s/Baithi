#include<stdio.h>
int isEvenNumber(int num) {
	if(num % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int n,m,num;
	printf("please, enter a number: ", n);
	scanf("%d", &n);
	printf("please, enter a number: ", m);
	scanf("%d", &m);
	printf("The even number btween %d anh %d :",n,m);
	for (num = n; num<m; num ++) {
		if(num % 2 == 1)
		continue;
		printf("\n%d", num);
	}
	return 0;
}
