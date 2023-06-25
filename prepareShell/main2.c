#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    size_t n = 0;
    char *ptr;
    str = NULL;
    char *tab[10];
    int i = 0;

    printf("$ ");
    getline(&str, &n, stdin);
    printf("%s", str);
    ptr = strtok(str, " ");
    while (ptr)
    {
	    tab[i] = ptr;
	    printf("%s @%p\n", ptr, ptr);
	    ptr = strtok(NULL, " ");
	    i++;
    }
    for (;i >= 0; i--)
	    printf("data %i is %s @%p", i,tab[i],tab[i]);
    return (0);
}
