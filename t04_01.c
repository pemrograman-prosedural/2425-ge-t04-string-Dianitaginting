// 12S24015 - Lucas Pardede
// 12S24044 - Dianita Lorensia Br Ginting

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(int _argv, char **_argc) {
    char input[61]; 
    scanf("%s", input);

    int length = strlen(input);
    if (length < 3 || length > 60 || length % 3 != 0) {
        printf("Input tidak valid.\n");
        return 1;
    }

    for (int i = 0; i < length; i += 3) {
        char ascii_str[4];
        ascii_str[0] = input[i];
        ascii_str[1] = input[i+1];
        ascii_str[2] = input[i+2];
        ascii_str[3] = '\0';

        int ascii_code = atoi(ascii_str); 
        printf("%c", (char)ascii_code); 
    }
    printf("\n");

    return 0;
}