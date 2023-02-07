#include <stdio.h>

int ft_strcmp(char *str1, char *str2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    //  ex00
    printf("\n-------ex00-------\n");
    char e00str1[] = "base string";
    char e00str2[] = "DIFFERENCE";
    char e00str3[] = "base string";
    printf("%d\n", ft_strcmp(&e00str1[0], &e00str3[0]));
    printf("%d\n", ft_strcmp(&e00str1[0], &e00str3[0]));
    
    //  ex01
    printf("\n-------ex01-------\n");
    char e01str1[] = "DIFFERENCE 1";
    char e01str2[] = "DIFFERENCE 2");
    printf("%d\n", ft_strncmp(&e01str1[0], &e01str2[0], 11));
    printf("%d\n", ft_strncmp(&e01str1[0], &e01str2[0], 12));
    
    //  ex02
    printf("\n-------ex02-------\n");
    char e02src[] = "On the end";
    char e02dest[20] = "Put dest ";
    printf("%s\n", ft_strcat(&e02dest[0], &e02src[0]));
    
    //  ex03
    printf("\n-------ex03-------\n");
    char e03src[] = "Only 20 char of this should be copied";
    char e03dest[31] = "In this cat";
    printf("%s\n", ft_strcat(&e03dest[0], &e03src[0], 20));
    
    // ex04
    printf("\n-------ex04-------\n");
    char e04src[] = "In the beginning, there was only a string, then one day the strstr function went through and found the first occurance of the word 'and'";
    char e04to_find[] = "and";
    printf("%s\n", ft_strstr(&e04src[0], &e04dest[0]));
    
    //  ex05
    printf("\n-------ex05-------\n");
    char e05src[] = "strlcat takes the size of the entire string and guarantees it is null terminated.";
    char e05dest[52 + sizeof(e05src)] = "what is the difference between strlcat and strncat?";
    printf("%s", ft_strlcat(&e05src[0], &e05dest[0], sizeof(e05dest));
    
    return (0);
} 