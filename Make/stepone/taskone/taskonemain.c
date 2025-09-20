#include "stepone.h"
#include <stdio.h>、

int main()
{
	char l1[100], l2[100], dealed[200];
	char *argv[20] = {0};
	int argc = 0;
	const char *validvar[] = {"--help", "gcc", "g++" , "-o" , "echo" , "git" , "apply" , "target" , "object" , NULL};
	LineOne(l1);
	LineTwo(l2);
	rebuild(l1, l2, dealed);
	ARG(argc, argv, dealed);
	DoYouNeedHelp(argv);
	return 0;
}