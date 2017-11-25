long
factorial(int n)
{
	if(n<=0)
		return 1;
	else
		retur n*factorial(n-1);
	}
long
factorial( int n)
{
	int result = 1;

	while(n > 1){
		result *= n;
		n--;
	}
	
	return result;
}
