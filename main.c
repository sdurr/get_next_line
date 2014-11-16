
#include "get_next_line.h"

int main()
{
     char *line;
     int fd;
     int res;

     fd = open("mangcc", O_RDONLY);
     while((res = get_next_line(&line, fd)))
	   printf("%s", line);
     if (res != -1)
	  free(line);
     return (0);
}
