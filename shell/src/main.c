#include <stdio.h>

int main(void)
{
    printf("\n");
    printf("=====================================\n");
    printf("mitOS Shell v0.1\n");
    printf("=====================================\n");

    while (1)
    {
        char command[256];

        printf("\nmitOS> ");
        fflush(stdout);

        if (fgets(command, sizeof(command), stdin) == NULL)
            break;

        printf("You typed: %s", command);
    }

    return 0;
}
