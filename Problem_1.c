#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        printf("%d%s\n", i + 1, ". I Want More Assignments");
    }

    return 0;
}
