#include <stdio.h>
#include <ctype.h>
#include <string.h>

char dictionary [1000][200];    //initialized the global variable
int count[1000];
char temp[200];
int superdupergetchar (char [1000][200]);       //prototypes for each functions
void sort(char [1000][200], int, int[1000]);
void printphrase(char[1000][200], int, int[1000]);
void compare(char [1000][200], int, char [200], int[1000]);


