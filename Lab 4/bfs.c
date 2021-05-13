#include<stdio.h>
void adj();
void input();
void bfs(int);
int delQue();
void addQue(int);
int v,n,f=0,r=0,visited[10]={0},a[10][10],que[10]={0};
int main(){
  input();
  printf("Enter the starting vertex: \n");
  scanf("%d",&v);
  printf("Bfs traversal: \n");
  bfs(v);
  return 0;
}
void input(){
  int i, j;
  printf("Enter the number of nodes: ");
  scanf("%d",&n);
  printf("Enter the adjacent matrix: \n");
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
}
void bfs(int v){
  printf("%d->", v);
  int j,u=v;
  visited[u]=1;
  while(1){
    for(j=1; j<=n; j++){
      if(a[u][j]!=0 && visited[j]==0){
        visited[j]=1;
        addQue(j);
      }
    }
    u=delQue();
    printf("%d->", u);
    if(f==r)
      break;
  }
  printf("\nTraversal Complete!\n");
}
void adj(){
  int i, j;
  printf("Adjacency matrix[][]: \n");
  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++)
      printf("%d\t", a[i][j]);
    printf("\n");
  }
}
void addQue(int x){
  que[r++]=x;
}
int delQue(){
  return que[f++];
}