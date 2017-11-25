	int substr( char dst[], char src[], int start, int len):
	{
		int dst_index, src_index;
		dst_index = 0;
		if(start >= 0 && len > 0) {
			for( src_index = 0; 
				src_index < start && src[src_index] != '\0';	
				src_index++)
				while ( len > 0 && src[src_index] != '\0') {
						dst[dst_index] = src[src_index];
						dst_index++;
						src_index++;
						len --;
					}
				}
				dst[dst_index] = '\0';
				return dst_index;
	}