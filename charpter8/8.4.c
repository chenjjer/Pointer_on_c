bool
identity_matrix(int *p[], int n)
{
	int i, j ;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			if ( i == j && p[i][j] == 1)
				return true;
			else 
				return false;
			}
		}
}