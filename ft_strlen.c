#include <stddef.h>

size_t ft_strlen(const char *s) {
	size_t length = 0;
	while(s[length] != '\0') {
		length++;
	}
	return length;
}

int main() {
	return 0;
}
