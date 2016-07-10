#include <stdio.h>
#define MAXLINE 100
#define TABSTOP 4

void detab (char input[], char output[]);

int main () {
    char input[MAXLINE],output[MAXLINE];
    if (fgets(input,sizeof input,stdin) != NULL) {
        detab(input,output);
        printf("%s\n",output);
    }
}
void detab (char input[], char output[]) {
    int inputNum,outputNum;
    inputNum = outputNum = 0;
    while (input[inputNum] != '\0') {
        if (input[inputNum] == '\t') {
            int blankNum = TABSTOP - (inputNum % TABSTOP);
            for (;blankNum > 0;blankNum--) {
                output[outputNum++] = ' ';
            }
        } else {
            output[outputNum++] = input[inputNum];
        }
        inputNum++;
    }
    output[outputNum] = '\0';
}