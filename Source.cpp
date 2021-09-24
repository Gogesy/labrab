#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>



int validated_input(int numb)
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

	x1 = validated_input(1);

	x2 = validated_input(2);

	x3 = validated_input(3);

	printf("Vvedenie znacheni \nx1 = %d \nx2 = %d \nx3 = %d\n", x1, x2, x3);
	
	Sum = x1 + x3;

	printf("Summa x1 u x3 = %d\n", Sum);

	//getchar(); 
	return 0;

}