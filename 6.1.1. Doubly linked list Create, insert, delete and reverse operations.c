/*Write a C program to implement a menu-driven application that uses a doubly linked list to perform the following operations:



Operations:

Create and Insert: Add a number to the doubly linked list.
Delete: Remove a specific number from the doubly linked list.
Display: Print the elements of the doubly linked list in order.
Reverse: Reverse the order of the doubly linked list.
Exit: The program should terminate when the user chooses this option.


Input Format:

The first line of input reads an integer between 0 and 4, representing the chosen operation.
1: Insert a number. Enter the number to insert when prompted.
2: Delete a number. Enter the number to delete when prompted.
3: Display the current elements in the list.
4: Reverse the list.
0: Exit the program.


Output Format:

The output reads and display appropriate messages for operations performed:
List elements after insertion, deletion, or reversal.A message when attempting to delete a non-existent number.


  Test case 1
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·1	
Enter·number:·15	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·1	
Enter·number:·16	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·1	
Enter·number:·17	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·1	
Enter·number:·18	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
15→16→17→18→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·5	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·4	
List·reversed⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
18→17→16→15→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·4	
List·reversed⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
15→16→17→18→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·2	
Enter·number·to·delete:·19	
19·not·found⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
15→16→17→18→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·2	
Enter·number·to·delete:·15	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
16→17→18→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·4	
List·reversed⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
18→17→16→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·1	
Enter·number:·15	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
18→17→16→15→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·4	
List·reversed⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·3	
15→16→17→18→⏎	
Operations·on·doubly·linked·list⏎	
1.Insert⏎	
2.Remove⏎	
3.Display⏎	
4.Reverse⏎	
0.Exit⏎	
Enter·Choice·0-4:·0*/

//code
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void remov(int value) {
    struct Node* temp = head;

    if (head == NULL) {
        printf("%d not found\n", value);
        return;
    }

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        //printf("%d removed\n", value);
        return;
    }

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("%d not found\n", value);
        return;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    free(temp);
    //printf("%d removed\n", value);
}

void display() {
    struct Node* temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d\t", temp->data);
        if (temp->next != NULL) {
            //printf(" ");
        }
        temp = temp->next;
    }
    printf("\n");
}

void reverse() {
    struct Node* temp = NULL;
    struct Node* current = head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        head = temp->prev;
    }
}
int main() {
    int n, ch;
    do {
        printf("Operations on doubly linked list\n");
        printf("1.Insert\n2.Remove\n3.Display\n4.Reverse\n0.Exit\n");
        printf("Enter Choice 0-4: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &n);
                insert(n);
                break;
            case 2:
                printf("Enter number to delete: ");
                scanf("%d", &n);
                remov(n);
                break;
            case 3:
                display();
                break;
            case 4:
                reverse();
                printf("List reversed\n");
                break;
        }
    } while (ch != 0);
    return 0;
}
