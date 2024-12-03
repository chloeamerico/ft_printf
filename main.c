
#include "ft_printf.h"
#include <fcntl.h>

int main(void)
{
	int	x;

	// Test NULL pointer
	x = ft_printf("Pointer test: %p\n", (void *)0);
	printf("return value :%d\n", x);
    x = printf("Pointer test: %p\n", (void *)0);
	printf("return value :%d\n", x);

    // Test character
    ft_printf("Character test: %c\n", 'A');
    printf("Character test: %c\n", 'A');

    // Test string
    ft_printf("String test: %s\n", "");
    printf("String test: %s\n", "");

    // Test pointer
    x = 42;
    ft_printf("Pointer test: %p\n", &x);
    printf("Pointer test: %p\n", &x);


    // Test integer (decimal)
    ft_printf("Integer test: %d\n", 12345);
    printf("Integer test: %d\n", 12345);

    // Test integer (signed)
    ft_printf("Signed integer test: %i\n", -6789);
    printf("Signed integer test: %i\n", -6789);

    // Test unsigned integer
    ft_printf("Unsigned integer test: %u\n", 3000000000u);
    printf("Unsigned integer test: %u\n", 3000000000u);

    // Test hexadecimal (lowercase)
    ft_printf("Hexadecimal test (lowercase): %x\n", 255);
    printf("Hexadecimal test (lowercase): %x\n", 255);

    // Test hexadecimal (uppercase)
    ft_printf("Hexadecimal test (uppercase): %X\n", 255);
    printf("Hexadecimal test (uppercase): %X\n", 255);

    // Test mixing all formats
    ft_printf("Mix test: %c, %s, %p, %d, %i, %u, %x, %X\n",
              'Z', "42", &x, 42, -42, 42u, 42, 42);
    printf("Mix test: %c, %s, %p, %d, %i, %u, %x, %X\n",
              'Z', "42", &x, 42, -42, 42u, 42, 42);
	
    x = ft_printf("Pointer test: %p\n", (void *)0);
	printf("return value :%d\n", x);
    x = printf("Pointer test: %p\n", (void *)0);
	printf("return value :%d\n", x);

    return 0;
}