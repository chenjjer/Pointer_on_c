int Save_array()
{
	int c;
	int count 
	count = 0;
	while(scanf("%d", c) != EOF) {
	 
	 array[i++]=c;
	 count ++;
	}
	array_new = malloc((i+1)*sizeof(int));
  array_new[0] = count;
  for(i = 0 ; i < count; i++)
  array_new[(i+1)++] = array[i++] ;
  
  return array_new;
}
 
 // ±ê×¼
 #define DELTA 100
 int *readints()
 {
 	int *array;
 	int size;
 	int value;
 	int count;
 	
 	size = DELTA;
 	array = malloc((size+1) * sizeof(int ));
 	if(array == NULL)
 		return NULL;
 	count = 0;
 	while(scanf("%d", &value) == 1) {
 		count ++;
 		if(count > size) {
 			size += DELTA;
 			array = realloc(array,(size + 1)*sizeof(int));
 			if(array == NULL)
 				return NULL;
 			}
 		if(count < size) {
 			array = realloc(array,(size+1)* sizeof(int));
 			if(array == NULL)
 				return NULL;
 			}
 			array[0] = count ;
 			return array;
 		}
 }
 	
 			
 			