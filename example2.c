#include <stdio.h>
#define l1 100000
#define l2 200000
#define l3 400000
#define l4 600000
#define l5 1000000

int main(){

	printf("Please enter the profit: \n");
	double profit;
	scanf("%lf", &profit);

	double bonus0 = 0, bonus1, bonus2, bonus3, bonus4, bonus5;
	bonus1 = l1 * 0.1;
	bonus2 = bonus1 + (l2 - l1) * 0.075;
	bonus3 = bonus2 + (l3 - l2) * 0.05;
	bonus4 = bonus3 + (l4 - l3) * 0.03;
	bonus5 = bonus4 + (l5 - l4) * 0.015;

	int level;
	double bonus;
	if(profit <= l1) level = 0;
	else if(profit >l1 && profit <= l2) level = 1;
	else if(profit > l2 && profit <= l3) level = 2;
	else if(profit > l3 && profit <= l4) level = 3;
	else if(profit > l4 && profit <= l5) level = 4;
	else level = 5;

	switch(level){
		case 0:
			bonus = profit * 0.1;
			break;
		case 1:
			bonus = bonus1 + (profit - l1) * 0.075;
			break;
		case 2:
			bonus = bonus2 + (profit - l2) * 0.05;
			break;
		case 3:
			bonus = bonus3 + (profit - l3) * 0.03;
			break;
		case 4:
			bonus = bonus4 + (profit - l4) * 0.015;
			break;
		case 5:
			bonus = bonus5 + (profit - l5) * 0.01;
			break;
	}

	printf("Your bonus is %lf\n", bonus);

	return 0;
}
