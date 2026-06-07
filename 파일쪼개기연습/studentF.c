#include <stdio.h>
#include "student.h"

void addStudent()
{
     printf("이름 : ");
                scanf("%s", students[count].name);
                
                printf("점수 : ");
                scanf("%d", &students[count].score);
                
                count++;
                
}

void studentChart()
{
                printf("\n===== 학생 목록 =====\n");
                
                for(int i = 0; i < count; i++)
                {
                    printf("%d. %s (%d점)\n", i + 1, students[i].name, students[i].score);
                }
}

void scoreAverage()
{
      int sum = 0;
                
                for(int i = 0; i < count; i++)
                {
                    sum += students[i].score;
                }
                
                if(count == 0)  printf("학생이 없습니다.\n");
                else    printf("평균 : %.2f\n", (float)sum / count);
                
}

