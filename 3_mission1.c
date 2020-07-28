#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void printScores(char *who, const int target[], int length);
void printGrades(char *who, const char *target[], int length);
char* calculateGrade(int totalScore, const int scores[], const char *grades[], int length);

int main(int argc, string argv[])
{
	int score;

	printf("학점 프로그램\n");
	printf("종료를 원하시면 \"999\" 를 입력\n");
	printf("[학점 테이블]\n");
	printScores("점수", SCORES, NUMBER_OF_GRADES);
	printf("\n");
	printGrades("학점", GRADES, NUMBER_OF_GRADES);
	printf("\n");

	do
	{
		score = get_int("성적을 입력하세요 (0 ~100) : ");
		if (score <= 100 && score >= 0)
		{
			printf("학점은 %s 입니다.\n", calculateGrade(score, SCORES, GRADES, NUMBER_OF_GRADES));
			continue;
		}
		else if (score == 999)
		{
			printf("학점 프로그램을 종료합니다.\n");
		}
		else
		{
			printf("** %i 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
		}


	}while(score != 999);

	return 0;
}


void printScores(char *who, const int target[], int length)
{
	printf("%s : ", who);

	for (int i = 0; i < length; i++)
	{
		printf("%d\t", target[i]);
	}
}

void printGrades(char *who, const char *target[], int length)
{
	printf("%s : ", who);

	for (int i = 0; i < length; i++)
	{
		printf("%s\t", target[i]);
	}
}


char* calculateGrade(int totalScore, const int scores[], const char *grades[], int length)
{
	char *grade;
	grade = NULL;

	for (int i = 0; i < length; i++)
	{
		if (totalScore >= scores[i])
		{
			grade = malloc(sizeof(char) * strlen(grades[i]));
			strcpy(grade, grades[i]);
			break;
		}
	}

	return grade;
}
