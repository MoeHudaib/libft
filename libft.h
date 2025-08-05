#ifndef LIBFT_H
# define LIBFT_H

// Includes
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/* Character checks */
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);

/* Character case */
int     ft_toupper(int c);
int     ft_tolower(int c);

/* String and memory */
unsigned int	ft_strlen(const char *str);
void    *ft_memset(void *b, int c, unsigned int n);
void    ft_bzero(void *s, unsigned int n);
void    *ft_memcpy(void *dest, const void *src, unsigned int n);
void    *ft_memmove(void *dest, const void *src, unsigned int n);
void    *ft_memchr(const void *s, int c, unsigned int n);
int     ft_memcmp(const void *s1, const void *s2, unsigned int n);

/* String functions */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, unsigned int n);
char    *ft_strnstr(const char *str, const char *substr, unsigned int n);
char    *ft_strdup(const char *s1);

/* Conversion */
int     ft_atoi(const char *str);

/* Memory allocation */
void    *ft_calloc(unsigned int count, unsigned int size);

#endif
