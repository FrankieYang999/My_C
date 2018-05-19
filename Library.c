#include <stdio.h>
#include <string.h>

struct Book
{
	char title[50];
	char author[50];
	long id;
	double price;
	/* data */
};

char *write(char *str, int n);

int main(){


	int size;
	printf("please enter the library size: \n");
	scanf("%d", &size);
	getchar();
	printf("the size of library is %d\n", size);

	struct Book library[size];

	for(int i = 0; i < size; i++){
		printf("please enter the name of book[%d]:\n", i);
		write(library[i].title, 51);
		printf("please enter the author of book[%d]:\n", i);
		write(library[i].author, 51);
		printf("please enter the id of book[%d]:\n", i);
		scanf("%ld", &library[i].id);
		getchar();
		printf("please enter the price of book[%d]:\n", i);
		scanf("%lf", &library[i].price);
		getchar();
	}

	for(int i = 0; i < size; i++){
		printf("The id: %ld of book[%d] in the library is %s, written by %s, with price %f !\n", library[i].id, i, library[i].title, library[i].author, library[i].price);
	}
	return 0;


}

char *write(char *str, int n){
	char *get_str;
	char *find;
	get_str = fgets(str, n, stdin);
	if(get_str){
		find = strchr(str, '\n');
		if(find){
			*find = '\0';
		}
		else{
			while(getchar() != '\n')
			continue;
		}
	}
	return get_str;
}
