#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	printf("Enter a ISBN number: ");
	int gprefix,gid,pcode,itnum,chdigit;
	scanf("%d-%d-%d-%d-%d",&gprefix,&gid,&pcode,&itnum,&chdigit);
	printf("GS1 prefix: ");
	printf("%d\n",gprefix);
	printf("Group identifier: ");
	printf("%d\n",gid);
	printf("Publisher code: ");
	printf("%d\n",pcode);
	printf("Item number: ");
	printf("%d\n",itnum);
	printf("Check digit: ");
	printf("%d\n",chdigit);
	return 0;
}