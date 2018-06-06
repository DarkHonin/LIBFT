#include "libft.h"

/*
**  buff ap is responsible for appending the contents of
**  one buffer starting from the pointer onto the other returning the destination buffer
**  after modifying its content and size
*/

t_buff  *ft_buffap(t_buff *dest, t_buff *ap)
{
    void    *data_hold;

    data_hold = ft_memalloc(dest->buff_size + ft_buffstat(ap));
    ft_memcpy(data_hold, dest->data, dest->buff_size);
    ft_memcpy(data_hold + dest->buff_size, ap->pointer, ft_buffstat(ap));
    dest->buff_size = dest->buff_size + ft_buffstat(ap);
    dest->data = data_hold;
    return (dest);
}