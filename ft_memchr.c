void *memchr(const void *s, int c, size_t n) {
	
	const unsigned char *us = s;
	size_t i;
	
	i = 0;
	while (i < n) {
		if(us[i] == (unsigned char) c) {
			return (void *)&us[i]; // Returns a void pointer to the char's address in memory
		}
	}
	return NULL; // Char is not in the memory area
}
