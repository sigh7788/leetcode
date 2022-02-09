#include <stdio.h>
#include <string.h>

int romanToInt(char * s){
    int len = strlen(s);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'I') {
            if (i+1 < len  && (s[i+1] == 'V' || s[i+1] == 'X')) {
                if (s[i+1] == 'V') {
                    sum += 4;
                }else {
                    sum += 9;
                }
                i++;
            }else {
                sum += 1;
            }
        } else if (s[i] == 'X') {
            if (i+1 < len  && (s[i+1] == 'L' || s[i+1] == 'C')) {
                if (s[i+1] == 'L') {
                    sum += 40;
                }else {
                    sum += 90;
                }
                i++;
            }else {
                sum += 10;
            }
        } else if (s[i] == 'C') {
            if (i+1 < len  && (s[i+1] == 'D' || s[i+1] == 'M')) {
                if (s[i+1] == 'D') {
                    sum += 400;
                }else {
                    sum += 900;
                }
                i++;
            }else {
                sum += 100;
            }
        } 
        else if (s[i] == 'V') {sum += 5;}
        else if (s[i] == 'L') {sum += 50;}
        else if (s[i] == 'D') {sum += 500;}
        else if (s[i] == 'M') {sum += 1000;}
        else {}
    }
    return sum;
}

int main(void) {
    char *s = "DCXXI";
    int rc = romanToInt(s);
    printf("%d\n", rc);

    return 0;
}