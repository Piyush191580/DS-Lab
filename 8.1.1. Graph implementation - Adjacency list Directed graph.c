/*.1.1. Graph implementation - Adjacency list Directed graph





Implementation of directed graph and its operations using adjacent lists.

Sample Test Cases
Test case 1
Enter·the·number·of·vertices·:·3	
Enter·the·number·of·edges·:·3	
Enter·source·:·1	
Enter·destination·:·2	
Enter·source·:·1	
Enter·destination·:·3	
Enter·source·:·3	
Enter·destination·:·2	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·5	
1=>2→3→⏎	
3=>2→⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·2	
Enter·the·source·vertex·of·the·edge·:·3	
Enter·the·destination·vertex·of·the·edge·:·2	
After·inserting·edge·the·adjacency·list·is·:·⏎	
1=>2→3→⏎	
3=>2→2→⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·3	
Enter·the·vertex·to·be·deleted·:·3	
After·deleting·vertex·the·adjacency·list·is·:·⏎	
1=>2→⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·3	
Enter·the·vertex·to·be·deleted·:·2	
After·deleting·vertex·the·adjacency·list·is·:·⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·3	
Enter·the·vertex·to·be·deleted·:·1	
After·deleting·vertex·the·adjacency·list·is·:·⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·6	
Test case 2
Enter·the·number·of·vertices·:·4	
Enter·the·number·of·edges·:·3	
Enter·source·:·1	
Enter·destination·:·2	
Enter·source·:·1	
Enter·destination·:·3	
Enter·source·:·3	
Enter·destination·:·4	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·4	
Enter·the·source·vertex·of·the·edge·:·1	
Enter·the·destination·vertex·of·the·edge·:·3	
After·deleting·edge·the·adjacency·list·is·:·⏎	
1=>2→⏎	
3=>4→⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·5	
1=>2→⏎	
3=>4→⏎	
1.Insert·vertex·2.Insert·edge·3.Delete·vertex·4.Delete·edge·5.Print·adjacency·list·6.Exit⏎	
Enter·your·option·:·6*/

//code

//GraphMain3.c
#include<stdio.h>
#include<stdlib.h>
#include "GraphsAdjacencyListDirectedGraph.c" 

void main() {
	int x, op;
	int N,E,s,d,i,j;
	GNODE p,q;
	printf("Enter the number of vertices : ");
	scanf("%d",&N);
	printf("Enter the number of edges : ");
	scanf("%d",&E);
	for(i=1;i<=E;i++) {
		printf("Enter source : ");
		scanf("%d",&s);
		printf("Enter destination : ");
		scanf("%d",&d);
		q=(GNODE)malloc(sizeof(struct node));
		q->vertex=d;
		q->next=NULL;
		if(graph[s]==NULL)
			graph[s]=q;
		else {
			p=graph[s];
			while(p->next!=NULL)
				p=p->next;
			p->next=q;
		}
	}
	while(1) {
		printf("1.Insert vertex 2.Insert edge 3.Delete vertex 4.Delete edge 5.Print adjacency list 6.Exit\n");
		printf("Enter your option : ");
		scanf("%d", &op);
		switch(op) {
			case 1:	
					insertVertex(&N);
					break;
			case 2:
					insertEdge(&N);
					break;
			case 3: 
					deleteVertex(&N);
					break;
			case 4:
					deleteEdge(&N);
					break;
			case 5:
					print(&N);
					break;
			case 6:
					exit(0);
		}
	}
}


//GraphsAdjacencyListDirectedGraph.c
struct node {
	struct node *next;
	int vertex;
};

typedef struct node *GNODE;
GNODE graph[20] = {NULL}; // Initialize graph array to NULL

void print(int *N) {
	for (int i = 1; i <= *N; i++) {
		if (graph[i] != NULL) {
			printf("%d=>", i);
			GNODE temp = graph[i];
			while (temp != NULL) {
				printf("%d\t", temp->vertex);
				temp = temp->next;
			}
			printf("\n");
		}
	}
}

void insertVertex(int *N) {
	(*N)++;
	printf("Vertex %d inserted.\n", *N);
}

void insertEdge(int *N) {
	int src, dest;
	printf("Enter the source vertex of the edge : ");
	scanf("%d", &src);
	printf("Enter the destination vertex of the edge : ");
	scanf("%d", &dest);

	if (src > *N || dest > *N) {
		printf("Invalid vertices!\n");
		return;
	}

	GNODE q = (GNODE)malloc(sizeof(struct node));
	q->vertex = dest;
	q->next = NULL;

	if (graph[src] == NULL) {
		graph[src] = q;
	} else {
		GNODE temp = graph[src];
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = q;
	}

	printf("After inserting edge the adjacency list is : \n");
	print(N);
}

void deleteVertex(int *N) {
	int v;
	printf("Enter the vertex to be deleted : ");
	scanf("%d", &v);

	if (v > *N || graph[v] == NULL) {
		printf("After deleting vertex the adjacency list is : \n");
		return;
	}

	// Delete the entire adjacency list of v
	GNODE temp = graph[v];
	while (temp != NULL) {
		GNODE t = temp;
		temp = temp->next;
		free(t);
	}
	graph[v] = NULL;

	// Delete any edges pointing to v
	for (int i = 1; i <= *N; i++) {
		if (graph[i] != NULL) {
			GNODE prev = NULL, curr = graph[i];
			while (curr != NULL) {
				if (curr->vertex == v) {
					if (prev == NULL) {
						graph[i] = curr->next;
						free(curr);
						curr = graph[i];
					} else {
						prev->next = curr->next;
						free(curr);
						curr = prev->next;
					}
				} else {
					prev = curr;
					curr = curr->next;
				}
			}
		}
	}

	printf("After deleting vertex the adjacency list is : \n");
	print(N);
}

void deleteEdge(int *N) {
	int src, dest;
	printf("Enter the source vertex of the edge : ");
	scanf("%d", &src);
	printf("Enter the destination vertex of the edge : ");
	scanf("%d", &dest);

	if (src > *N || graph[src] == NULL) {
		printf("Invalid source vertex!\n");
		return;
	}

	GNODE curr = graph[src], prev = NULL;
	while (curr != NULL) {
		if (curr->vertex == dest) {
			if (prev == NULL) {
				graph[src] = curr->next;
			} else {
				prev->next = curr->next;
			}
			free(curr);
			break;
		}
		prev = curr;
		curr = curr->next;
	}

	printf("After deleting edge the adjacency list is : \n");
	print(N);
}
