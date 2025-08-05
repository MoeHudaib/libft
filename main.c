#include <stdio.h>
#include <string.h>   // for comparison
#include <stdlib.h>

// Declare your functions (assume you implemented them)
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(char *str);
char	*ft_strchr(const char *str, char c);
char	*ft_strrchr(const char *str, char c);
int	ft_strncmp(char *str1, char *str2, unsigned int n);
void	*ft_memchr(const void *str, int c, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
char	*ft_strnstr(char *str, char *substr, unsigned int n);
void	print_buffer(const char *label, char *buf, size_t size) {
	printf("%s: \"", label);
	for (size_t i = 0; i < size; i++) 
	{
		printf("%c", buf[i]);
	}
	printf("\"\n");
}

int	main(void) {
	char buffer1[20] = "ABCDE12345";
	char buffer2[20] = "ABCDE12345";
	char	buffer3[20] = "Moham1madHudaib";
	char	buffer4[20] = "Moh,Hud,Daw,yeah";
	size_t len = 7;
	
	// Test ft_memcpy with overlap (dst > src)
	printf("=== ft_memcpy (with overlap) ===\n");
	print_buffer("Before", buffer1, 10);
	ft_memcpy(buffer1 + 2, buffer1, len);  // Overlapping
	print_buffer("After ", buffer1, 10);
	
	// Test ft_memmove with overlap (dst > src)
	printf("\n=== ft_memmove (with overlap) ===\n");
	print_buffer("Before", buffer2, 10);
	ft_memmove(buffer2 + 2, buffer2, len);  // Overlapping
	print_buffer("After ", buffer2, 10);
	
	printf("\n%c\n%c\n\n\n-------------------\n\n", ft_toupper('a'), ft_tolower('G'));
	
	char	*first_char_ptr = ft_strchr(buffer3, '1');
	if (first_char_ptr != NULL)
		printf("%s", first_char_ptr);
	else
		printf("NULL");
	char	comma = ',';
	char	*last_char_ptr = ft_strrchr(buffer4, comma);
	if (last_char_ptr == NULL)
		printf("\n%c Was not found!\n", comma);
	else
		printf("\n%s\n", last_char_ptr);
	printf("%d\n", ft_strncmp("12345ABC", "12345ABC", 8));
	printf("%d\n", ft_strncmp("12345ABC", "12345AB", 8));
	printf("%d\n", ft_strncmp("12345AB", "12345ABC", 8));

	char	buffer[20] = "Mohammad@gmail.com";
	char	*domain = ft_memchr(buffer, '@', 18);
	if (domain == NULL)
		printf("Not Found\n");
	else
		printf("Domain: %s\n", domain);

        printf("%d\n", ft_memcmp("12345ABC", "12345ABC", 8));
        printf("%d\n", ft_memcmp("12345ABC", "12345AB", 8));
        printf("%d\n", ft_memcmp("12345AB", "12345ABC", 8));
	printf("%s\n", ft_strnstr("12345AB", "34", 8));
	printf("%d\n", ft_atoi("		    21382904"));
	return 0;
}
