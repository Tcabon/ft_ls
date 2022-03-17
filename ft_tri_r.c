#include "ls.h"

char	**tri_r(char **tab)
{
	char	**newtab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i + 1])
		i++;
	//printf ("i = %d\n", i);
	newtab = (char **)malloc(sizeof(char *) * (i + 2));
	newtab[i + 1] = NULL;
	while (i >= 0)
	{
		newtab[j] = tab[i];
		i--;
		j++;
	}
	//printf ("j = %d\n", j);
	return (newtab);
}
