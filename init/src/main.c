#include <stdio.h>
#include <unistd.h>
#include <sys/mount.h>
#include <sys/utsname.h>

int main(void)
{
    printf("\n");
    printf("=====================================\n");
    printf("mit-init starting...\n");
    printf("Welcome to mitOS!\n");
    printf("=====================================\n");

    fflush(stdout);

    if (mount("proc", "/proc", "proc", 0, NULL) == 0)
        printf("[OK] Mounted /proc\n");
    else
        perror("[FAIL] /proc");

    if (mount("sysfs", "/sys", "sysfs", 0, NULL) == 0)
        printf("[OK] Mounted /sys\n");
    else
        perror("[FAIL] /sys");

    if (sethostname("mitOS", 5) == 0)
        printf("[OK] Hostname set to mitOS\n");
    else
        perror("[FAIL] sethostname");

    printf("[INFO] Starting mit-shell...\n");

execl("/bin/mit-shell", "mit-shell", NULL);

perror("[FAIL] execl");

while (1)
    sleep(1);

    return 0;
}
