#include <stdio.h>
#include <iostream>
using namespace std;
void tree(int level) {
    int L1, L2, L3 = 0;
    L1 = level;
    L2 = L1 + level;
    L3 = L2 + L1;
    printf("%d %d %d\n", L1, L2, L3);
    /*for (int m = 1; m <= 3; m++) {
        for (int i = 0; i < level * m; i++) {
            for (int j = i; j < L3 - 1; j++) {
                printf("^");
            }
            for (int k = 0; k <= i; k++) {
                printf("* ");
            }
            printf("\n");
        }
    }*/
    return;
}
int main() {
    while (1) {
        int func1, level;
        scanf("%d %d", &func1, &level);
        if (func1 > 2 || func1 < 1 || level <= 0) {
            break;
        }
        if (func1 == 1) {
            int side1;
            side1 = 2 * level - 1;
            for (int x = 0; x < side1; x++) {
                for (int y = 0; y < side1; y++) {
                    printf("(%d,%d)", x, y);
                }
            }
        }
        if (func1 == 2) {
            tree(level);
        }
        return 0;
    }
