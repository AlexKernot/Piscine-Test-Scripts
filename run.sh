clear
echo -e "-Norminette start-$\n"
norminette -R CheckForbiddenSourceHeader ex*/*.c | grep -Ei "(error|warning)" | cat -e
echo -e "\n---Build  start---$\n"
gcc -Wall -Wextra -Werror ex*/*.c Testing*.c | cat -e
echo -e "\n-------run--------$\n"
./a.out | cat -e
