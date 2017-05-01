#include <stdio.h>
int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//判断是否为闰年
int is_leapyear(int year)
{
	return (year%4 == 0) ? 1 : 0;
}

int day_of_year(int month, int day, int year)
{
	
	int n = month;
	int count = 0;
	for (int i=0;i<n-1;i++)
	{
		if(i==1&&is_leapyear(year)==1)
		{
			count+=(days[i]+1);
			continue;
		}
		else
		{
			count+=days[i];
		}
	}
	return count+day;
}

int main (int argc, char const *argv[])
{
	/* code */
	printf("%d\n", day_of_year(9,25,2017));
	return 0;
}