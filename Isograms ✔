//https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/cpp

bool is_isogram(std::string str) {
	int n = str.length();
	for (int i = 0; i < n; i++) {
		str[i] = tolower(str[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) 
		{
			if (str[i] == str[j]) return false;
		}
	}
	return true;
}
