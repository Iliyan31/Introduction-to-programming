

bool checkstr(char* str) {
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}
	for (int i = 0; i < size - 1; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (str[i + 1] < 'A' || str[i + 1] > 'Z') return false;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			if (str[i + 1] < 'a' || str[i + 1] > 'z') return false;
		}
	}
	return true;
}


