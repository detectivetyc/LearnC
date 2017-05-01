int num_digits(int n)
{
	int count = 0;
	while(n!=0)
	{
		n /= 10;
		count++;
	}
	return count;
}

int main (int argc, char const *argv[])
{
	/* code */
	printf("%d\n", num_digits(241234));
	return 0;
}