
/*6.1.2. Doubly linked list creation and concatenation operations





Write a menu-driven C program that implements a doubly linked list for the following operations:

Create two lists
Display lists
Concatenate

Sample Test Cases
Test case 1
Elements·for·List·1·(separated·by·spaces):·4 5 6 7 8	
Elements·for·List·2·(separated·by·spaces):·10 13 14	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·2	
List·2:·10·<->·13·<->·14·<->·NULL⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·1	
List·1:·4·<->·5·<->·6·<->·7·<->·8·<->·NULL⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·3	
Lists·Concatenated⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·5	
Invalid·choice⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·1	
List·1:·4·<->·5·<->·6·<->·7·<->·8·<->·10·<->·13·<->·14·<->·NULL⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·2	
List·2:·10·<->·13·<->·14·<->·NULL⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·1	
List·1:·4·<->·5·<->·6·<->·7·<->·8·<->·10·<->·13·<->·14·<->·NULL⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·9	
Invalid·choice⏎	
1.·Display·List·1⏎	
2.·Display·List·2⏎	
3.·Concatenate⏎	
4.·Quit⏎	
Enter·your·choice:·4*/



//code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
int data;
struct Node* prev;
struct Node* next;
} Node;

typedef struct DoublyLinkedList {
Node* head;
Node* tail;
} DoublyLinkedList;

void append(DoublyLinkedList* list, int data);
void displayList(DoublyLinkedList* list);
void concatenate(DoublyLinkedList* list1, DoublyLinkedList* list2);

void append(DoublyLinkedList* list, int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	if (list->head == NULL) {
		newNode->prev = NULL;
		list->head = list->tail = newNode;
	}else{
		newNode->prev = list->tail;
		list->tail->next = newNode;
		list->tail = newNode;
	}
}
void displayList(DoublyLinkedList* list) {
	Node* temp = list->head;
	while (temp != NULL){
		printf("%d",temp->data);
		if(temp->next != NULL){
			printf(" <-> ");
		}
		temp = temp->next;
	}
	printf(" <-> NULL\n");
}
void concatenate(DoublyLinkedList* list1, DoublyLinkedList* list2) {
	if (list1->head == NULL){ 
		list1->head = list2->head;
		list1->tail = list2->tail;
	}else if (list2->head != NULL) {
		list1->tail->next = list2->head;
		list2->head->prev = list1->tail;
		list1->tail = list2->tail;
	}
}


int main() {
    struct DoublyLinkedList* list1 = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
    list1->head = NULL;
    list1->tail = NULL;

    struct DoublyLinkedList* list2 = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
    list2->head = NULL;
    list2->tail = NULL;

    int choice, data;

    printf("Elements for List 1 (separated by spaces): ");
    while (1) {
        scanf("%d", &data);
        append(list1, data);
        char c = getchar();
        if (c == '\n') break;
    }

    printf("Elements for List 2 (separated by spaces): ");
    while (1) {
        scanf("%d", &data);
        append(list2, data);
        char c = getchar();
        if (c == '\n') break;
    }

    while (1) {
        printf("1. Display List 1\n");
        printf("2. Display List 2\n");
        printf("3. Concatenate\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("List 1: ");
                displayList(list1);
                break;
            case 2:
                printf("List 2: ");
                displayList(list2);
                break;
            case 3:
                concatenate(list1, list2);
                printf("Lists Concatenated\n");
                break;
            case 4:
                free(list1);
                free(list2);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
