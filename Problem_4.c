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
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < input; i++)
    {
        if (array[i] >= 0)
        {
            positive = array[i] + positive;
        }
        else
        {
            negative = array[i] + negative;
        }
    }
    printf("%d %d ", positive, negative);

    return 0;
}
