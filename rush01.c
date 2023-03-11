#include <stdio.h>
#include <unistd.h>

int     ch_is_num(char *ch)
{
         if (*ch >= 48 && *ch <= 57)
        {
                return (1);
        }
        //printf("a");
        return(0);
}

char    *ft_strcpy_rec(char *dest, char *src,char *pnt)
{
	if (src != "\0")
	{
		if (ch_is_num(src))
		{
			*dest = *src;
			//printf
			dest++;
		}
		/*else
		{
			*dest = '0';
		}
		*/
		src++;
		ft_strcpy_rec(dest, src, pnt);
		return ("1");
	}

	else
	{
		*dest = '\0';
		return (pnt);

	}


}

int	build_matrix(char *ch,int n)
{

}

int     main(int argc, char **argv[])
{
        char    str[81];
        char*	pnt;
	int     i;
        i = 16 * 0.5;
        printf("%i",i);
	//printf("x lives at %i.\n", (int*)**argv);
        //printf("%p",**argv);
       	pnt = *argv;
       	while(i < 20 )
	{
		write(1,pnt,1);
		pnt++;
		i++;
	}
	//printf("%i",argc);
	ft_strcpy_rec(str,pnt,str);
	//*ch = **argv[1];
        //printf("%c",*argv[1][1]);
        /*
	 * while (*ch != '\0' )
        {
		
                write(1,ch,3);
                ch++;
                i++;
        }
	*/

        return (0);
}

