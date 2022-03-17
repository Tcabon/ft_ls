#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

double					ft_absolute_nb(double nb);
int						ft_atoi(char const *nptr);
void					ft_bzero(void *s, size_t n);
char					**ft_cpy_tab(char **tabl);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isblank(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
char					*ft_itoa(int n);
int						ft_len_tab(char **tabl);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstdelone(t_list **alst,
						void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *dest, const void *src, int c,
						size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memset(void *s, int c, size_t n);
int						ft_nbrlen(int i);
void					ft_putchar_fd(char c, int fd);
void					ft_putchar(char c);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putstr(char const *s);
char					*ft_strcat(char *dest, const char *src);
char					*ft_strchr(const char *s, int c);
void					ft_strclr(char *s);
int						ft_strcmp(char const *s1, char const *s2);
char					*ft_strcpy(char *dest, char const *src);
void					ft_strdel(char **as);
char					*ft_strdup(char const *s);
int						ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char*));
void					ft_striteri(char *s, void (*f)(unsigned int, char*));
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strjoin_delete(char *s1, char const *s2);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
size_t					ft_strlen(char const *s);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
						char (*f)(unsigned int, char));
char					*ft_strncat(char *dest, char const *src, size_t n);
int						ft_strncmp(char const *s1, char const *s2, size_t n);
char					*ft_strncpy(char *dest, char const *src, size_t n);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strnew(size_t size);
char					*ft_strnstr(char const *s1, char const *s2, size_t n);
char					*ft_strrchr(char const *s, int c);
char					**ft_strsplit(char const *s, char c);
char					*ft_strstr(char const *s1, char const *s2);
char					*ft_strsub(char const *s, unsigned int start,
						size_t len);
char					*ft_strtolower(char *str);
char					*ft_strtoupper(char *str);
char					*ft_strtrim(char const *s);
t_list					*ft_tab_to_list(char **env);
int						ft_tolower(int c);
int						ft_toupper(int c);
char					**realloc_tab(char **tabl, char *str, int cpt);
#endif
