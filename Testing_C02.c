/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Testing_C02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:33:53 by akernot           #+#    #+#             */
/*   Updated: 2023/02/02 10:10:10 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern char *ft_strcpy(char *dest, char *src);
extern char *ft_strncpy(char *dest, char *src, unsigned int n);
extern int	ft_str_is_alpha(char *str);
extern int ft_str_is_numeric(char *str);
extern int	ft_str_is_lowercase(char *str);
extern int ft_str_is_uppercase(char *str);
extern int ft_str_is_printable(char *str);
extern char	*ft_strupcase(char *str);
extern char *ft_strlowcase(char *str);
extern char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);

int main(void)
{
	//	EX00
	char src[5] = "TEST";
	char dest[5] = "NULL";

	ft_strcpy(dest, src);

	printf("%s\n", dest);

	//	EX01
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);

	//	EX02
	printf("%d", ft_str_is_alpha("TEST"));
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
	char string2[24] = "capitalize+this wo-rd";
	printf("%s\n", ft_strcapitalize(&string2[0]));

	//	Ex10
	printf("%s", "\n\n-------ex10-------\n");
	printf("%d\n", ft_strlcpy(&string2[0], &string[0], 12));
	printf("%s\n", string2);

	//	Ex11
	printf("%s", "\n\n-------ex11-------\n");
	ft_putstr_non_printable("Test\n");
}
