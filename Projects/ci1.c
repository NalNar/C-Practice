#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    // 1. Check if the user provided enough arguments
    if (argc < 3) {
        printf("Usage: %s <cleartextfile> <secrettextfile>\n", argv[0]);
        return 1;
    }

    const char *filename1 = argv[1];
    const char *filename2 = argv[2];

    // 2. Open files
    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");

    // 3. CRITICAL: Check if files actually opened
    // This prevents the Segmentation Fault if a file is missing
    if (file1 == NULL || file2 == NULL) {
        fprintf(stderr, "Error: Could not open one or both files.\n");
        if (file1) fclose(file1);
        if (file2) fclose(file2);
        return 1;
    }

    int c1, c2, cx;

    /* 4. FIX PARENTHESES: 
       Original: (c1 = fgetc(file1) != EOF) -> sets c1 to 0 or 1
       Fixed:    ((c1 = fgetc(file1)) != EOF) -> sets c1 to the actual character
    */
    while (((c1 = fgetc(file1)) != EOF) && ((c2 = fgetc(file2)) != EOF)) {
        cx = c2 ^ c1;
        putc(cx, stdout);
    }

    // 5. Clean up
    fclose(file1);
    fclose(file2);

    return 0;
}