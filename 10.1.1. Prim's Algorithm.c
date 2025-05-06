/*Write a C program to construct a Minimum Cost Spanning Tree (MST) using Prim's Algorithm, printing the selected edges and the total minimum cost.



Note: The main function is already provided; complete the prims() function to implement Prim's Algorithm.

  Test case 1
Enter·the·number·of·vertices·:·7	
Enter·the·number·of·edges·:·11	
Enter·source·:·1	
Enter·destination·:·2	
Enter·weight·:·7	
Enter·source·:·2	
Enter·destination·:·3	
Enter·weight·:·8	
Enter·source·:·1	
Enter·destination·:·4	
Enter·weight·:·5	
Enter·source·:·2	
Enter·destination·:·4	
Enter·weight·:·9	
Enter·source·:·2	
Enter·destination·:·5	
Enter·weight·:·7	
Enter·source·:·3	
Enter·destination·:·5	
Enter·weight·:·5	
Enter·source·:·4	
Enter·destination·:·5	
Enter·weight·:·15	
Enter·source·:·4	
Enter·destination·:·6	
Enter·weight·:·6	
Enter·source·:·5	
Enter·destination·:·6	
Enter·weight·:·8	
Enter·source·:·5	
Enter·destination·:·7	
Enter·weight·:·9	
Enter·source·:·6	
Enter·destination·:·7	
Enter·weight·:·11	
The·edges·of·Minimum·Cost·Spanning·Tree·are·:·⏎	
Edge·cost·from·1·to·4·:·5⏎	
Edge·cost·from·4·to·6·:·6⏎	
Edge·cost·from·1·to·2·:·7⏎	
Edge·cost·from·2·to·5·:·7⏎	
Edge·cost·from·5·to·3·:·5⏎	
Edge·cost·from·5·to·7·:·9⏎	
Minimum·cost·of·spanning·tree·=·39⏎	
Test case 2
Enter·the·number·of·vertices·:·7	
Enter·the·number·of·edges·:·9	
Enter·source·:·2	
Enter·destination·:·7	
Enter·weight·:·14	
Enter·source·:·1	
Enter·destination·:·2	
Enter·weight·:·28	
Enter·source·:·1	
Enter·destination·:·6	
Enter·weight·:·10	
Enter·source·:·5	
Enter·destination·:·6	
Enter·weight·:·25	
Enter·source·:·4	
Enter·destination·:·5	
Enter·weight·:·22	
Enter·source·:·4	
Enter·destination·:·7	
Enter·weight·:·18	
Enter·source·:·2	
Enter·destination·:·3	
Enter·weight·:·16	
Enter·source·:·3	
Enter·destination·:·4	
Enter·weight·:·12	
Enter·source·:·5	
Enter·destination·:·7	
Enter·weight·:·24	
The·edges·of·Minimum·Cost·Spanning·Tree·are·:·⏎	
Edge·cost·from·1·to·6·:·10⏎	
Edge·cost·from·6·to·5·:·25⏎	
Edge·cost·from·5·to·4·:·22⏎	
Edge·cost·from·4·to·3·:·12⏎	
Edge·cost·from·3·to·2·:·16⏎	
Edge·cost·from·2·to·7·:·14⏎	
Minimum·cost·of·spanning·tree·=·99⏎	
Test case 3
Enter·the·number·of·vertices·:·2	
Enter·the·number·of·edges·:·1	
Enter·source·:·3	
Enter·destination·:·1	
Enter·weight·:·5	
Invalid·data.Try·again.⏎	
Enter·source·:·0	
Enter·destination·:·1	
Enter·weight·:·5	
Invalid·data.Try·again.⏎	
Enter·source·:·1	
Enter·destination·:·2	
Enter·weight·:·5	
The·edges·of·Minimum·Cost·Spanning·Tree·are·:·⏎	
Edge·cost·from·1·to·2·:·5⏎	
Minimum·cost·of·spanning·tree·=·5*/


//code
#include<stdio.h>
#include<conio.h>

#define MAX 20
#define INF 999
int cost[MAX][MAX],n,e,i,j,s,d,w;

void prims() {
	int selected[MAX] = {0},no_of_edges=0;
	int x,y,min,total_cost=0;

	selected[1]=1;

	while(no_of_edges < n-1){
		min = INF;
		for(i=1;i<=n ;i++){
			if(selected[i]){
				for(j=1;j<=n;j++){
					if(!selected[j] && cost[i][j] <min){
						min = cost[i][j];
						x=i;
						y=j;
					}
				}
			}
		}
	printf("Edge cost from %d to %d : %d\n",x,y,cost[x][y]);
	total_cost += cost[x][y];
	selected[y] =1;
	no_of_edges++ ;
}
	printf("Minimum cost of spanning tree = %d\n",total_cost);}
void main() {
	printf("Enter the number of vertices : ");
	scanf("%d", &n);
	printf("Enter the number of edges : ");
	scanf("%d", &e);
	for(i=1; i<=e; i++) {
		printf("Enter source : ");
		scanf("%d", &s);
		printf("Enter destination : ");
		scanf("%d", &d);
		printf("Enter weight : ");
		scanf("%d", &w);
		if(s <= 0 || d <= 0 || s > n || d > n || w < 0 ) {
			printf("Invalid data.Try again.\n");
			i--;
			continue;
		}
		cost[s][d] = w;
		cost[d][s] = w;
	}
	for(i=1; i <= n; i++) {
	    for(j=1; j<=n; j++) {
			if(cost[i][j] == 0)
			    cost[i][j] = 999;
	    }
	}
	printf("The edges of Minimum Cost Spanning Tree are : \n");
	prims();
}
