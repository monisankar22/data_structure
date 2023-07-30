#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    /* data */
    int data;
    struct node *next;
}Node;

/*function forword declerarion*/
void addAtBegin(int );
void addAtLast(int );
void printList(void );
void findMiddle(void);


Node *head = NULL;
Node *current  = NULL;

int main(int argc, char const *argv[])
{
    printList();
    for (int i = 1; i<10; i++)
    {
        addAtLast(i);
    }
    printList();
    findMiddle();
    return 0;
}
void printList()
{
    Node *p = head;
    if (head == NULL)
    {
        printf("Empty List\n");
        return;
    }
    else
    {
        printf("\n[ ");
        while (p != NULL)
        {
            printf("%d ",p->data);
            p = p->next;
        }
        printf("]\n");
        
    }
}

void addAtBegin(int pData)
{
    Node *link = (Node *)malloc(sizeof(Node));
    link->data = pData;
    link->next = head;
    head = link;
}
void addAtLast(int pData)
{
    Node *link = (Node *)malloc(sizeof(Node));
    link->data = pData;

    Node *endNode = head;
    if (endNode)
    {
        while (endNode->next != NULL)
        {
            endNode = endNode->next;
        }
        endNode->next = link;
    }
    else
    {
        head = link;
    }
}
void findMiddle(void)
{
    int increment = 0;
    current = head;
    if (!current)
    {
        printf("Empty list\n");
        return;
    }
    while (current->next != NULL)
    {
        current = current->next;
        increment ++;
    }
    current = head;
    for (size_t i = 0; i < increment/2; i++)
    {
        current = current->next;
    }
    printf("Middle node data: %d\n",current->data);
}