#include <string.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char* argv[]) {

    char* fileName = argv[1];

    FILE *pFile = fopen(fileName, "r");
    if (pFile == NULL) {
        printf("File %s not found: %s\n", fileName, strerror(errno));
        return 1;
    }
    
    char buffer[1024];
    while(fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }
    printf("\n");
    
    fclose(pFile);
    return 0;
}
