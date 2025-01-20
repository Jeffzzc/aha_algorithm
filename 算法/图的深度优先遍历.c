#include<stdio.h>
int book[101],n,e[101][101],min=99999999;
void dfs(int cur,int dis)//cur是当前城市编号，dis是已走过的路程 
{
	int j;
	if(dis>min) return;
	if(cur==n)
	{
		if(dis<min) min = dis;
		return;
	}
	
	for(j=1;j<=n;j++)
	{
		if(e[cur][j] != 99999999 && book[j] == 0)
		{
			book[j] = 1;
			dfs(j,dis+e[cur][j]);
			book[j] = 0;
		}
	}
	return;
}

int main()
{
	int i,j,m,a,b,c;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(i==j) e[i][j] = 0;
			else e[i][j] = 99999999;
	
	for(i=1;i<=m;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		e[a][b] = c;
	}
	
	book[1] = 1;
	dfs(1,0);
	printf("%d",min);
	
	getchar();getchar();
	return 0;
}
