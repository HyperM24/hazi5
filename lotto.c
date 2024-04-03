#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, also, felso;

    srand(time(0));

    printf("Hany db random szamot kersz? ");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar: ");
    scanf("%d", &felso);

    printf("A generalt szamok: ");
    for (int i = 0; i < n; ++i) {
        int random = (rand() % (felso - also + 1)) + also;
        printf("%d ", random);
    }

    return 0;
}
