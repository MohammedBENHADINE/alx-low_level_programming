#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    size_t n = 0;


    str = NULL;

    printf("$ ");
    getline(&str, &n, stdin);
    printf("%s", str);
    return (0);
}
