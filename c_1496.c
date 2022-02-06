#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool isPathCrossing(char * path){
    int x = 0;
    int y = 0;
    struct POS {
        int x;
        int y;
        int val;
    };

    struct POS pos[10000][4] = {0};
    pos[0][0].x = 0;
    pos[0][0].y = 0;
    pos[0][0].val = 1;
    int len = strlen(path);
    for (int i = 0; i < len; i++) {
        if (path[i] == 'N') {
            y++;
        } else if (path[i] == 'S') {
            y--;
        } else if (path[i] == 'W') {
            x--;
        } else if (path[i] == 'E') {
            x++;
        } else {
            // invalid params
        }
        
        // check has been convered
        int key = x*x + y*y;
        for (int j = 0; j < 4; j++) {
            printf("(x %d,y %d ) >> key %d, j %d === x %d, y %d, val %d\n", x, y, key, j, pos[key][j].x, pos[key][j].y, pos[key][j].val);
            if (pos[key][j].val == 1) {
                if (pos[key][j].x == x && pos[key][j].y == y) return true;
            } else {
                pos[key][j].x = x;
                pos[key][j].y = y;
                pos[key][j].val = 1;
                break;
            }
        }
    }

    return false;
}

int main(void) {
    char *path = "WNEEEESWSEESWWWNWWSWWSWW";
    bool rc = isPathCrossing(path);
    printf("%d\n", rc);

    return 0;
}