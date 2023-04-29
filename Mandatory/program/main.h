/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamounib <mamounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:26:39 by mamounib          #+#    #+#             */
/*   Updated: 2023/04/29 08:00:51 by mamounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "../functions/getnextline/get_next_line.h"
# include <stdio.h>
# include <mlx.h>
# include <string.h>

# define  IMGPL "assets/hero_xpm/left.xpm"
# define  IMGDO "assets/door_xpm/DoorOpen.xpm"
# define  IMGDC "assets/door_xpm/DoorUnlocked.xpm"
# define  IMGW "assets/wall_xpm/wall.xpm"
# define  IMGG "assets/coin_xpm/Gold_1.xpm"

typedef struct s_position {
	int			x;
	int			y;
}	t_position;

typedef struct s_dimension{
	int			w;
	int			h;
}	t_dimension;

typedef struct s_mlx {
	void		*mlx;
	void		*mlx_win;
	void		*img_p;
	void		*img_d;
	void		*img_w;
	void		*img_g;
}	t_mlx;

typedef struct s_map_entry {
	int			fd;
	int			nlen;
	int			n_c;
	int			n_p;
	int			n_e;
	char		*name;
	char		*extention;
	char		**content;
	t_position	p_pos;
	t_position	e_pos;
	t_dimension	dem;
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
char	**dupmap(char **map, int height);
void	ft_cheker(t_map_entry *map);
void	ft_printerror(char *error);
void	ft_get_dimension(t_map_entry *map);
void	ft_default_mlx(t_mlx *mlx);
void	ft_default_map(t_map_entry *map);
void	ft_draw(t_mlx *m, char **map, int width, int height);
void	ft_putimg(char c, t_mlx *m, t_position p_img);
int		ft_event(int keycode, t_env *env);
void	ft_moveup(t_env *env);
void	ft_movedown(t_env *env);
void	ft_moveleft(t_env *env);
void	ft_moveright(t_env *env);
void	ft_endgame(t_env *env);
void	ft_init_value(int *var1, int *var2, int value);
void	ft_inti_wind(t_mlx *m, int width, int height);
void	ft_chekervalues(t_map_entry *map);
void	ft_coin_handel(t_env *env);
void	ft_check_path(t_map_entry map);
#endif