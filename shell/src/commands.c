#include <stdio.h>
#include <string.h>

#include "commands.h"

void execute_command(const char *input)
{
    if (strcmp(input, "help") == 0)
    {
        printf("\n");
        printf("Available commands:\n");
        printf("  help\n");
        printf("  version\n");
        printf("  clear\n");
        return;
    }

    if (strcmp(input, "version") == 0)
    {
        printf("mitOS version 0.1\n");
        return;
    }

    if (strcmp(input, "clear") == 0)
    {
        /* ANSI escape sequence to clear the screen */
        printf("\033[2J\033[H");
        return;
    }

    printf("Unknown command: %s\n", input);
}