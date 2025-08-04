#include <stdio.h>
#include <string.h>   // for comparison
#include <stdlib.h>

// Declare your functions (assume you implemented them)
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t n);

void print_buffer(const char *label, char *buf, size_t size) {
    printf("%s: \"", label);
    for (size_t i = 0; i < size; i++) {
        printf("%c", buf[i]);
    }
    printf("\"\n");
}

int main(void) {
    char buffer1[20] = "ABCDE12345";
    char buffer2[20] = "ABCDE12345";

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

    return 0;
}

