#include "ls.h"

char	**tri_ascii(char **tab)
{
	int i;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swaptab(tab + i, tab + i + 1);
			i = 0;
			continue;
		}
		i++;
	}
	return (tab);
}
