#include <stdio.h>

int main (int argc, const char * argv[]) 
{
	if (argc > 1) {
		printf("Salut %s !\n", argv[1]);
	}else {
		printf("Il faut entrer un prénom en paramètre\n");
	}
}
