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


Node *head = NULL;
Node *current  = NULL;

int main(int argc, char const *argv[])
{
    printList();
    for (int i = 0; i<10; i++)
    {
        addAtBegin(i);
        addAtLast(i);
    }
    printList();
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
    while (endNode->next != NULL)
    {
        endNode = endNode->next;
    }
    endNode->next = link;
}
