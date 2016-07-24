#include <stdio.h>
#define MAX_LINE 3
#define MAX_ARRAY_ELLEMENTS 100

void collapse (char input[], char output[]);

int main () {
    char input[MAX_ARRAY_ELLEMENTS],output[MAX_ARRAY_ELLEMENTS];
    if (fgets(input,sizeof input,stdin) != NULL) {
        collapse(input,output);
        printf("%s\n",output);
    }
}

void collapse (char input[], char output[]) {
    int inputNum,outputNum;
    inputNum = outputNum = 0;
    while  (input[inputNum] != '\0') {
        if (inputNum != 0 && inputNum % MAX_LINE == 0) {
            output[outputNum++] = '\n';
        } 
        output[outputNum++] = input[inputNum++];
        output[outputNum] = '\0';
    }
}