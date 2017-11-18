long
fibonacci (int n)
{
	if (n <=2)
		return 1;
	if (n >2)
		return fibonacci(n)-1+fibonacci(n-2);
	}
	
long 
fibonacci( int n)
{
	long result, previous_result, next_older_result;
	result = previous_result = 1;
	while (n > 2)
	{
		next_older_result = previous_result;
		previous_result = result;
		result = previous_result + next_older_result;
		n--;
		}
		return result;
	}
		