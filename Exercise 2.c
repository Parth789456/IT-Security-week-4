#include <stdio.h>
#include <string.h>

int main() {

    char secret[100] = "exercise Succesd";
    char buf[150];

    printf("Enter your name:\n");
    gets(buf);
	strcpy(secret,buf);
    printf(secret);
    printf("\n");
}
