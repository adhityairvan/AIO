#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], *s = str, *t = NULL;

    strcpy(str, "a space delimited string");
    while ((t = strtok(s, " ")) != NULL) {
    	s = NULL;
    	printf(":%s:\n", t);
    }
    return 0;
}
