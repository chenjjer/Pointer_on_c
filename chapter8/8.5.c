void 
matrix_mutiply(int *m1, int *m2, int *r, int x, int y, int z)
{
	len_m1_x = sizeof(m1)/sizeof(m1[0]);
	len_m1_y = sizeof(m1[0])/sizeof(m1[0][0]);
	//len_m2_y = sizeof(m2)/sizeof(m2[0]);
	len_m2_z = sizeof(m2[0])/sizeof(m2[0][0]);
	
	for (x = 0; x <= len_m1_x; ) {
	  for( y = 0; y <= len_m1_y;) {
	  	for ( z = 0; z <= len_m2_z; ) {	
	  	    r[x][z] += m1[x][y]*m2[y][z];
				}
//matmult.c
void 
matrix_mutiply( int *m1, int *m2, int *r, int x, int y, int z)
{
	register int *m1p;
	register int *m2p;
	register int k ;
	int row;
	int column;
	
	for( row = 0; row < x; row ++) {
		for( column = 0; column < y; column ++) {
			m1p = m1 + row*y;  
			m2p = m2 + column;
			*r = 0;
			for(k = 0; k < y; k++){
				*r = *m1p * *m2p;
				m1p += 1;
				m2p += z;
			}
			r++;
		}
	}
} 