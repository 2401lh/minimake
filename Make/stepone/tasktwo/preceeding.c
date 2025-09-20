#include "preceeding.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void filter(char *line[])
{
    for(int i=0;line[i] != '\0';i++)
    {
        if(line[i] != ' ' && line[i] != '\t' && line[i] != '\n')
        {
            return;
        }
        else if(line[i+1] == '\0')
        {
            line[i] = 'emptyline';
            return;
        }
        else
        {
            line[i] = 'emptyline';
        }
    }
}

void RemoveEndSpace(char *str)
{
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) 
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') 
        {
            str[i] = '\0';
        } 
        else 
        {
            break;
        }
    }
}

void RemoveSpace(char *line[])
{
    for (int i = 0; line[i] != '/0'; i++) 
    {
        RemoveEndSpace(line[i]);
    }
}

void RemoveDefine(char *line[])
{
    for (int i = 0; line[i] != '\0'; i++) 
    {
        char *pointer = strchr(line[i], '#');
        if (pointer != NULL) 
        {
            *pointer = '\0';
            RemoveEndSpace(line[i]); 
        }
    }
}

void PrintMiddumConsequence(char *line[])
{
    for(int i=0;line[i] != '\0';i++)
    {
        if(line[i] != 'emptyline')
        {
            printf("%s\n",line[i]);
        }
    }
}

void StepOneTaskTwoMain(char *line[])
{
    filter(line);
    RemoveSpace(line);
    RemoveDefine(line);
    PrintMiddumConsequence(line);
}