#include <stdio.h>
#include <stdlib.h>

// void atbegin();

int main(int argc, char const *argv[])
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Want to Continue? Press 0 or 1 : ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    return 0;
}
