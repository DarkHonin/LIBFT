LIB_CFG=$(shell find ~/ -name "libs.mk" -type f)
GEN_PATH=$(shell find ~/ -name "gen.mk" -type f)
FLAGS = -Wextra -Wall -Werror
NAME=libft.a
-include $(GEN_PATH)
export NAME
export FLAGS

make: $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "LIB MADE"

setup:
ifeq (${LIB_CFG}, )
	@echo "Downloading standard lib cfg file from 'https://raw.githubusercontent.com/DarkHonin/makefile_assets/master/libs.mk'";
	@curl -0 'https://raw.githubusercontent.com/DarkHonin/makefile_assets/master/libs.mk' -o ~/libs.mk -L;
	@echo "Download done";
else
	@echo Found lib config ${LIB_CFG}
endif
ifeq (${GEN_PATH}, )
	@echo "Downloading standard lib gen file from 'https://raw.githubusercontent.com/DarkHonin/makefile_assets/master/gen.mk'"; 
	@curl -0 'https://raw.githubusercontent.com/DarkHonin/makefile_assets/master/gen.mk' -o ~/gen.mk -L;
	@echo "Download done"; 
else 
	@echo "Lib generator file found $(GEN_PATH)"; 
endif