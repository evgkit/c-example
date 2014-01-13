#include <stdio.h>
#define MAXLINE 1000 //max string length in stream

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//output the longest string in stream
int main(void) {
    int len = 0; // current string length
    int max = 0; // current maximum string
    char line[MAXLINE]; // current input string
    char longest[MAXLINE]; // longest string in input

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) { //was no-empty string
        printf("%s", longest);
    }
    return 0;
}

// get line in s, return it size
int getline(char s[], int lim) {
    int c = 0;
    int i;
    for (i = 0; i<lim-1 && (c=getchar())!= EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
