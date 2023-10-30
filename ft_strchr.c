#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    int i;
    char    *str;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}