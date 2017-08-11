#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "url.h"

int main(int argc, char *argv[])
{
	char *buffer;
	char temp[1024] = "";

	if (argc == 2) {
		buffer = strdup(argv[1]);
		php_url_decode(buffer, temp, strlen(buffer));
		printf("%s\n", temp);
	}
	return 0;
}
