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
    int input_2;
    scanf("%d", &input_2);
    int input_3;
    scanf("%d", &input_3);

    for (int i = input - 1; i >= 0; i--)
    {
        if (i == input_2)
        {
            printf("%d ", input_3);
        }
        else
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
