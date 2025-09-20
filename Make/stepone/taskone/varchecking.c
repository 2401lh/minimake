#include "grammarchecking.h"
#include <stdio.h>
#include <string.h>

int MatchWithPool(const char *option, char *validvar[]) 
{
    for (int i = 0; validvar[i] != NULL; i++) 
    {
        if (strcmp(option, validvar[i]) == 0) 
        {
            return 1;
        }
    }
    return 0;
}

void IfinValidVar(char *argv[],char *validvar[])
{
    for (int i = 1; argv[i] != NULL; i++) 
    {     
        FILE *fp = fopen(argv[i], "r");
        if (fp) 
        {
            fclose(fp);
        }
        if (argv[i-1] == "-o"||argv[i-1] == "echo")
        {
            continue;
        }
        if (MatchWithPool(argv[i], validvar)) 
        {
            continue;
        }
        else
        {
            printf("please input valid var\n");
        }
    }
}
