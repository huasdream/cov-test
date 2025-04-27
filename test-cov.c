#include <stdio.h>

void say_hello(){
    printf("Hello, from test-cov!\n");
}
#include<stdio.h>
struct code
{
    char errorAction[100];
    char *t;
    char y[524];
    char powerErrorAction[100];
};

struct funCodeStruct
{
    char all[100];
    char x[277];
   struct code code;
    int index;
};

struct funCodeStruct funCode;

#define GetCodeIndex(code) ((unsigned int)((&code) - (&(funCode.all[0]))))
void func(unsigned int index, unsigned int i)
{
    char a[20];
    unsigned int i,bit;
    unsigned int indexTmp = GetCodeIndex(funCode.code.errorAction[0]) - 3;  // 381U
    unsigned int indexTmp2 = GetCodeIndex(funCode.code.powerErrorAction);
    if((index >= indexTmp && index < (indexTmp2 + 7U)) || (index >= indexTmp2 && index < (indexTmp2 + 5U)))    //工艺故障工作
    {
        i = index -indexTmp2;
        for(bit = 0; bit < 5; bit++)
        {
            a[i*5 + bit];
        }
    }
}
       