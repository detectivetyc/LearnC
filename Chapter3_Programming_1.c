#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m, d, y;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("You entered the date ");
	printf("%d%d%d",m,d,y);
	return 0;
}