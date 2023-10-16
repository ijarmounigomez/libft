int strncmp(const char *s1, const char *s2, size_t n) {	

	while(n > 0 && *s1 != '\0' && *s2 != '\0') {	
		if(*s1 != *s2) {
			return (*s1 - *s2); // Only returns 0, negative or positive as soon as there is a different char
		}
		*s1++;
		*s2++;
		n--;
	}
	return 0; // Strings have no different characters -> return 0 
}
