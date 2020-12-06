#include "header.h"



int main() {
    char text[MAX];
    int i;
    int wahl;

    printf("Geben sie den Text ein: \n");
    fgets(text, MAX, stdin);
    printf("Zum verschluesseln geben sie '1' ein, zum entschluesseln '0': \n");
    scanf("%d", &wahl);

    puts("Der verschluesselte Text ist: ");
    for (i = 0; text[i] != '\0'; i++) {
        printf("%c", substitution(text[i], wahl));
    }
    return EXIT_SUCCESS;
}
