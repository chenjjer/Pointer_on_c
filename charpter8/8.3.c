bool
identity_matrix(int *p[10])
{
	int i, j ;
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			if ( i == j && p[i][j] == 1)
				return true;
			else 
				return false;
			}
		}
}