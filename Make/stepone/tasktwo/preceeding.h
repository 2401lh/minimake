#ifndef PRECEEDING_H
#define PRECEEDING_H
void filter(char *line[]);  //过滤空行
void RemoveEndSpace(char *str);  //去除字符串行尾空格
void RemoveSpace(char *line[]);  //去除行尾空格
void RemoveDefine(char *line[]);  //去除注释
void PrintMiddumConsequence(char *line[]);  //输出中间结果
void StepOneTaskTwoMain(char *line[]);  //封装
#endif // PRECEEDING_H