/*
对位的计数不使用硬编码，可以避免可移植性问题。
这个解决方案使用一个位在一个无符号整数中进行
*/
unsigned int reverse_bits( unsigned int value)
{
	unsigned int answer;
	unsigned int i;
	answer = 0;
	
	for( i=1 ;i !=0; i<<1 ) {
		/*
		把旧的answer左移一位，为下一个位留下空间；
		如果value的最后一位是1，answer就与1进行或操作
		然后想value右移到下一个为
		*/
		answer <<=1;
		if(value &1)
			answer |= 1;
		vlaue >>= 1;
	}
	return answer;
	}