#include "ls.h"

void	ft_aff(char *src, t_struct e, char *path)
{
	if (e.a == 1)
	{
		ft_putstr(src);
		ft_putstr("\n");
	}
	else
	{
		if (src[0] != '.')
		{
			ft_putstr(src);
			ft_putstr("\n");
		}
	}
}
