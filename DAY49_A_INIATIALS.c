// Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';

    if (name[0] != ' ')
        printf("%c", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", name[i]);
    }

    return 0;
}
