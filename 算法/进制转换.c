#include<stdio.h>
#include<string.h>
void convto(char *s,int n,int b)
{
	char bit[]={"0123456789ABCDEF"};
	int len;
	if(n==0)
	{
		strcpy(s,"");
		return;
	}
	convto(s,n/b,b);
	len = strlen(s);
	s[len] = bit[n%b];
	s[len+1] = '\0';
}
int main()
{
	char s[100];
	int i,base,old;
	printf("������ʮ������:");
	scanf("%d",&old);
	printf("������ת���Ľ���: ");
	scanf("%d",&base);
	convto(s,old,base);
	printf("%s\n",s);
	getch();
	return 0;
}
