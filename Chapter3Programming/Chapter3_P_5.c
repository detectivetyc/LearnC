#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	printf("Please input 1-16 in any order:\n");
	int a[4][4];
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int r[4];
	int c[4];
	int d[2];
	//Does C have '+='? Why does this code fail?
	/*	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			r[i] += a[i][j];
			c[i] += a[j][i];
		}
	}*/
	
	/*r[0] = a[0][0]+a[0][1]+a[0][2]+a[0][3];
	r[1] = a[1][0]+a[1][1]+a[1][2]+a[1][3];
	r[2] = a[2][0]+a[2][1]+a[2][2]+a[2][3];
	r[3] = a[3][0]+a[3][1]+a[3][2]+a[3][3];
	c[0] = a[0][0]+a[1][0]+a[2][0]+a[3][0];
	c[1] = a[0][1]+a[1][1]+a[2][1]+a[3][1];
	c[2] = a[0][2]+a[1][2]+a[2][2]+a[3][2];
	c[3] = a[0][3]+a[1][3]+a[2][3]+a[3][3];*/
	for(int k = 0; k<=3;k++)
	{
		r[k] = a[k][0]+a[k][1]+a[k][2]+a[k][3];
		c[k] = a[0][k]+a[1][k]+a[2][k]+a[3][k];
	}
	d[0] = a[0][0]+a[1][1]+a[2][2]+a[3][3];
	d[1] = a[0][3]+a[1][2]+a[2][1]+a[3][0];
	printf("Row sums: ");
	printf("%d %d %d %d\n", r[0],r[1],r[2],r[3]);
	printf("Column sums: ");
	printf("%d %d %d %d\n", c[0],c[1],c[2],c[3]);
	printf("Diagonal sums: ");
	printf("%d %d\n",d[0],d[1]);
	return 0;
}