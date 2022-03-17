#include "ls.h"

void	ft_mainevent(t_struct e, size_struct s, char *path, char *pname)
{
	//printf ("%s\n", path);
	int			len;
	int			i;
	char		**tab;
	struct stat	buf;
	char		*toto;

	len = ft_count(path, pname); //demande a ft_count le nbr d elements du rep
	path = ft_strjoin(path, "/");
	//printf("%d\n", len);
	if (len == 0)
		return ;
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	tab = ft_files(tab, path); //demande a ft_files de stock les elements dans tab
	if (tab == NULL)
		return ;
	if (e.t == 1)
		tab = tri_t(tab, e, path);
	else
		tab = tri_ascii(tab);
	s = init_structsize(s);
	if (e.r == 1)
		tab = tri_r(tab);
	while (tab[i])
	{
		if (e.l == 1)
		{
			if (e.a == 1)
			{
				s = stat_l(tab[i], path, s);
			}
			else if (ft_strncmp(".", tab[i], 1) != 0)
			{
				s = stat_l(tab[i], path, s);
			}
			i++;
		}
		else
		{
			ft_aff(tab[i], e, path);
			i++;
		}
	}
	i = 0;
	while (tab[i])
	{
		if (e.l == 1)
		{
			if (e.a == 1)
				ft_aff_l(tab[i], s, path);
			else if (ft_strncmp(".", tab[i], 1) != 0)
				ft_aff_l(tab[i], s, path);
		}
		i++;
	}
	i = 0;
	if (e.re == 1)
	{
		printf("path = %s\n", path);
		while (tab[i])
		{
			toto = ft_strjoin(path, tab[i]);
			//printf("toto = %s i = %d\n", toto, i);
			lstat(toto, &buf);
			if (S_ISDIR(buf.st_mode) && tab[i][0] != '\0' && ft_strcmp(tab[i], ".") != 0 && ft_strcmp(tab[i], "..") != 0)
				ft_mainevent(e, s, toto, pname);
			free(toto);
			i++;
		}
	}
	free(tab);
}
