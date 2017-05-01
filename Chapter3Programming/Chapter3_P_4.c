#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	printf("Enter a phone number(xxx)xxx-xxxx: ");
	int a,b,c;
	scanf("(%d)%d-%d",&a,&b,&c);
	printf("You entered ");
	printf("%d.%d.%d",a,b,c);
	return 0;
}