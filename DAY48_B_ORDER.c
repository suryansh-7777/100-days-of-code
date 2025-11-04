// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *word_start = NULL, *temp = str;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = '\0';

    while (*temp) {
        if (word_start == NULL && *temp != ' ')
            word_start = temp;
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }

    printf("Reversed sentence: %s\n", str);
    return 0;
}
