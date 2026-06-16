#if defined(__has_include)
#  if __has_include(<stdio.h>)
#    include <stdio.h>
#  else
#    include "stdio.h"
#  endif
#else
#  include <stdio.h>
#endif

/* Fallback declaration if <stdio.h> is not available to the compiler's include path */
#if !defined(__STDIO_H__) && !defined(_INC_STDIO)
extern int printf(const char *, ...);
#endif

int main()
{
    printf("Hello world");
    return 0;
}