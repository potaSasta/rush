#include <stdio.h>
#include <unistd.h>

/* 
 * sudoku "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68."
".9..5.741" "47......." 
*/
int     ch_is_num(char *ch)
{
         if (*ch >= 48 && *ch <= 57)
        {
                return (1);
        }
        //printf("a");
        return(0);
}


char	*ch_to_zero(char *ch)
{
	if (! ch_is_num(ch))
	{
		*ch = '0';
	}
	return ch;
}


char	build_cols(char **argv[])
{
	return(0);

}


int	main(int argc, char **argv[])
{
	char	idx;
	int 	i;
	i = 1;	
	printf("%i",argc);

	//printf("%c",*argv[1][1]);
	while (i < argc)
	{
		argv++;
		write(1,*argv,3);
		i++;
	}
	
	return (0);
}
