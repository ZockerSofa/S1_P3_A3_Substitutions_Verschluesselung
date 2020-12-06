#include "header.h"

char substitution(char zeichen, int wahl) {
    char klartext[] = {"abcdefghijklmnopqrstuvwxyz.,_"};
    char geheimtext[] = {"bj,otdglhrkicxam.pzyev_qnsuwf"};
    int i;
    zeichen = (char)tolower(zeichen);

    if (wahl) {
        for (i = 0; klartext[i] != '\0'; i++) {
            if (zeichen == klartext[i])
                return geheimtext[i];
        }
    }
    else
        for (i = 0; geheimtext[i] != '\0'; i++) {
            if (zeichen == geheimtext[i])
                return klartext[i];
        }
    return zeichen;
}

int main() {
    char text[MAX];
    int i;
    int wahl;

    printf("Geben sie den Text ein, der verschluesselt werden soll: \n");
    fgets(text, MAX, stdin);
    printf("Zum verschluesseln geben sie '1' ein, zum entschluesseln '0': \n");
    scanf("%d", &wahl);

    puts("Der verschluesselte Text ist: ");
    for (i = 0; text[i] != '\0'; i++) {
        printf("%c", substitution(text[i], wahl));
    }
    return EXIT_SUCCESS;
}
