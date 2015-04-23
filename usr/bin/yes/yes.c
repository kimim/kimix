#include <sys/utsname.h>

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

#ifdef CMDBOX
#define main(argc, argv)	yes_main(argc, argv)
#endif

static void
usage(void)
{
	fprintf(stderr, "usage: yes\n");
	exit(1);
}

int main(int argc, char *argv[])
{
        while(1)
        {
                printf("y\n\r");
        }
        return 0 ;
}
