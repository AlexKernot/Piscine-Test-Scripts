/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Testing_C02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:33:53 by akernot           #+#    #+#             */
/*   Updated: 2023/02/04 11:36:29 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	//	EX00
	printf("%s", "\n\n-------ex00-------\n");
	char src[] = "0000TEST";
	char dest[] = "00NULL0000";

	ft_strcpy(dest, src);

	printf("%s\n", dest);

	//	EX01
	printf("%s", "\n\n-------ex01-------\n");
	ft_strncpy(dest, src, 3);
	printf("%s\n", dest);

	//	EX02
	printf("%s", "\n\n-------ex02-------\n");
	printf("%d\n", ft_str_is_alpha("TEST"));
	printf("%d\n", ft_str_is_alpha("[FAIL"));
	printf("%d\n", ft_str_is_alpha("0FAIL")); 

	//	Ex03
	printf("%s", "\n\n-------ex03-------\n");
	printf("%d\n", ft_str_is_numeric("1234567890"));
	printf("%d\n", ft_str_is_numeric("fail1234567890"));

	//	Ex04
	printf("%s", "\n\n-------ex04-------\n");
	printf("%d\n", ft_str_is_lowercase("pass"));
	printf("%d\n", ft_str_is_lowercase("Fail"));
	printf("%d\n", ft_str_is_lowercase("0fail"));

	
	//	Ex05
	printf("%s", "\n\n-------ex05-------\n");
	printf("%d\n", ft_str_is_uppercase("PASS"));
	printf("%d\n", ft_str_is_uppercase("Fail"));
	printf("%d\n", ft_str_is_uppercase("0FAIL"));

	//	Ex06
	printf("%s", "\n\n-------ex06-------\n");
	printf("%d\n", ft_str_is_printable("PASS"));
	printf("%d\n", ft_str_is_printable("Fail\32"));
	printf("%d\n", ft_str_is_printable("FAIL\1"));

	//	Ex07
	char string[12] = "to upper123";
	printf("%s", "\n\n-------ex07-------\n");
	printf("%s\n", ft_strupcase(&string[0]));

	//	Ex08
	printf("%s", "\n\n-------ex08-------\n");
	printf("%s\n", ft_strlowcase(&string[0]));

	//	Ex09
		printf("%s", "\n\n-------ex09-------\n");
	char string2[] = "capitalize+this wo-rd{a},m+i%sas";
	printf("%s\n", ft_strcapitalize(&string2[0]));

	//	Ex10
	printf("%s", "\n\n-------ex10-------\n");
	printf("%d\n", ft_strlcpy(&string2[0], &string[0], 12));
	printf("%s\n", string2);

	//	Ex11
	write(1, "\n\n-------ex11-------\n", 21);
	ft_putstr_non_printable("\x0a \x8e \x88\xfc\xa0+\xc2+");

	//	Ex12
	write(1, "\n\n-------ex12-------\n", 21);
	char string3[] = "This this a literal and I need this to be 100 charactes, I don't know how many this is but it's certainly a few. \5\3\6 How. many now?:.,mnb";
	ft_print_memory(&string3[0], sizeof(string3) / sizeof(char));
}
