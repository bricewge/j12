/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 14:29:06 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/21 13:45:27 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		ft_display_file(char *file_path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 0;
	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("cat: ");
		ft_putstr(file_path);
		ft_putstr(": No such file or directory\n");
		close(fd);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}

void	ft_cat_magic(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = 1;
	while (ret > 0)
	{
		ret = read(STDIN_FILENO, buf, BUF_SIZE);
		if (buf[ret] == 4)
			break ;
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == 1 && argv[i][0] == '-')
			ft_cat_magic();
		else
			ft_display_file(argv[i]);
		i++;
	}
	return (0);
}
