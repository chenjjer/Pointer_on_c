/*
��λ�ļ�����ʹ��Ӳ���룬���Ա������ֲ�����⡣
����������ʹ��һ��λ��һ���޷��������н���
*/
unsigned int reverse_bits( unsigned int value)
{
	unsigned int answer;
	unsigned int i;
	answer = 0;
	
	for( i=1 ;i !=0; i<<1 ) {
		/*
		�Ѿɵ�answer����һλ��Ϊ��һ��λ���¿ռ䣻
		���value�����һλ��1��answer����1���л����
		Ȼ����value���Ƶ���һ��Ϊ
		*/
		answer <<=1;
		if(value &1)
			answer |= 1;
		vlaue >>= 1;
	}
	return answer;
	}