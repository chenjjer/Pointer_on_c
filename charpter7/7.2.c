int gcd( int M, int N)
{
	int R;
	if( M >0 && N > 0 && R > 0){
		if( (M % N ) == 0)
			return N;
		else if (( M % N ) == R)
			return gcd(N,R);
	}
	else 
		return 0;
}
// the sulution from the class
int gcd (int m, int n)
{
	int r ;
	if ( m <= 0 || n<= 0)
		return 0;
	r= m % n;
	return r > 0? gcd(n,r) : n;
	}

int gcd(int m, int n)
{
	int r;
	if (m<=0||n<=0)
		return 0;
	do
	{
		r=m%n;
		m=n;
		n=r;
	}while(r>0);
	return m;
}