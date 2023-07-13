#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int idx1, idx2, idx3, idx4;

    ht = hash_table_create(1024);
    idx1 = key_index((const unsigned char *) "hetairas", 1024);
    idx2 = key_index((const unsigned char *)"joyful", 1024);
    idx3 = key_index((const unsigned char *)"depravement", 1024);
    idx4 = key_index((const unsigned char *)"Betty", 1024);
    hash_table_print(ht);
    printf("%ld, %ld, %ld, %ld \n", idx1, idx2, idx3, idx4);

    hash_table_set(ht, "hetairas", "fun");
    hash_table_set(ht, "mentioner", "awesome");
    hash_table_set(ht, "joyful", "and Kris love asm");
    hash_table_set(ht, "synaphea", "queens");
    hash_table_set(ht, "depravement", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "serafins", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
