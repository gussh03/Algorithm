#include<stdio.h>

int main() {

	int NUM = 0, i = 0, j = 0;

	scanf("%d", NUM);

	for (i = 0; i < NUM; i++) 
	{

		for (j = 0; j <= NUM; j++)
		{
			printf('*');
		}

		printf("\n");
	}

	return 0;
}