#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int vvod_c_proverv_error(int numb)
{
	int n,a;
	bool yes = false;

	while (yes == false)
	{
		printf("Vvedite chislo x%d:", numb);
		a = scanf("%d", &n);
		if (!a)
		{
			printf("ERROR. Vvedeno ne verno. Vvedite prostoe chislo\n");
			getchar();
		}
		else
		{
			
			yes = true;
		}
	}

	return n;
}





int main()
{
	int x1, x2, x3, Sum;

	int n;

	x1 = vvod_c_proverv_error(1);

	x2 = vvod_c_proverv_error(2);

	x3 = vvod_c_proverv_error(3);

	printf("Vvedenie znacheni \nx1 = %d \nx2 = %d \nx3 = %d\n", x1, x2, x3);
	
	Sum = x1 + x3;

	printf("Summa x1 u x3 = %d\n", Sum);

	//getchar(); 
	return 0;

}