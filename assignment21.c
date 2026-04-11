#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    printf("Enter name of source file to copy: ");
    scanf("%s", sourcePath);

    printf("Enter name of destination file: ");
    scanf("%s", destPath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", sourcePath);
        exit(1);
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file %s\n", destPath);
        fclose(sourceFile);
        exit(1);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("\nFile copied successfully from %s to %s\n", sourcePath, destPath);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
