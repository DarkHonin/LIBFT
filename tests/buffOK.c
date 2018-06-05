#include "../libft.h"

# define OK "OK"
# define NOK "NOJOY"

int main(void)
{
    t_buff *buffer;
    size_t  buff_size = 20;
    int fd = 20;

    buffer = ft_buffnew(buff_size, fd);
    printf("BUFFER MADE: %s\n", (buffer? OK:NOK));
    printf("META SET: %i %s\n", buffer->meta, buffer->meta == fd? OK:NOK);
    printf("BUFFER POINT: %x\nBUFFER POSITION:%x\n", buffer->data, buffer->pointer);
    printf("BUFFER STATE: %i\n", ft_buffstat(buffer));
    printf("BUFFER SIZE: %s\n", (buffer->buff_size == buff_size ? OK:NOK));
    printf("--------------------------------------\n");
    printf("RESETTING BUFFER\n");
    ft_buffreset(buffer);
    printf("BUFFER POINT: %x\nBUFFER POSITION:%x\n", buffer->data, buffer->pointer);
    printf("BUFFER STATE: %i\n", ft_buffstat(buffer));
    printf("--------------------------------------\n");
    printf("STARTING BUFFER GET TEST\n");
    int bytes_in = read(buffer->meta, buffer->data, buffer->buff_size);
    printf("BYTES READ: %i\n", bytes_in);
    int e = 0;
    ft_buffget(sizeof(int), buffer, &e);
    printf("PULLED INT: %i\n", e);
    printf("BUFFER STATE: %i\n", ft_buffstat(buffer));
}