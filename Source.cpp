#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>




int validated_input(int index)

{
	int number, check;
	int errors = 0;

	while (errors == 0)
	{
		printf("Vvedite chislo x%d: ", index);
		check = scanf("%d", &number);

		if (!check)
		{
			printf("ERROR. Vvedeno ne verno. Vvedite prostoe chislo\n");
			getchar();
		}
		else
		{
			errors = 1;
		}
	}
	return number;
}

// подправить проверку



int main()
{
	int number1, number2, number3, Sum;

	number1 = validated_input(1);

	number2 = validated_input(2);

	number3 = validated_input(3);

	printf("Vvedenie znacheni \nx1 = %d \nx2 = %d \nx3 = %d\n", number1, number2, number3);
	
	Sum = number1 + number3;

	printf("Summa x1 u x3 = %d\n", Sum);
	//getchar(); 
	return 0;

}