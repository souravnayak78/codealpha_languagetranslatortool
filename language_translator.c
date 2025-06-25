#include <stdio.h>
#include <string.h>

// Function to translate English phrases to Hindi
void translate(const char input[]) {
    if (strcmp(input, "hello") == 0) {
        printf("Translated: namaste\n");
    } else if (strcmp(input, "thank you") == 0) {
        printf("Translated: dhanyavaad\n");
    } else if (strcmp(input, "goodbye") == 0) {
        printf("Translated: alvida\n");
    } else if (strcmp(input, "how are you") == 0) {
        printf("Translated: aap kaise ho\n");
    } else {
        printf("Translation not available for the entered phrase.\n");
    }
}

int main() {
    char input[100];

    printf("=======================================\n");
    printf("     Language Translation Tool (EN->HI)\n");
    printf("=======================================\n");
    printf("Supported phrases: hello, thank you, goodbye, how are you\n");
    printf("Enter a phrase in English: ");

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // remove trailing newline

    translate(input);

    return 0;
}
