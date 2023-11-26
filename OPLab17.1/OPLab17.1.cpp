﻿#include <stdio.h>
#include <Windows.h>

int golosnaLetter(char ch) {
    switch (ch) {
    case 'a':
    case 'у':
    case 'є':
    case 'и':
    case 'і':
    case 'ї':
    case 'о':
    case 'y':
    case 'ю':
    case 'я':
        return 1;
    default:
        return 0;
    }
}

int main() {
    char letter;

    printf("Введіть букву: ");
    scanf_s("%c", &letter);

    if (golosnaLetter(letter)) {
        printf("Буква голосна.\n");
    }
    else {
        printf("Буква не голосна.\n");
    }

    return 0;
}
