#include <stdio.h>

/* count blanks, tabs, and newlines */
int main()
{
    int c, btn;

    btn = 0;
    while ((c = getchar()) != EOF){
	    if (c == '\n')
		    ++btn;
	    if (c == '\t')
		    ++btn;
	    if (c == ' ')
		    ++btn;
    }
	    printf("%d\n", btn);
    
}
