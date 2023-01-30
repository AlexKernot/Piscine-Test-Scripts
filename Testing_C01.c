/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:26 by akernot           #+#    #+#             */
/*   Updated: 2023/01/31 09:52:05 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_ft(int *nbr);
extern void	ft_ultimate_ft(int *********nbr);
extern void	ft_swap(int *a, int *b);
extern void	ft_div_mod(int a, int b, int *div, int *mod);
extern void	ft_ultimate_div_mod(int *a, int *b);
extern void	ft_putstr(char *str);
extern int	ft_strlen(char *str);
extern void	ft_rev_int_tab(int *tab, int size);
extern void	ft_sort_int_tab(int *tab, int size);

#include <unistd.h>

void int_to_string(int number, char *str,const int strLen)
{
	int i = strLen - 1;
	while (i >= 0)
	{
		str[i] = (char)((number % 10) + 48);
		number /= 10;
		i--;
	}
}

int main(void)
{
	int *intPointer;
	char str[5];
	int number;

	number = 14;
	intPointer = &number;
	
	//	Ex00
	write(1, "-------ex00-------\n", 19);
	ft_ft(intPointer);
	int_to_string(*intPointer, &str[0], 2);
	write(1, str, 2);

	//	Ex01
	write(1, "\n\n-------ex01-------\n", 21);
	number = 26;
	int *pointer1 = &number;
	int **pointer2 = &pointer1;
	int ***pointer3 = &pointer2;
	int ****pointer4 = &pointer3;
	int *****pointer5 = &pointer4;
	int ******pointer6 = &pointer5;
	int *******pointer7 = &pointer6;
	int ********pointer8 = &pointer7;
	int *********pointer9 = &pointer8;
	ft_ultimate_ft(pointer9);
	int_to_string(number, &str[0], 2);
	write(1, str, 2);

	//	Ex02
	write(1, "\n\n-------ex02-------\n", 21);
	int a = 4;
	int b = 39;

	ft_swap(&a, &b);
	int_to_string(a, &str[0], 2);
	write(1, str, 2);

	//	Ex03
	write(1, "\n\n-------ex03-------\n", 21);
	a = 13;
	b = 2;
	int mod = 0;
	int div = 0;

	ft_div_mod(a, b, &div, &mod);
	int_to_string(div, str, 2);
	write(1, str, 2);
	write(1, ", ", 2);
	int_to_string(mod, str, 2);
	write(1, str, 2);
	
	//	Ex04
	write(1, "\n\n-------ex04-------\n", 21);
	a = 20;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	int_to_string(a, str, 2);
	write(1, str, 2);
	write(1, ", ", 2);
	int_to_string(b, str, 2);
	write(1, str, 2);

	//	Ex05
	write(1, "\n\n-------ex05-------\n", 21);
	ft_putstr("TEST 1\n");
	ft_putstr("STRING LITERAL");

	//	Ex06
	write(1, "\n\n-------ex06-------\n", 21);
	int_to_string(ft_strlen("THIS STRING HAS 26 letters"), str, 2);
	write(1, str, 2);

	//	Ex07
	write(1, "\n\n-------ex07-------\n", 21);
	int numbers[3];
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	ft_rev_int_tab(&numbers[0], 3);
	int_to_string(numbers[0], str, 1);
	write(1, str, 1);
	write(1, ", ", 2);
	int_to_string(numbers[1], str, 1);
	write(1, str, 1);
	write(1, ", ", 2);
	int_to_string(numbers[2], str, 1);
	write(1, str, 1);
	write(1, "\n", 1);

	write(1, "\n\n-------ex08-------\n", 21);
	ft_sort_int_tab(&numbers[0], 3);

	int_to_string(numbers[0], str, 1);
	write(1, str, 1);
	write(1, ", ", 2);
	int_to_string(numbers[1], str, 1);
	write(1, str, 1);
	write(1, ", ", 2);
	int_to_string(numbers[2], str, 1);
	write(1, str, 1);
	write(1, "\n", 1);
	return (0);
}
