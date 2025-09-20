#include "grammarchecking.h"
#include <stdio.h> 
#include <string.h>

void ColonChecking(char *line[])  //检查冒号
{
    char lineone[100];
    strcpy(lineone, line[0]);
    if(lineone[0] == '\t')
    {
        printf("Line1: Command found before rule\n");
        return;
    }
    for (int i = 0; lineone[i] != '\0' ; i++)
    {
        if(lineone[i] == ':')
        {
            if (lineone[i+1] != ' ')
            {
                printf("Line1: Missing space between target and reliances\n");
                break;
            }
        }
        else if(lineone[i] == ' ')
        {
            if(lineone[i-1] == ':')
            {
                break;
            }
            else
            {
                printf("Line1: Missing colon in target definition\n");
                break;
            }
        }
    }
}

void TabChecking(char *line[])  //检查命令前的tab
{
    char linetwo[100];
    for(int i = 1; line[i] != '\0'; i++)
    {
        char linetwo[100];
        strcpy(linetwo, line[i]);
        if(linetwo[0] != '\t')
        {
            printf("Line%d: Missing colon in target definition\n", i+1 );
            break;
        }
    }
}

void StepOneTaskThreeMain(char *line[]) //封装
{
    ColonChecking(line);
    TabChecking(line);
}