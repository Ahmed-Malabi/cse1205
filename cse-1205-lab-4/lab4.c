//Ahmed Malabi SID 1001736019
#include <stdio.h>
#include <string.h>

int main()
{
	char input[252];
	int start = 0xAA;
	int i = 0;
	int length;
	int checksum;
	
	printf("Enter an input of chars with max length <= 252\n");
	fgets(input, 252, stdin);

	input[strlen(input) - 1] = '\0';
	length = strlen(input);
	
	checksum = start ^ (length+3);
	
	printf("0x%02x 0x%02x ", start, length+3);
	for(i = 0; i < length; i++)
	{
		checksum ^= input[i];
		printf("0x%02x ", input[i]);
	}
	
	printf("0x%02x\n", checksum);
	
	return 0;
}

