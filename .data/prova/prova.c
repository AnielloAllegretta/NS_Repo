#include <stdio.h>
#include <string.h>

#define FALSE 0;
#define TRUE 1;

void next_tag(char *);

int main(int argc, char *argv[]) {
	int valid = FALSE;
	char str1[8];
	char str2[8];

	printf("str1 is at: %p\n", str1);
	printf("str2 is at: %p\n", str2);

	next_tag(str1);	
	gets(str2);
	if (strncmp(str1, str2, 8) == 0)
		valid = TRUE;
	printf("buffer1: str1(%s), str2(%s), valid(%d)\n", str1, str2, valid);
}

void next_tag(char str[]){
	strcpy(str,"START");
	printf("str1: %s\n", str);
}
