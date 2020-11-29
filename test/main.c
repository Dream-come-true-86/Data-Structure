#include <stdio.h>
#include <stdlib.h>

//memoryb
void allocMemory(void** ptr, int size)
{
	*ptr = malloc(size);
}

int main(void)
{
	long long* numPtr = NULL;

	allocMemory(&numPtr, sizeof(long long));

	*numPtr = 10;
	printf("%lld\n", *numPtr);
	free(numPtr);

	return 0;
}