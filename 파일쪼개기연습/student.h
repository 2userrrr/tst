#ifndef STUDENT_H
#define STUDENT_H

#define MAX 100

typedef struct
{
    char name[30];
    int score;
} Student;

extern Student students[MAX];
extern int count;

void addStudent(void);
void studentChart(void);
void scoreAverage(void);

#endif