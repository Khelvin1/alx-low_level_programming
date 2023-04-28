#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
add_nobe(&head, "Alexandro");
    add_nobe(&head, "Asaia");
    add_nobe(&head, "Augustin");
    add_nobe(&head, "Bennett");
    add_nobe(&head, "Bilal");
    add_nobe(&head, "Chandler");
    add_nobe(&head, "Damian");
    add_nobe(&head, "Daniel");
    add_nobe(&head, "Dora");
    add_nobe(&head, "Electra");
    add_nobe(&head, "Gloria");
    add_nobe(&head, "Joe");
    add_nobe(&head, "John");
    add_nobe(&head, "John");
    add_nobe(&head, "Josquin");
    add_nobe(&head, "Kris");
    add_nobe(&head, "Marine");
    add_nobe(&head, "Mason");
    add_nobe(&head, "Praylin");
    add_nobe(&head, "Rick");
    add_nobe(&head, "Rick");
    add_nobe(&head, "Rona");
    add_nobe(&head, "Siphan");
    add_nobe(&head, "Sravanthi");
    add_nobe(&head, "Steven");
    add_nobe(&head, "Tasneem");
    add_nobe(&head, "William");
    add_nobe(&head, "Zee");
    print_list(head);
    return (0);
}
