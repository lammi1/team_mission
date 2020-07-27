#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    int answer[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int correct = 0, score = 0;
    string grade;
    int student_answer[10];

    for(int i = 0; i < 10; i++)
    {
        student_answer[i] = atoi(argv[i+1]);
    }

    if(argc != 11)
    {
        printf("문제는 10 문제입니다. 현재 %i개의 답안을 제출했습니다. 10 개의 답안을 제출하시오.\n", argc);
        return 1;
    }
    for(int i = 0; i < 10; i++)
    {
        if (student_answer[i] >= 1 && student_answer[i] <= 5)
        {
            continue;
        }
        else
        {
            printf("답의 범위는 1 ~ 5 입니다. 범위 외의 답안이 있습니다.\n");
            return 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if(answer[i] == student_answer[i])
        {
            correct++;
        }
    }
    score = correct * 10;

    if (score >= 95 && score <= 100)
    {
        grade = "A+";
    }
    else if (score >= 90)
    {
        grade = "A";
    }
    else if (score >= 85)
    {
        grade = "B+";
    }
    else if (score >= 80)
    {
        grade = "B";
    }
    else if (score >= 75)
    {
        grade = "C+";
    }
    else if (score >= 70)
    {
        grade = "C";
    }
    else if (score >= 65)
    {
        grade = "D+";
    }
    else if (score >= 60)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }

    printf("정답 수: %i\n점수: %i\n학점: %s\n", correct, score, grade);

}
