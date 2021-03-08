#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char str[], int n){
    char *new = malloc(50);
    int j = 0;
    for (int i = n; i >= 0; i--)
    {
        new[j] = str[i];
        j += 1;
    }
    return new;
}


int main(){

    char str[50], ch;
    int i;
    printf("Pasa una string: \n");
    i = 0;
    ch = getchar();

    while (ch != EOF)
    {
        str[i] = ch;
        i++;
        ch = getchar();
        if (ch == '\n')
        {
            char *reversed;
            reversed = reverse(str, i);
            printf("String al reves %s\n", reversed);
            ch = getchar();
            i = 0;
            memset(str, 1,50);
        }
    }
    return 0;
}


