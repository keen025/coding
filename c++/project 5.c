#include <stdio.h>

// mã ascii
// A-Z : 65-90
// a-z : 97-122
// 0-9 : 48-57

int main() {
	char kitu;
	scanf("%c", &kitu);
	if((kitu >= 'a') && (kitu <= 'z')){
		kitu -= 32;
	}
	printf("%c", kitu);
	
	return 0;
}

