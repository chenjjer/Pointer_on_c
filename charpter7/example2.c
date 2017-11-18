void 
swap(int x, int y)
{
	int temp =0;
	temp = x;
	x = y;
	y = tem;
}

void
swap( int *x ,int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

调用 其中的函数
swap(&a, &b);
