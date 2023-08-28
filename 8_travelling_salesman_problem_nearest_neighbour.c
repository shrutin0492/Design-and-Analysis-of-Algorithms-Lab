#include <stdio.h>

int a[10][10], visited[10], mCost;

int least(int u){
    int i, ni = 999, min = 999;
    for (i = 0; i < ni; i++){
        if(a[u][i] != 0  && visited[i] == 0 && min > a[u][i]){
            min = a[u][i];
            ni = i;
        }
    }
    if(min != 999){
    mCost += min;
    }
    return ni;
}
void minCost(int u){
	int i,v;
	printf(")");
	visited[u]=1;	
	
	printf("%d -->",u+1);
	v=least(u); // finds next node 
	
	if(v==999)
	{
		v=0;
		printf("%d",v+1);
		mCost+=a[u][v];
		return;
	}
	minCost(v);
 }
void main()
{
   	int i,j, n;
	printf("Enter No. of Cities: ");
	scanf("%d",&n);
	printf("\nEnter Cost Matrix\n");
	for(i=0;i < n;i++)
	 {
		for( j=0;j < n;j++)
			scanf("%d",&a[i][j]);
			
		visited[i]=0;
	 }
	 
	
	
	printf("\n\nThe Path is:\n");
	
	minCost(1);
	
	printf("\n\nMinimum cost:%d\n ",mCost);
	
	
}
