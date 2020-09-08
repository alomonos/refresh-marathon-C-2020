unsigned long mx_hex_to_nbr(const char *hex) {
	int count = 0;
	unsigned long result = 0;
	unsigned long mult = 1;

	if (hex)
		while (hex[count])
			count++;
	else
		return result;
	for (int i = 0; i <= count; i++) {
		if (hex[count - i] >= '0' && hex[count - i] <= '9') {
			result = result + (hex[count - i] - 48) * mult;
			mult = mult * 16;
		}
		if (hex[count - i] >= 'A' && hex[count - i] <= 'F') {
			result = result + (hex[count - i] - 55) * mult;
			mult = mult * 16;
		}
		if (hex[count - i] >= 'a' && hex[count - i] <= 'f') {
			result = result + (hex[count - i] - 87) * mult;
			mult = mult * 16;
		}
	}
	return result;
}
