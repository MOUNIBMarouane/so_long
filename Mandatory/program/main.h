/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:26:39 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/20 08:10:05 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../functions/getnextline/get_next_line.h"
# include <stdio.h>
# include <mlx.h>
# include <string.h>

# define  IMGPB "assets/hero_xpm/left.xpm"
# define  IMGPT "assets/hero_png/top.png"
# define  IMGPR "assets/hero_png/right.png"
# define  IMGPL "assets/hero_xpm/left.xpm"
# define  IMGDO "assets/door_xpm/DoorOpen.xpm"
# define  IMGDC "assets/door_png/DoorUnlocked.png"
# define  IMGW "assets/wall_xpm/wall.xpm"
# define  IMGG "assets/coin_xpm/Gold_1.xpm"

// move up 
// move up 
// move up 
// move up 

typedef struct s_position {
	int			x;
	int			y;
}	t_position;

typedef struct s_dimension {
	int	w;
	int	h;
} t_dimension;

typedef struct s_mlx {
	void		*mlx;
	void		*mlx_win;
	void		*img;
}	t_mlx;

typedef struct s_map_entry {
	int			fd;
	int			width;
	int			height;
	int			nlen;
	int			n_c;
	int			n_p;
	int			n_e;
	char		*name;
	char		*extention;
	char		**content;
	t_position	p_pos;
	t_position	e_pos;
}	t_map_entry;

typedef struct s_env {
	t_position	pos;
	t_dimension	dim;
	t_mlx		m;
	t_map_entry	map;
}	t_env;

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_putchr(int c);
int		ft_putstr(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
void	ft_getmap(t_map_entry *map);
void	ft_checkmap(t_map_entry *map);
void	ft_cheker(t_map_entry *map);
void	ft_printerror(char *error);
void	ft_get_dimension(t_map_entry *map);
void	ft_default_stract(t_map_entry *map);
void	ft_draw(t_mlx *m, char **map, int width, int height);
void	ft_putimg(char c, t_mlx *m, t_dimension d_img, t_position p_img);
int		ft_event(t_env env, int keycode);
void	ft_moveup(t_map_entry *map);
#endif