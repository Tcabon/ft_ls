#include "ls.h"

char	**ft_files(char **tab, char *path)
{
	DIR				*rep;
	struct dirent	*ent;
	int				i;

	rep = opendir(path);
	i = 0;
	if (rep == NULL)
	{
		perror("erreur :");
		return (NULL);
	}
	while ((ent = readdir(rep)) != NULL)
	{
		tab[i] = ft_strdup(ent->d_name);
		i++;
	}
	tab[i] = NULL;
	closedir(rep);
	return (tab);
}
