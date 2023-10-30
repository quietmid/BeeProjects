#include <stdio.h>

size_t  ft_strlen(const char *s)
{
    int  i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *str;
    size_t  len;

    str = (char *)s;
    len = ft_strlen(str);
    i = len;
    while (i >= 0)
    {
        if (str[i] == c)
        {
            return (&str[i]);
        }
        i--;
    }
    return (NULL);
}

int main(void)
{
    const char  str[] = "httttps://yyy.wowlifesgreat.org";
    const char  ch = '.';
    char *ret;

    ret = ft_strrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);
}