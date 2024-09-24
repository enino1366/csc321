//Esteban Nino
//csc-321

#include<stdio.h>
#include<stdlib.h>

int main (void){
	int x;
	double y;
	char c;
	float z;

	printf("Enter an integer: ");
	scanf("%d", &x);

	printf("Enter a float: ");
        scanf("%f", &z);

	printf("Enter an character: ");
        scanf(" %c", &c);	

	printf("Enter a double: ");
        scanf("%lf", &y);

	if (x > 1){
		printf("Integer variable is greater than 1.\n");
	} else {
		printf("Integer variable is not greater than 1.\n");
	}

	if (z < 2.1) {
                 printf("Float variable is less than 2.1.\n");
        } else {
                printf("Float variable is not less than 2.1.\n");
	}

	if (c != 'a'){
                printf("Character variable does not equal the letter 'a'.\n");
        } else {
		printf("Character variable equals the letter 'a'.\n");
	}

	 if (y == 11.5){
                printf("Double variable equals 11.5.\n");
        } else {
	 	printf("Double variable does not equal 11.5.\n");
        }

	return 0;
}
