#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (score >= 85)
    {
        printf("�ɼ���%d,��Ӧ�ĵȼ���A", score);
    }
    else if (score >= 70 && score <= 84)
    {
        printf("�ɼ���%d,��Ӧ�ĵȼ���B", score);
    }
    else if (score >= 60 && score <= 69)
    {
        printf("�ɼ���%d,��Ӧ�ĵȼ���C", score);
    }
    else
        
        
    {
        printf("�ɼ���%d,��Ӧ�ĵȼ���D", score); //�����ͬѧ�ĳɼ�ΪD
    }
    return 0;
}