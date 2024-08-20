#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
size_t			ft_strlen(const char *str);
int				ft_atoi(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, unsigned int n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
int				ft_memcmp(void *s1, void *s2, unsigned int n);
char			*ft_strrchr(char *str, int c);
char			*ft_strrchr(char *str, int c);
void			*ft_memchr(void *s, int c, unsigned int n);
void			*ft_memmove(void *dest, void *src, unsigned int n);
void			*ft_memccpy(void *dest, void *src, int c, unsigned int n);
void			*ft_memcpy(void *dest, void *src, unsigned int n);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memset(void *s, int c, unsigned int n);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcpy(char *dst, const char *src, size_t dsize);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);

#endif
