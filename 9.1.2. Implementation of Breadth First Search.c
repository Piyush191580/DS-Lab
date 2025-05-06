/*Write a C program to perform Breadth First Search (BFS) traversal on a graph.


Sample Test Cases
Test case 1
Enter·no·of·vertices:·5	
Enter·no·of·edges:·5	
Enter·source:·1	
Enter·destination:·2	
Enter·source:·1	
Enter·destination:·4	
Enter·source:·4	
Enter·destination:·2	
Enter·source:·2	
Enter·destination:·3	
Enter·source:·4	
Enter·destination:·5	
Enter·Start·Vertex·for·BFS:·1	
BFS·of·graph:·⏎	
1⏎	
2⏎	
4⏎	
3⏎	
5⏎	
Test case 2
Enter·no·of·vertices:·4	
Enter·no·of·edges:·3	
Enter·source:·1	
Enter·destination:·2	
Enter·source:·2	
Enter·destination:·3	
Enter·source:·3	
Enter·destination:·4	
Enter·Start·Vertex·for·BFS:·2	
BFS·of·graph:·⏎	
2⏎	
3⏎	
4⏎*/

//code
#include <stdio.h>
#include <stdlib.h>
#define MAX 99


struct node {
    int vertex;
    struct node *next;
};

typedef struct node *GNODE;

GNODE graph[MAX];  
int visited[MAX];

void BFS(int start) {
    int queue[MAX], front = -1, rear = -1;
    visited[start] = 1;
    
    queue[++rear] = start;
    
    while (front < rear) {
        front++;
        int current = queue[front];
        
        printf("%d\n", current);
        
        GNODE temp = graph[current];
        while (temp != NULL) {
            if (!visited[temp->vertex]) {
                visited[temp->vertex] = 1;
                queue[++rear] = temp->vertex;
            }
            temp = temp->next;
        }
    }
}
/*
void main() {
	int n, E, s, d, i, j, v;
	GNODE p, q;
	printf("Enter no of vertices: ");
	scanf("%d",&n);
	printf("Enter no of edges: ");
	scanf("%d",&E);
	for(i=1;i<=E;i++) {
		printf("Enter source: ");
		scanf("%d",&s);
		printf("Enter destination: ");
		scanf("%d",&d);
		q=(GNODE)malloc(sizeof(struct node));
		q->vertex=d;
		q->next=NULL;
		if(graph[s]==NULL) {
			graph[s]=q;
		} else {
			p=graph[s];
			while(p->next!=NULL)
				p=p->next;
			p->next=q;
		}
	}
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("Enter Start Vertex for BFS: ");
	scanf("%d", &v);
	printf("BFS of graph: ");
	BFS(v);
	printf("\n");
}*/
void main() {
	int n, E, s, d, i, j, v;
	GNODE p, q;
	printf("Enter no of vertices: ");
	scanf("%d",&n);
	printf("Enter no of edges: ");
	scanf("%d",&E);
	for(i=1;i<=E;i++) {
		printf("Enter source: ");
		scanf("%d",&s);
		printf("Enter destination: ");
		scanf("%d",&d);
		q=(GNODE)malloc(sizeof(struct node));
		q->vertex=d;
		q->next=NULL;
		if(graph[s]==NULL) {
			graph[s]=q;
		} else {
			p=graph[s];
			while(p->next!=NULL)
				p=p->next;
			p->next=q;
		}
	}
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("Enter Start Vertex for BFS: ");
	scanf("%d", &v);
	printf("BFS of graph: \n");
	BFS(v);
	printf("\n");
}
