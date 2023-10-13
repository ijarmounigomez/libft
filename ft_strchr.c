#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c) {

	while(*s != '\0') {
		if(*s == c) {
			return (char *) s; 		
		}
	s++;
	}
	return NULL;
}

int main() {
    const char str[] = "Hello me llamo Ismael";
    const char c = 'e';
    char *ret;
    char *ptr1;

    ret = strchr(str, c);
    ptr1 = ft_strchr(str, c);

    printf("%s\n", ret); // This will print the string starting from where the pointer points
    printf("%s\n", ptr1);
    return 0;
}
