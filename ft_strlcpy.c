size_t strlcpy(char *dst, const char *src, size_t size) {
	// size is the buffer
	// if size > 0, src should be NUL-terminated
	int src_len = 0;
	size_t i = 0;

	// Calculate the length of src
	// Check (size - 1) for the NULL byte
	while (src_len > (size - 1) && src[src_len] != '\0') {
		src_len++;
	}
	// Copy chars one from src to dst
	while (i < src_len && i < (size - 1)) {
		dst[i] = src[i];
		i++;
	}
	// NULL-terminate the result
	if (size > 0) {
		dst[i] = '\0';	
	}
	return src_len;
}
