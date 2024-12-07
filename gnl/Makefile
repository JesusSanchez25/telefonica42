# Nombre del ejecutable principal
NAME = get_next_line.a
MAIN_EXEC = ejecutable

# Archivos fuente y cabecera
SRC = get_next_line.c get_next_line_utils.c
HEADER = get_next_line.h
MAIN_SRC = main.c
BUFFER_SIZE ?= 1
BUFFER_FLAG = -D BUFFER_SIZE=$(BUFFER_SIZE)

OBJ = $(SRC:.c=.o)

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
#-g3 -fsanitize=address

# Reglas principales
all: $(NAME)

# Crear la librería .a
$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

$(BUFFER_SIZE):

# Crear el ejecutable para pruebas
$(MAIN_EXEC): $(MAIN_SRC) $(SRC) $(MAIN_SRC) $(BUFFER_SIZE)
	$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BUFFER_SIZE) $(SRC) $(HEADER) $(MAIN_SRC) -o $(MAIN_EXEC)

# Ejecutar el programa principal
run: $(MAIN_EXEC)
	./$(MAIN_EXEC)

# Limpieza de archivos objeto
clean:
	rm -f $(OBJ) $(MAIN_EXEC)

# Limpieza completa
fclean: clean
	rm -f $(NAME)

# Regenerar todo
re: fclean all

# Indicar que estas reglas no son archivos
.PHONY: all clean fclean re run
