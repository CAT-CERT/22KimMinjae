#include <stdio.h>

int main() {

	int i = 0;
	while (1) {
		i++;
		if (i > 10) break;
		if (i % 3 == 0) continue;
		printf("%d\n", i);
	}

}
