#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int i, num = 0, guess, flag = 1, count = 1, stime;
    long ltime;
    printf("\n\n\n\t\t\t\tenter your guess  0 to 100\n");
    scanf("%d", &guess);
    ltime = time(NULL);
    stime = (unsigned)ltime / 2;
    srand(stime);

    num = rand() % 100;
    do
    {
        if (guess == num)
            flag = 0;
        else if (guess < num)
        {
            flag = 1;
            printf("\n\t\t\t\tyour guess is less then the number\n");
            count++;
        }
        else
        {
            flag = 1;
            printf("\n\t\t\t\tyour guess is greater than the number\n");
            count++;
        }
        if (flag == 1)
        {
            printf("\n\t\t\t\tsorry! guess again\n");
            scanf("%d", &guess);
        }
        if (count == 11)
        {
            printf("\n\t\t\t\tYOU LOSS!!!\n");
            break;
        }
    } while (flag);
    if (flag == 0)
    {
        printf("\n\t\t\t\tcongragulations! you guessed the number%d\n", num);
        printf("\n\t\t\t\tnumber of trails %d\n", count);
    }
    return 0;
}
