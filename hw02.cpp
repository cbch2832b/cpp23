#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int buffsize = 10;
    char* buffer;
    buffer = (char*)malloc(buffsize);
    printf("What is your name?\n");
    scanf("%s", buffer);

    buffer--;
    printf("%s\n", buffer);

    char newName[] = "anonym";
    strcpy(buffer, newName);

    for (int i = 0; i < 10; i++) {
        buffer[i] = 'a';
    }

    printf("%s\n", buffer);

    int* ptr = NULL;
    int& ref = *ptr;

    free(buffer-4);
    free(buffer);
    free(buffer);

    printf("%s\n", buffer);

    buffer = (char*)malloc(buffsize);
    
    for (unsigned int i = 9; i >= 0; i--) { return 0; }

    return 0;
}
