#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (score >= 85)
    {
        printf("成绩是%d,相应的等级是A", score);
    }
    else if (score >= 70 && score <= 84)
    {
        printf("成绩是%d,相应的等级是B", score);
    }
    else if (score >= 60 && score <= 69)
    {
        printf("成绩是%d,相应的等级是C", score);
    }
    else
        
        
    {
        printf("成绩是%d,相应的等级是D", score); //输出该同学的成绩为D
    }
    return 0;
}