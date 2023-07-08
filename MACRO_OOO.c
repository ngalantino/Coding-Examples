#include <stdio.h>

// MACRO definition
#define SQUARE(x) x * x

int main() {

	// This will return 11
	int result = SQUARE(3+2);
	printf("%d\n", result);

	// This will return 25.
	int result2 = SQUARE((3+2));
	printf("%d\n", result2);

	return 0;

}
