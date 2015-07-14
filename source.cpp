 #include<iostream> 
using namespace std;
int Min(int a ,int b,int c,int d, int &index);
int main()
{
	int i,j, a[4],index;
	int sum[5843]={0};
	int b[4] = { 2, 3, 5, 7 };
	sum[1] = index = 1;
	for (i = 0; i < 4; i++)
		a[i] = 1;
	for (i = 2; i <5843; i++)
	{
		sum[i] = Min(sum[a[0]] * 2, sum[a[1]] * 3, sum[a[2]] * 5, sum[a[3]] * 7, index);
		a[index]++;
		for (j = 0; j < 4; j++)
			if (sum[i] == sum[a[j]] * b[j] && index != j)
				a[j]++;
				
	}
	int n[5843] = {0};
	i = 1;
	while (1)
	{
		cin >> n[i];
		if (n[i] < 1 || n[i]>5842)
			break;
		i++;
	}
	for (j = 1; j <i; j++)
	{
		cout << "The " << n[j];
		if (n[j] % 10 == 1 && n[j] != 11)
			cout << "st  humble number is ";
		else if (n[j] % 10 == 2 && n[j] != 12)
			cout << "nd  humble number is ";
		else if (n[j] % 10 == 3 && n[j] != 13)
			cout << "rd  humble number is ";
		else
			cout << "th  humble number is ";

		cout << sum[n[j]] << "." << endl;

	} 
	return 0;
	
}

int Min(int a, int b, int c, int d, int &index)
{
	if (a <= b && a <= c && a <= d)
	{
		index = 0;
		return a;
	}
	if (b <= a && b <= c && b <= d)
	{
		index = 1;
		return b;
	}
	if (c <= b && c <= a && c <= d)
	{
		index = 2;
		return c;
	}
	if (d <= b && d <= c && d <= a)
	{
		index = 3;
		return d;
	}
		
}
