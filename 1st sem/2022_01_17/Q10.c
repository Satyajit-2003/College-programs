// Q10
// 10. WAP to print a given str in an alphabetical order.

#include <stdio.h>

int main()
{
	char str[50], temp;

	printf("Enter a string: ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
	}

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("The string alphabetically: ");
	puts(str);
}