#include<stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char    *str1;
    char    *str2;
    int     i;

    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    while (i < n && *str1 != '\0' && *str1 == *str2)
    {
        if (str1[i] == str2[i])
            i++;
        else
        {
            return (str1[i] - str2[i]);
        }
    }
    return (0);
}

int main (void) 
{
    char str1[15] = "ABCdef";
    char str2[15] = "ABCDEF";
    int result;

   result = ft_strncmp(str1, str2, 4);
    if (result < 0) 
    {
      printf("str1 is less than str2\n");
    } else if (result > 0) {
      printf("str2 is less than str1\n");
    } else 
    {
       printf("str1 is equal to str2\n");
    }
    printf("Value returned by strncmp() is: %d\n", result);
    return(0);
}