#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int buffsize = 10;
    char* buffer;
    buffer = (char*)malloc(buffsize);
    printf("What is your name?\n");
    scanf("%s", buffer);

    int index = 0;
    index--;
    printf("%s\n", &buffer[index]);

    char newName[] = "anonym";
    for (; index < 10; index++) {
        buffer[index] = newName[index];
    }

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
