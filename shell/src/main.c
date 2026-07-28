#include <stdio.h>
#include <string.h>

#include "commands.h"

int main(void)
{
    char command[256];

    printf("\n");
    printf("=====================================\n");
    printf("mitOS Shell v0.1\n");
    printf("=====================================\n");

    while (1)
    {
        printf("\nmitOS> ");
        fflush(stdout);

        if (fgets(command, sizeof(command), stdin) == NULL)
            break;

        /* Remove the newline that fgets() keeps */
        command[strcspn(command, "\n")] = '\0';

        /* Ignore empty commands */
        if (command[0] == '\0')
            continue;

        execute_command(command);
    }

    return 0;
}