#include <stdio.h>

int main() {
    int n = 0;
    char name[100];
     scanf("%s",name);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' &&
            name[i] != 'o' && name[i] != 'u' &&
            name[i] != 'A' && name[i] != 'E' && name[i] != 'I' &&
            name[i] != 'O' && name[i] != 'U' && name[i] != '\n') {
            n++;
        }
    }

    printf("%d\n", n);
    return 0;
}
