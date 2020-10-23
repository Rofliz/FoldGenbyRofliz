#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<dir.h>

#define SIZE 70      //Maximum Length of name of folder

void main() {
    int nu = 1;
    int check;


    while (nu < 10) {
        char *dirname;
        dirname = malloc(SIZE * sizeof(char));
    printf("Enter a directory path and name to be created (C:/name):");
    gets(dirname);
    check = mkdir(dirname);

    if (!check)
        printf("Directory created\n");

    else {
        printf("Unable to create directory\n");
        exit(1);
    }
    nu++;
}
    getch();
    system("dir/p");
    getch();
}