#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//dfgadsfsdafsadf
int main()
{
    char TeamOne[7][11] =
    {
    "철수",
    "영희",
    "콩쥐",
    "팥쥐",
    "놀부",
    "흥부",
    "제비"
    } ;

    int head_number, letters;
    head_number = sizeof(TeamOne) / sizeof(TeamOne[0]);
    letters = sizeof(TeamOne[0]) / sizeof(char);

    int i, j, k, x;
    char jojjagi[7][11];
    srand(time(NULL));

    for (i = 0; i < head_number; i++)
    {
        again:;
        x = rand() % head_number;
        for (j = 0; j < letters; j++)
            {
            jojjagi[i][j] = TeamOne[x][j];
            }
        if (i != 0)
            {
            for (k = 0; k < i; k++)
                {
                if (jojjagi[i][0] == jojjagi[k][0])
                goto again;
                }
            }
    }
printf("\n한글이름을 가진 멤버들을 4명 단위로 나누는 코드\n\n");

    for (i = 0; i < head_number; i++)
    {
        if (i % 4 == 0)
            {
            printf("\n%d번째 조\n", (i / 4) + 1);
            }
        printf("%s\n", &jojjagi[i][0]);
    }
}