#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <strings.h>

size_t		ft_strlen(char const *str);
char		*ft_strcpy(char *dst, char const *src);
int			ft_strcmp(char const *s1, char const *s2);
ssize_t		ft_write(int fd, const void *buf, size_t nbyte);
char		*ft_strdup(char const *s1);
ssize_t		ft_read(int fd, void *buf, size_t nbyte);

#endif
