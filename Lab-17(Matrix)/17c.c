#include <stdio.h>
void main()
{
    int rno[20], marks[20];
    int i, j;
    for (i = 0; i < 20; i++)
    {
        printf("Enter roll of student[%d]: ", i + 1);
        scanf("%d", &rno[i]);
        printf("Enter marks of student[%d]: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d\t%d", rno[i], marks[i]);
        printf("\n");
    }
    printf("\n\n");
}