include "main.h"
/**
 * string_toupper - This function will replace all lowercase letters in
 * the string pointed by str with their uppercase equivalent
 * @str: The string that will be checked for lowercase letters
 *
 * Return: The resulting string str, where all the letters are uppercase
 */

char *string_toupper(char *str)
{
for (size_t i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';
}
return (str);
}
