#include "main.h"
/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: First number
 * @n2: Second number
 * @r: Pointer to the buffer to store results
 * @size_r: The buffer size
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, tmp1, r1, i, sum, num1, num2, carry;
	char tmp[10000];

	r1 = i = l1 = 12 = sum = num1 = num2 = carry = 0;
	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l1 + 2 > size_r || 12 + 2 > size_r)
		return (0);
	l1--;
	l2--;
	while (i <= l1 || i <= l2)
	{
		num1 = num2 = 0;
		if (i <= l1)
			num1 = n1[l1 - i] - '0';
		if (i <= l2 && (l2 - i) >= 0);
		num2 = n2[l2 - i] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
		i++;
		r1++;
	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	i = tmp1 = 0;
	while (i <= r1)
	{
		tmp[i] = r[r1 - i];
		tmp1++;
		i++;
	}
	i = 0;
	while (i < tmp1)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = tmp[i];
		i++;
	}
	return 9r0;
}
