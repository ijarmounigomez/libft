#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len) {
	// *s -> string from which to create substring
	// start -> start index
	// len -> max length
	
	size_t s_length;
	char *sub_str;
	
	s_length = strlen(s); // Get length of string
	sub_str = (char *)malloc(s_length + 1); // Allocate memory for substring + 1 for the '\0'

	if (sub_str != NULL) {
		while (start < len) {
			*sub_str = s[start];
			start++;
		}
		return sub_str;
	}
	return NULL;
}

int main () {
	
	char const str[] = "Hello my name is Ismael :)";
	unsigned int start = 1;
	size_t len = 10;
	
	printf("The substring of s is: %s\n", ft_substr(str, start, len));
	return 0;	
}
