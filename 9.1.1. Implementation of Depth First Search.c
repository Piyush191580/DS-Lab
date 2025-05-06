/*Write a C program to perform Depth First Search (DFS) traversal on a graph.


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
Enter·Start·Vertex·for·DFS:·1	
DFS·of·graph:·⏎	
1⏎	
2⏎	
3⏎	
4⏎	
5⏎	
Test case 2
Enter·no·of·vertices:·8	
Enter·no·of·edges:·10	
Enter·source:·0	
Enter·destination:·1	
Enter·source:·0	
Enter·destination:·2	
Enter·source:·0	
Enter·destination:·3	
Enter·source:·0	
Enter·destination:·4	
Enter·source:·1	
Enter·destination:·5	
Enter·source:·2	
Enter·destination:·5	
Enter·source:·3	
Enter·destination:·6	
Enter·source:·4	
Enter·destination:·5	
Enter·source:·7	
Enter·destination:·6	
Enter·source:·7	
Enter·destination:·4	
Enter·Start·Vertex·for·DFS:·6	
DFS·of·graph:·⏎	
6⏎*/

//code
#include<stdio.h>
#include<stdlib.h>

struct node {
    int vertex;
    struct node *next;
};

typedef struct node *GNODE;

struct node *graph[100];
int visited[100];

void DFS(int start) {
    GNODE temp;
    visited[start] = 1;
    printf("%d\n", start);
    temp = graph[start];
    while (temp != NULL) {
        if (!visited[temp->vertex]) {
            DFS(temp->vertex);
        }
        temp = temp->next;
    }
}

void main() {
    int n, E, i, s, d, v;
    GNODE q, p;
    
    printf("Enter no of vertices: ");
    scanf("%d", &n);
    printf("Enter no of edges: ");
    scanf("%d", &E);
    
    for(i = 0; i < n; i++) {
        graph[i] = NULL;
    }

    for(i = 1; i <= E; i++) {
        printf("Enter source: ");
        scanf("%d", &s);
        printf("Enter destination: ");
        scanf("%d", &d);
        q = (GNODE)malloc(sizeof(struct node));
        q->vertex = d;
        q->next = NULL;

        if(graph[s] == NULL)
            graph[s] = q;
        else {
            p = graph[s];
            while(p->next != NULL)
                p = p->next;
            p->next = q;
        }
    }

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter Start Vertex for DFS: ");
    scanf("%d", &v);
    printf("DFS of graph: \n");
    DFS(v);
    printf("\n");
}
