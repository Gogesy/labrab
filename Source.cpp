#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int vvod_c_proverv_error(int numb)
{
	int chislo,prov;
	int errors = 0;

	while (errors == 0)
	{
		printf("Vvedite chislo x%d: ", numb);
		prov = scanf("%d", &chislo);
		if (!prov)
		{
			printf("ERROR. Vvedeno ne verno. Vvedite prostoe chislo\n");
			getchar();
		}
		else
		{
			
			errors = 1;
		}
	}

	return chislo;
}

// подправить проверку



int main()
{
	int x1, x2, x3, Sum;

	x1 = vvod_c_proverv_error(1);

	x2 = vvod_c_proverv_error(2);

	x3 = vvod_c_proverv_error(3);

	printf("Vvedenie znacheni \nx1 = %d \nx2 = %d \nx3 = %d\n", x1, x2, x3);
	
	Sum = x1 + x3;

	printf("Summa x1 u x3 = %d\n", Sum);

	//getchar(); 
	return 0;

}