#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = input - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
