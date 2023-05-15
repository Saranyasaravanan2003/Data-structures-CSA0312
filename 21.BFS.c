#include<stdio.h>
#include<conio.h>
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;
void bfs(int v) {
for(i = 1; i <= n; i++)
if(a[v][i] && !visited[i])
q[++r] = i;
if(f <= r) {
visited[q[f]] = 1;
bfs(q[f++]);
}
}
void main() {
int v;
printf("Enter the number of vertices: ");
scanf("%d",&n);
for(i=1; i <= n; i++) {
q[i] = 0;
visited[i] = 0;
}
printf("\nEnter graph data in matrix form:\n");
for(i=1; i<=n; i++) {
for(j=1;j<=n;j++) {
scanf("%d", &a[i][j]);
}
}
printf("Enter the starting vertex: ");
scanf("%d", &v);
bfs(v);
printf("\nThe node which are reachable are:");
for(i=1; i <= n; i++) {
if(visited[i])
printf(" %d", i);
else {
printf("\nBFS is not possible. All nodes are not reachable!");
break;
}
}
getch();
}

//Output
//Enter the number of vertices: 3
//
//Enter graph data in matrix form:
//1
//4
//6
//7
//8
//3
//9
//1
//9
//Enter the starting vertex: 8
//
//The node which are reachable are:
//BFS is not possible. All nodes are not reachable!
/*Enter the number of vertices: 3

Enter graph data in matrix form:
2
4
5
2
3
4
1
7
8
Enter the starting vertex: 2

The node which are reachable are: 1 2 3
--------------------------------
Process exited after 31.53 seconds with return value 13
Press any key to continue . . ./*
