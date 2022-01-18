#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,k=1,l,m,x,y;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=k;
			k++;
		}
	}
	printf("\t\tTIC AND TAC GAME\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("|\t%d\t",a[i][j]);
		}
		printf("\n--------------------------------------------------\n");
	}
	for(l=0;l<9;l++)
	{
		if(l%2==0)
		{
			printf("\nPlayer one enter your move\t");
			scanf("%d",&m);
		}
		else
		{
			printf("\nPlayer two enter your move\t");
			scanf("%d",&m);
		}
		printf("\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]==m)
				{
					if(l%2==0)
					{
						a[i][j]='O';
					}
					else
					{
						a[i][j]='X';
					}
				}
			}
		}
		clrscr();
		printf("\t\t   Empty Places\n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]<=9)
				{
					printf("|\t%d\t",a[i][j]);
				}
				else
				{
					printf("|\t \t");
				}
			}
			printf("\n--------------------------------------------------\n");
		}
		printf("\n\n\t\tTIC AND TAC GAME\n\n");
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
			{
				if(a[x][y]>9)
				{
					printf("|\t%c\t",a[x][y]);
				}
				else
				{
					printf("|\t \t",a[x][y]);
				}
			}
			printf("\n--------------------------------------------------\n");
		}
		if((a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'))
		{
			printf("\nFINAL RESULT : Player two is Winner");
			l=9;
		}
		if((a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')||(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O')||(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')||(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')||(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')||(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')||(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'))
		{
			printf("\nFINAL RESULT : Player One is Winner");
			l=9;
		}
	}
	if(l==9)
	{
		printf("FINAL RESULT : Match DRAW");
	}
	getch();
	return 0;
}