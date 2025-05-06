/*Write a menu driven C program that implements singly linked list for the following operations:

Create
Display
Concatenate

Sample Test Cases
Test case 1
1.·Create·SLL1⏎	
2.·Create·SLL2⏎	
3.·Display·SLL1⏎	
4.·Display·SLL2⏎	
5.·Concatenation⏎	
6.·Exit⏎	
Enter·your·choice:·1	
Enter·elements·for·SLL1·(-1·to·end):·1 2 3 4 -1	
1.·Create·SLL1⏎	
2.·Create·SLL2⏎	
3.·Display·SLL1⏎	
4.·Display·SLL2⏎	
5.·Concatenation⏎	
6.·Exit⏎	
Enter·your·choice:·2	
Enter·elements·for·SLL2·(-1·to·end):·2 4 5 6 7 -1	
1.·Create·SLL1⏎	
2.·Create·SLL2⏎	
3.·Display·SLL1⏎	
4.·Display·SLL2⏎	
5.·Concatenation⏎	
6.·Exit⏎	
Enter·your·choice:·3	
SLL1:·1·-->·2·-->·3·-->·4·-->·NULL⏎	
1.·Create·SLL1⏎	
2.·Create·SLL2⏎	
3.·Display·SLL1⏎	
4.·Display·SLL2⏎	
5.·Concatenation⏎	
6.·Exit⏎	
Enter·your·choice:·4	
SLL2:·2·-->·4·-->·5·-->·6·-->·7·-->·NULL⏎	
1.·Create·SLL1⏎	
2.·Create·SLL2⏎	
3.·Display·SLL1⏎	
4.·Display·SLL2⏎	
5.·Concatenation⏎	
6.·Exit⏎	
Enter·your·choice:·5	
Concatenated·List:·1·-->·2·-->·3·-->·4·-->·2·-->·4·-->·5·-->·6·-->·7·-->·NULL⏎	
1.·Create·SLL1⏎	
2.·Create·SLL2⏎	
3.·Display·SLL1⏎	
4.·Display·SLL2⏎	
5.·Concatenation⏎	
6.·Exit⏎	
Enter·your·choice:·6*/

//code

//SingleLinkedList.c
#include<stdio.h>
#include<stdlib.h>

#include "AllOperations.c"
int main() {
    NODE list1 = NULL, list2 = NULL;
    int choice, x;

    while (1) {
        printf("1. Create SLL1\n");
        printf("2. Create SLL2\n");
        printf("3. Display SLL1\n");
        printf("4. Display SLL2\n");
        printf("5. Concatenation\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter elements for SLL1 (-1 to end): ");
                scanf("%d", &x);
                while (x != -1) {
                    list1 = addNode(list1, x);
                    scanf("%d", &x);
                }
                break;
            case 2:
                printf("Enter elements for SLL2 (-1 to end): ");
                scanf("%d", &x);
                while (x != -1) {
                    list2 = addNode(list2, x);
                    scanf("%d", &x);
                }
                break;
            case 3:
                printf("SLL1: ");
                displayList(list1);
                break;
            case 4:
                printf("SLL2: ");
                displayList(list2);
                break;
            case 5:
                list1 = concatenate(list1, list2);
                printf("Concatenated List: ");
                displayList(list1);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


//AllOperations.c
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef Node*NODE;
NODE addNode(NODE head,int data){
	NODE newNode = 
(NODE)malloc(sizeof(NODE));
	newNode->data = data;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
	}else{
		NODE temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
			
		}
		temp -> next=newNode;
	}
	return head;
}
void displayList(NODE head){
	NODE temp=head;
	while(temp!=NULL){
		printf("%d --> ",temp->data);
		temp = temp-> next;
	}
	printf("NULL\n");
}
NODE concatenate(NODE list1,NODE list2){
	if(list1 == NULL)
		return list2;
	NODE temp = list1;
	while(temp-> next!= NULL){
		temp=temp->next;
	}
	temp->next=list2;
	return list1;
}
