#include <stdio.h>
int Even_odd(int num) {

	if ((num % 2) == 0 || num == 0) {
		return 0;
	}
	else if (num % 2 != 0) {
		return 1;
	}
	else {
		return 2;
	}
}
int Positive_Negative(int x) {
	if (x > 0) {
		return 3;
	}
	else if(x<0){
		return 4;
	}
	else if (x==0) {
		return 5;
	}


}
int main() {
	int x[2],i;
	
	for (i = 0; i < 2; i++) {
		scanf_s("%d", &x[i]);
		int even_odd = Even_odd(x[i]);
		int PN = Positive_Negative(x[i]);

	if (even_odd == 0) {
		if (PN==3) {
			printf(" %d is Positive even", x[i]);

		}
		else if (PN == 4) {
			printf(" %d is Negative even", x[i]);
		}
		else if (PN == 5) {
			printf(" %d is Zero", x[i]);
		}

	}
	else if (even_odd == 1) {
		
		if (PN == 3) {
			printf(" %d is Positive odd", x[i]);
		}
		else if (PN == 4) {
			printf(" %d is Negative odd", x[i]);
		}
		

	}
	else {

		printf("Error");
	}
	}
	return 0;
}
