/*
** 101pong.c for 101pong in /home/VSridhar78/101pong
** 
** Made by Sridhar Vengadesan
** Login   <VSridhar78@epitech.net>
** 
** Started on  Mon Nov 14 15:04:51 2016 Sridhar Vengadesan
** Last update Wed Nov 23 14:23:44 2016 Sridhar Vengadesan
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_putstr(char *str)

{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

char	*my_strcpy(float **dest, char **src)
{
  int   i;
  int	j;

  i = 0;
  j = 1;
  dest = malloc(sizeof(float) * 800);
  my_putstr(src);
  // while (j <= 7)
  /*while (i != 10)
	{
	  dest[j] = malloc(sizeof(float) * 800);
	  dest[j][i] = src[j][i];
	  i = i + 1;
	  printf("%f", dest[j][i]);
	  }*/
      // i = 0;
      //j = j + 1;
}

/*char    *my_strcpy2(float *dest, float **src)
{
  int   i;
  int   j;

  printf('test');
  i = 0;
  j = 1;
  j = malloc(sizeof(int) * 800);
  printf('test');
      while (src[j][i] != '\0')
	{
	  dest[j] = src[j][i];
	  i = i + 1;
	}
	}*/

int	my_put_nbr(int	nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb <= 9 && nb >= 0)
    {
      my_putchar(nb + '0');
    }
  else
    {
      my_put_nbr (nb / 10);
      my_put_nbr (nb % 10);
    }
}

int	ball_coordinates(char  **av, int a, int b, int c)
{
  int	d;
  int	e;
  int	f;
  int	g;

  printf("At time t+%c, ball coordinates will be:\n", av[7][0]);
  g = av[7][0] - 48 + 1;
  d = g * a + (av[1][0] - 48);
  e = g * b + (av[2][0] - 48);
  f = g * c + (av[3][0] - 48);
  printf("(%d;%d;%d)\n", d, e, f);

  if (a == 0)
    {
      printf("The incidence angle is:\n");
    }
  else
    {
      printf("The ball won't reach the bat\n");
    }
}

int	speed_vector(char **av)
{
  int	a;
  int	b;
  int	c;
  int	n;
  float	**fl;
  //float	*final;

  n = 1;
  printf("%s\n", av[n]);
  fl = malloc(sizeof(float) * 800);
  while(n <= 7)
    {
      fl[n] = malloc(sizeof(float) * 800);
      my_strcpy(fl[n], av[n]);
      n = n + 1;
    }
  //fl = malloc(sizeof(float) * 800);
  //final = malloc(sizeof(float) * 800);
  printf("The speed vector coordinates are:\n");
  a = av[4][0] - av[1][0];
  b = av[5][0] - av[2][0];
  c = av[6][0] - av[3][0];
  printf("(%d;%d;%d)\n", a, b, c);
  ball_coordinates(av, a, b, c);
}

int     main(int ac, char  **av)
{
  speed_vector(av);
}
