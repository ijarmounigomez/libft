int ft_isalpha(int c) {
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int main() {
	ft_isalpha(42);
	ft_isalpha(40);
	ft_isalpha(69);
	ft_isalpha(71);
	return 0;
}
