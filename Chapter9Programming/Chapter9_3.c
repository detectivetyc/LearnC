int gcd(int m, int n)
{
	if(n == 0) return m;
	else{
		int temp = m-((m/n)*n);
		m = n;
		n = temp;
		return gcd(m,n);
	}

}
int main()
{
	printf("%d\n",gcd(7,2));
	return 0;
}