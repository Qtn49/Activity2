#include <stdio.h>

int main (void) 
{
	char nom[50];
	printf("Comment tu t'appelles petit?");
	scanf("%s", &nom);
	printf("Salut %s !\n", nom);
}
