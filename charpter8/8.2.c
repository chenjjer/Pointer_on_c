float
single_tax( float income)
{
	float tax;
	if( income >=0 && income <= 23350)
		tax = income* 0.15;
	else if ( income > 23350 && income <= 56550)
		tax = 3502.5 + (income-23350)* 0.28;
	else if ( income > 56550 && income <= 117950)
		tax = 12798.5 + (income -56550) * 0.31;
	else if ( income > 117950 && income <= 256500)
		tax = 31832.5 + (income - 12798.5)* 0.36;
	else if ( income >256500 )
		tax = 81710.5 + (income-256500) *0.396;
	
	return tax;
}

// standard code
# include < float.h>
static double income_limits[]
={0, 23350, 56500, 117950, 256500, DBL_MAZ};
static float base_tax[]
={0,3502.5, 12798.5,31832.5, 81710.5};
static float percentage[]
={0.15, 0.28, 0.31, 0.36, 0.396};
double
single_tax(double income)
{
	int category;
	for(category = 1; income >= income_limits[category]; category++)
	category --;
	return base_tax[category]+percentage[category]*(income-income_limits[category);
}