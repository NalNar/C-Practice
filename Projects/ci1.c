#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    // Check if the user provided enough arguments
    if (argc < 3) {
        printf("Usage: %s <cleartextfile> <secrettextfile>\n", argv[0]);
        return 1;
    }

    const char *filename1 = argv[1];
    const char *filename2 = argv[2];

    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");

    // This prevents the Segmentation Fault if a file is missing
    if (file1 == NULL || file2 == NULL) {
        fprintf(stderr, "Error: Could not open one or both files.\n");
        if (file1) fclose(file1);
        if (file2) fclose(file2);
        return 1;
    }

    int c1, c2, cx;

    while (((c1 = fgetc(file1)) != EOF) && ((c2 = fgetc(file2)) != EOF)) {
        cx = c2 ^ c1;
        putc(cx, stdout);
    }

    // Clean up
    fclose(file1);
    fclose(file2);

    return 0;
}