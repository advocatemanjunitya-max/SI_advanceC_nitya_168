#include <stdio.h>

int main() {

    int M[4][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 1, 0}
    };

    int i, j, celebrity = -1;

    for(i = 0; i < 4; i++) {

        int knowsNobody = 1;
        int knownByEveryone = 1;

        for(j = 0; j < 4; j++) {

            if(i != j) {

                // celebrity should not know anyone
                if(M[i][j] == 1)
                    knowsNobody = 0;

                // everyone should know celebrity
                if(M[j][i] == 0)
                    knownByEveryone = 0;
            }
        }

        if(knowsNobody == 1 && knownByEveryone == 1) {
            celebrity = i;
            break;
        }
    }

    if(celebrity == -1)
        printf("No Celebrity Found");
    else
        printf("Celebrity is Person %d", celebrity);

    return 0;
}