#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("What's your name? ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    name[strcspn(name, "\n")] = '\0';

    printf("Namaste, %s!\n", name);
    printf("नमस्ते, %s!\n", name);  // Devanagari using Unicode

    return 0;
}
