size_t strlcat(char *dst, const char *src, size_t size) {
	
	size_t src_len;
	size_t dst_len;
	size_t i;
	size_t j;
	
	scr_len = 0;
	dst_len = 0;
	i = 0;
	j = 0;
	// Get destination length
	while(dst_len < size && dst[dst_len] != '\0') {
		dst_len++;
	}
	// Get source length
	while(src_len < size - dst_len - 1 && src[src_len] != '\0') {
		src_len++;
	}
	// Check if dst has enough space
	size_t space_available = size - dst_len;
	char *dst_ptr = dst + dst_len;
	const char *src_ptr = src;

	while(space_available > 1 && *src_ptr != '\0') {
		*dst_ptr = *src_ptr;
		space_available--;
		src_ptr++;
		dst_ptr++;
	}

	*dst_ptr = '\0'; // Null-terminate the dst string
	
	return dst_len + src_len; // Return the initial dst length + the length of src
}
