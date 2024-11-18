#include <stdio.h>

int main() {
    char word[50];
    int i;

    printf("Word Repeater\n\n");
    printf("Enter a word to be repeated: ");
    scanf("%s", word);

    for (i = 0; i < 10; i++) {
        printf("%s\n", word);
    }

    return 0;
}