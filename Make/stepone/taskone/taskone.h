#ifndef TASKONE_H
#define TASKONE_H
void LineOne(char lineone[], char* line[]);
void LineTwo(char linetwo[], char* line[]);
void LineThree(char linethree[], char* line[]);
void LineFour(char linefour[], char* line[]);
void rebuild(char lineone[], char linetwo[], char linethree[], char linefour[], char dealedinput[]);
void ARG(int argc, char *argv[], char dealedinput[]);
void DoYouNeedHelp(char *argv[]);
void print_help();
#endif