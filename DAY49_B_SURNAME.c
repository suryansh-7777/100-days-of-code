// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter full name: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';
    len = strlen(name);

    printf("%c. ", name[0]);

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            if (strchr(name + i, ' ') == NULL) {
                printf("%s", name + i);
                break;
            } else {
                printf("%c. ", name[i]);
            }
        }
    }

    return 0;
}
