#include "stepone/taskone/taskone.h"
#include "stepone/taskone/varchecking.h"
#include "stepone/tasktwo/preceeding.h"
#include "stepone/tasktwo/readfile.h"
#include "stepone/taskthree/grammarchecking.h"
#include <stdio.h>

int main()
{
	char l1[100], l2[100], l3[100],l4[100], dealed[500];
	char *argv[20] = {0};
	char *line[500] = {0};
	int argc = 0;
	const char *validvar[] = {"--help", "gcc", "g++" , "-o" , "echo" , "git" , "apply" , "target" , "object" , NULL};
	LineOne(l1, line);
	LineTwo(l2, line);
	rebuild(l1, l2, l3, l4, dealed);
	ARG(argc, argv, dealed);
	DoYouNeedHelp(argv);
	IfinValidVar(argv, validvar);
	readfile(line);
	StepOneTaskTwoMain(line);
	StepOneThreeMain(line);
	return 0;
}