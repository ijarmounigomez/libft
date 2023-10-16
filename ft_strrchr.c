#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c) {
	
	int length;
	int i;

	length = 0;

	// The length of the string
	while(s[length] != '\0') {
		length++;
	}

	i = length - 1;
	// Iterate from the back of the string
	while(i >= 0) {
		if(s[i] == c) {
			return (char *) &s[i]; // Return the pointer address of s[i] casted to a char
		}
		i--;
	}
	return NULL; // c was not found
}

	int main() {
	
		const char *str = "Hello me llamo Ismael";
		char c = 'o';

		char *result1 = ft_strrchr(str, c);
		char *result2 = strrchr(str, c);

		printf("This is the result: %s\n", result1);
		printf("This is the result: %s\n", result2);
		return 0;
	}
