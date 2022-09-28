#include <stdio.h>
#include <string.h>

int main(void)
{
    char console_input[1024];


    FILE *f = fopen("/home/xacsz/Documents/a.txt", "w");

    while (1)
    {
        memset(console_input, 0, sizeof(console_input));
        scanf("%s", console_input);

        if (strcmp(console_input, "exit") == 0)
        {
            break;
        }
        fputs(console_input, f);
        fputs("\n", f);
    }

    fclose(f);

    printf("End ...\n");
    return 0;
}
