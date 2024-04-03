#include <stdio.h>
#include <string.h>

int main() {
    char szo[100];
    int max = 0;
    int db = 0;

    printf("Adj meg szavakat '*' végjelig!\n");
    while (1) {
        printf("Szo: ");
        fgets(szo, sizeof(szo), stdin);
        szo[strcspn(szo, "\n")] = '\0';

        if (strcmp(szo, "*") == 0)
            break;

        int hossz = strlen(szo);
        if (hossz > max)
            max = hossz;

        db++;
    }

    printf("%d db szot adtal meg. A leghosszabb szo %d karakterbol all.\n", db,max);

    return 0;
}
