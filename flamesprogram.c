//flames project
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stringLength(char *str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

//remove chars from a string
void removeChar(char *str, int index) {
    int len = stringLength(str);
    for (int i = index; i < len - 1; i++)
        str[i] = str[i + 1];
    str[len - 1] = '\0';
}

//FLAMES relationship
char flamesRelationship(char *name1, char *name2) {
    int len1 = stringLength(name1);
    int len2 = stringLength(name2);
    char tempName1[100], tempName2[100];
    strcpy(tempName1, name1);
    strcpy(tempName2, name2);

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (tempName1[i] == tempName2[j]) {
                removeChar(tempName1, i);
                removeChar(tempName2, j);
                len1--;
                len2--;
                i--;
                break;
            }
        }
    }

    int totalLength = len1 + len2;
    char flames[] = "FLAMES";
    int flamesLength = 6;

    while (flamesLength != 1) {
        int removeIndex = totalLength % flamesLength;
        if (removeIndex == 0)
            removeIndex = flamesLength;
        removeChar(flames, removeIndex - 1);
        flamesLength--;
    }

    return flames[0];
}

int main() {
    char name1[100], name2[100];
    printf("Enter name 1: ");
    scanf("%s", name1);
    printf("Enter name 2: ");
    scanf("%s", name2);
    char result = flamesRelationship(name1, name2);
    switch (result) {
        case 'F':
            printf("You are Friends!\n");
            break;
        case 'L':
            printf("You are in Love!\n");
            break;
        case 'A':
            printf("You have Affection for each other!\n");
            break;
        case 'M':
            printf("You are Meant to be together (Marriage)!\n");
            break;
        case 'E':
            printf("You are Enemies!\n");
            break;
        case 'S':
            printf("You are Siblings!\n");
            break;
        default:
            printf("Error in calculation.\n");
    }

    return 0;
}
