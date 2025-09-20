#include "taskone.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LineOne()  //输入并简单处理第一行命令
{
    char lineone[100];
    fgets(lineone, sizeof(lineone), stdin);
    int lengthlineone = strlen(lineone);
    if (lengthlineone > 0 && lineone[lengthlineone - 1] == '\n') 
    {
        lineone[lengthlineone - 1] = ' ';
    }
}

void LineTwo()  //输入并简单处理第二行命令
{
    char linetwo[100];
    fgets(linetwo, sizeof(linetwo), stdin);
    int lengthlinetwo = strlen(linetwo);
    if (lengthlinetwo > 0 && linetwo[lengthlinetwo - 1] == '\n') 
    {
        linetwo[lengthlinetwo - 1] = ' ';
    }
}

void rebuild(char lineone[], char linetwo[], char dealedinput[])  //将两行命令重组成一行
{
    char integratedline[200];
    strcpy(integratedline, lineone);
    strcat(integratedline, linetwo);
    strcpy(dealedinput, integratedline);
}

void ARG(int argc, char *argv[], char dealedinput[])
{
    char *pointer = dealedinput;
    argc = 0;
    int counter = 0;
    for (int i = 0; dealedinput[i]!='\0' ; i++)
    {
        char temp[20] = {0};
        if (dealedinput[i] == ' ')
        {
            strcpy(argv[argc] , temp);
            argc++;
            pointer++;
            counter = 0;
        }
        else
        {
            temp[counter] = dealedinput[i];
            pointer++;
            counter++;
        }
    }   
}

void DoYouNeedHelp(char *argv[])
{
    for (int i = 0; argv[i] !='\0'; i++)
	{
		if (argv[i] == "--help")
		{
			print_help();
		}		
	}
}

void print_help()   //输出帮助信息
{
    printf("目标行必须包含冒号分隔符（如target:dep）\n");
    printf("命令必须以Tab开头\n");
    printf("示例如下\n");
    printf("target:object1(reliance) object2\n");
    printf("(tab)gcc -o target object1 object2\n");
    printf("  -v, --verbose 输出预处理后的Makefile\n");
}

