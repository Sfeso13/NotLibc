#include "../../libft.h"

char	*nl_search(const char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == '\n')
			break ;
		i++;
	}
	if (s[i] == '\n')
		return ((char *)(s + i));
	return (NULL);
}

char	*buff_read(int fd, char *buffer, char *tmp, char *tmp2)
{
	ssize_t	bytes_read;

	while (!nl_search(buffer))
	{
		tmp = (char *)malloc(BUFFER_SIZE + 1);
		if (!tmp)
			return (free(buffer), NULL);
		bytes_read = read(fd, tmp, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free(tmp);
			break ;
		}
		tmp[bytes_read] = '\0';
		tmp2 = buffer;
		buffer = ft_strjoin(tmp2, tmp);
		free(tmp);
		free(tmp2);
	}
	if (bytes_read < 0)
	{
		free(buffer);
		return (tmp = NULL, buffer = NULL, NULL);
	}
	return (tmp = NULL, tmp2 = NULL, buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer[FD_SETSIZE];
	char		*tmp;
	char		*line;
	size_t		line_len;

	if (fd < 0)
		return (NULL);
	buffer[fd] = buff_read(fd, buffer[fd], tmp = NULL, line = NULL);
	if (!buffer[fd] || *(buffer[fd]) == '\0')
		return (free(buffer[fd]), buffer[fd] = NULL, NULL);
	if (nl_search(buffer[fd]))
	{
		line_len = nl_search(buffer[fd]) - buffer[fd] + 1;
		line = (char *)malloc(line_len + 1);
		if (!line)
			return (free(buffer[fd]), buffer[fd] = NULL, NULL);
		ft_strlcpy(line, buffer[fd], line_len + 1);
		tmp = ft_substr(buffer[fd], line_len, ft_strlen(buffer[fd]));
		free(buffer[fd]);
		return (buffer[fd] = tmp, tmp = NULL, line);
	}
	tmp = buffer[fd];
	buffer[fd] = NULL;
	return (tmp);
}
