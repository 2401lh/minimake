#include "readfile.h"
#include <stdio.h>

void readfile(char *line[])
{
    FILE *fp = fopen("./Makefile", "r");
    if (fp == NULL) 
    {
        printf("makefile does not exist\n");
        return;
    }
    while (fgets(line, sizeof(line), fp)) 
    {
        continue;
    }   
    fclose(fp);
}