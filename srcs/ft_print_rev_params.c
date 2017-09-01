/* ************************************************************************** */
/*                                                                            */
/*                                                  _ ____        _ ____      */
/*   ft_print_rev_params.c                         /  (___\      /  (___\     */
/*                                                 - | __) )_  __- | __) )    */
/*   By: Karim <newcratie@gmail.com>               | |/ __/| |/ /| |/ __/     */
/*                                                 | | |___|   < | | |___     */
/*   Created: 2017/09/01 17:57:15 by Karim         |_|_____)_|\_\|_|_____)    */
/*   Updated: 2017/09/01 17:57:16 by Karim                                    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_print_rev_params(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
}