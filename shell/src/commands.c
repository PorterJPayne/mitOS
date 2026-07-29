#include <stdio.h>
#include <string.h>

#include "commands.h"

void execute_command(const char *input)
{
    /* help */
    if (strcmp(input, "help") == 0)
    {
        printf("\nAvailable commands:\n");
        printf("  help\n");
        printf("  version\n");
        printf("  clear\n");
        printf("  echo <text>\n");
        printf("  reboot\n");
        printf("  poweroff\n");
        return;
    }

    /* version */
    if (strcmp(input, "version") == 0)
    {
        printf("mitOS v0.1\n");
        return;
    }

    /* clear */
    if (strcmp(input, "clear") == 0)
    {
        printf("\033[2J\033[H");
        return;
    }

    /* echo */
    if (strncmp(input, "echo ", 5) == 0)
    {
        printf("%s\n", input + 5);
        return;
    }

    if (strcmp(input, "echo") == 0)
    {
        printf("\n");
        return;
    }

    /* reboot */
    if (strcmp(input, "reboot") == 0)
    {
        printf("Rebooting... (not implemented yet)\n");
        return;
    }

    /* poweroff */
    if (strcmp(input, "poweroff") == 0)
    {
        printf("Shutting down... (not implemented yet)\n");
        return;
    }

    /* unknown command */
    printf("Command not found: %s\n", input);
}