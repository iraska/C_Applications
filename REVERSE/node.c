//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node 
//{
//    int data;
//    struct Node* next;
//};
//
//int numberOfElements(struct Node* head) 
//{
//    int count = 0;
//    struct Node* current = head;
//
//    while (current != NULL) {
//        count++;
//        current = current->next;
//    }
//
//    return count;
//}
//
//void AddList(struct Node** head, int data) 
//{
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//    newNode->data = data;
//    newNode->next = NULL;
//
//    if (*head == NULL) 
//    {
//        *head = newNode;
//    }
//    else 
//    {
//        struct Node* current = *head;
//
//        while (current->next != NULL) 
//        {
//            current = current->next;
//        }
//        current->next = newNode;
//    }
//}
//
//void ListPrint(struct Node* head) 
//{
//    struct Node* current = head;
//
//    while (current != NULL) 
//    {
//        printf("%d ", current->data);
//        current = current->next;
//    }
//    printf("\n");
//}
//
//int main() 
//{
//    struct Node* head = NULL;
//
//    AddList(&head, 1);
//    AddList(&head, 2);
//    AddList(&head, 3);
//    AddList(&head, 4);
//    AddList(&head, 5);
//
//    printf("Number of elements in linked list: %d\n", numberOfElements(head));
//
//    return 0;
//}
