#include "libft.h"

static int  word_count(const char *str, char delimiter)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (str[i] != delimiter && (i == 0 || str[i - 1] == delimiter))
            count++;
        i++;
    }
    return count;
}

static char *ft_worddup(const char *start, size_t len)
{
    char *word = malloc(len + 1);
    if (!word)
        return NULL;

    for (size_t i = 0; i < len; i++)
        word[i] = start[i];
    word[len] = '\0';
    return word;
}

char    **ft_split(const char *s, char c)
{
    char    **arr;
    int     words = word_count(s, c);
    int     i = 0;
    size_t  start = 0;
    size_t  end = 0;

    arr = malloc((words + 1) * sizeof(char *));
    if (!arr || !s)
        return NULL;

    while (s[end])
    {
        if (s[end] != c && (end == 0 || s[end - 1] == c))
            start = end;
        if (s[end] != c && (s[end + 1] == c || s[end + 1] == '\0'))
        {
            arr[i++] = ft_worddup(s + start, end - start + 1);
            if (!arr[i - 1]) // allocation failed
            {
                while (--i >= 0)
                    free(arr[i]);
                free(arr);
                return NULL;
            }
        }
        end++;
    }
    arr[i] = NULL;
    return arr;
}

