#include "../libft.h"

# define OK "OK"
# define NOK "NOJOY"

int main(void)
{
    t_buff *buffer;
    t_buff *buffer2;
    size_t  buff_size = 5;
    int fd = 0;

    buffer = ft_buffnew(buff_size, fd);
    buffer2 = ft_buffnew(buff_size, fd);
    buffer2->data = "Hello\0";
    ft_buffreset(buffer2);
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
    char e[5];
    ft_buffget(sizeof(char) * 5, buffer, &e);
    printf("PULLED String: %s\n", e);
    printf("BUFFER STATE: %i\n", ft_buffstat(buffer));
    printf("--------------------------------------\n");
    printf("STARTING APPEND TEST\n");
    ft_buffreset(buffer);
    printf("BUFFER RESET\n");
    ft_buffap(buffer, buffer2);
    printf("RESULT: %s\n", (char *)buffer->data);
}