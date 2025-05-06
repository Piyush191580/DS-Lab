/*Write a menu-driven program that implements a singly linked list

for the following operations:

Insert
Delete
Reverse


Sample Test Cases
Test case 1
Enter·the·number·of·elements·in·the·linked·list:·4	
Enter·the·elements:⏎	
10 20 30 40	
Element·10·inserted·at·position·0⏎	
Element·20·inserted·at·position·1⏎	
Element·30·inserted·at·position·2⏎	
Element·40·inserted·at·position·3⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·10·->·20·->·30·->·40·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·1	
Enter·data·to·insert:·50	
Enter·position·to·insert:·10	
Invalid·position⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·1	
Enter·data·to·insert:·15	
Enter·position·to·insert:·1	
Element·15·inserted·at·position·1⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·10·->·15·->·20·->·30·->·40·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·2	
Enter·position·to·delete:·6	
Invalid·position⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·2	
Enter·position·to·delete:·2	
Element·at·position·2·deleted⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·10·->·15·->·30·->·40·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·3	
Reversed·List:·40·->·30·->·15·->·10·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·10·->·15·->·30·->·40·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·5	
Exiting·program⏎	
Test case 2
Enter·the·number·of·elements·in·the·linked·list:·2	
Enter·the·elements:⏎	
15 12	
Element·15·inserted·at·position·0⏎	
Element·12·inserted·at·position·1⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·15·->·12·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·3	
Reversed·List:·12·->·15·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·15·->·12·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·2	
Enter·position·to·delete:·0	
Element·at·position·0·deleted⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·12·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·2	
Enter·position·to·delete:·0	
Element·at·position·0·deleted⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·2	
Enter·position·to·delete:·0	
Invalid·position⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·1	
Enter·data·to·insert:·10	
Enter·position·to·insert:·0	
Element·10·inserted·at·position·0⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·10·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·2	
Enter·position·to·delete:·1	
Invalid·position⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·4	
Linked·List:·10·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·3	
Reversed·List:·10·->·NULL⏎	
Linked·List·Operations:⏎	
1.·Insert⏎	
2.·Delete⏎	
3.·Reverse⏎	
4.·Display⏎	
5.·Exit⏎	
Enter·your·choice:·5	
Exiting·program⏎	
*/

//code
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
    int size;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct LinkedList* initializeList() {
    struct LinkedList* list = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    if (list == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

void insert(struct LinkedList* list, int data, int position) {
    if (position < 0 || position > list->size) {
        printf("Invalid position\n");
        return;
    }

    struct Node* newNode = createNode(data);
    if (position == 0) {
        newNode->next = list->head;
        list->head = newNode;
    } else {
        struct Node* temp = list->head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    list->size++;
    printf("Element %d inserted at position %d\n", data, position);
}
void deleteNode(struct LinkedList* list, int position) {
    if (position < 0 || position >= list->size) {
        printf("Invalid position\n");
        return;
    }

    struct Node* temp = list->head;
    if (position == 0) {
        list->head = temp->next;
        free(temp);
    } else {
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        struct Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        free(nodeToDelete);
    }
    list->size--;
    printf("Element at position %d deleted\n", position);
}
void reverse(struct LinkedList* list) {
    struct Node* prev = NULL;
    struct Node* current = list->head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    list->head = prev;
    //printf("Reversed List\n");
}
void display(struct LinkedList* list) {
    struct Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void displayReversed(struct LinkedList* list) {
    struct Node* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int num_elements;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &num_elements);
    struct LinkedList* list = initializeList();
    int data;
    printf("Enter the elements:\n");
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &data);
        insert(list, data, i);
    }
    int choice, position;
    while (1) {
        printf("Linked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Reverse\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insert(list, data, position);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteNode(list, position);
                break;
            case 3:
                reverse(list);
                printf("Reversed List: ");
                displayReversed(list);
                reverse(list); 
                break;
            case 4:
                printf("Linked List: ");
                display(list);
                break;
            case 5:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
