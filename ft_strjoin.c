#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2) {

	size_t s1_length;
	size_t s2_length;
	size_t total_length;
	char *concat_str;

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	total_length = s1_length + s2_length;
	
	concat_str = (char *)malloc(total_length + 1); // Malloc + '\0'	

	
	if (concat_str != NULL) {
		while (*s1 != '\0') {
			*concat_str = *s1;
		}
		size_t concat_str_len;
		concat_str_len = strlen(concat_str_len) - 1;
		while (*s2 != '\0') {
			*concat_str[concat_str_len] = *s2;		
		}
		return concat_str;
	}
	return NULL;
}
