//
// Created by janho on 06.12.2020.
//
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

