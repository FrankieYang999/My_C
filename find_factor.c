#include <stdio.h>

int main(){

	int value;
	printf("Please enter a positive integer: \n");
	scanf("%d", &value);

	for(int i = 1; i < value; i++){
		if(value%i == 0){
			printf("%d ", i);
			continue;
		}
	}

	return 0;

}
