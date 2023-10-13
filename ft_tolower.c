#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c) {
	if (c >= 'A' && c <= 'Z') {
		c = c - 'A' + 'a';
	}
	return c;
}

int main() {
	char c = '+';

	printf("This is the result: %c\n", ft_tolower(c));
	printf("This is the result: %c\n", tolower(c));

}
