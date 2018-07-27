LIB_CFG=../libs.mk

NAME=libft.a
include ../gen.mk
export NAME

make: $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "LIB MADE"