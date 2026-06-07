#include <stdio.h>
#include "student.h"

int main(void)
{
    Student students[MAX];
    
    count = 0;
    int menu;
    
    while(1)
    {
        printf("\n===== 학생 관리 =====\n");
        printf("1. 학생 추가\n");
        printf("2. 학생 목록 출력\n");
        printf("3. 평균 점수 출력\n");
        printf("0. 종료\n");
        printf("선택 : ");
        
        scanf("%d", &menu);
        
        switch(menu)
        {
            case 1:
            {
               addStudent();
                break;
            }
                
            case 2:
            {
                studentChart();
                break;
            }
                
            case 3:
            {
                scoreAverage();
                break;
            }
                
            case 0:
                return 0;
                
            default:
                printf("잘못된 입력입니다.\n");
        }
    }
}