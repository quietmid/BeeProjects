#include <stdio.h>
#include <string.h>

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t  ft_strlcat(char * restrict dest, const char * restrict src, size_t destsize)
{
	size_t	d_len;
	size_t 	s_len;
	int	i;
	int	j;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);

	if (destsize == 0 || !dest)
		return (0);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < destsize - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
int	main(void)
{
	char	str1[50] = "String One is the Greatest";
	char	str2[] = "Phrase Two is even Greater";
	size_t	res;

	res = ft_strlcat(str1, str2, 5);
	printf("The final string is %s\n", str1);
	printf("Strlcat result is: %zu\n", res);
	return (0);
}
/*
strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
     unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize
     is incorrect or that dst is not a proper string).
*/