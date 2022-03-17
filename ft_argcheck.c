#include "ls.h"

t_struct	ft_argcheck(char *pname, char *s, t_struct e)
{
	int i;

	i = 1;
	while (s[i])
	{
		if (s[i] == 'l')
			e.l = 1;
		else if (s[i] == 'a')
			e.a = 1;
		else if (s[i] == 'r')
			e.r = 1;
		else if (s[i] == 'R')
			e.re = 1;
		else if (s[i] == 't')
			e.t = 1;
		else
			ft_errorarg(pname, s[i], e);
		i++;
	}
	return (e);
}
