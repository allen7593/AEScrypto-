#include "rexh.h"
#include <stdio.h>

int main()
{
	char email[256]="allen7593@gmail.com";
	if(email_is_valid(email)==REG_NOMATCH)
        	printf("no match\n");
        else
                printf("ok\n");
return 0;
}

