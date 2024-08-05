# Organizando os arquivos no makefile

# Nome do projeto
PROJ_NAME=hello

# Arquivos .c
C_SOURCE=$(wildcard ./source/*.c)

# Arquivos .h
H_SOURCE=$(wildcard ./source/*.h)

# Arquivos objeto
OBJ=$(subst .c,.o,$(subst source,objects,$(C_SOURCE)))

# Compilador
CC=gcc

# Flags (opções) para o compilador
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

# Comando utilizado como target do clean
RM = rm -rf

#########################
# Compilação e linkagem #
#########################
all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	@ echo 'Construindo o binário usando o linker GCC: $@'
	$(CC) $^ -o $@
	@ echo 'Binário pronto!: $@'
	@ echo ' '

./objects/%.o: ./source/%.c ./source/%.h
	@ echo 'Construindo target usando o compilador GCC: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

./objects/main.o: ./source/main.c $(H_SOURCE)
	@ echo 'Construindo target usando o compilador GCC: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

objFolder:
	@ mkdir -p objects

clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ rmdir objects

.PHONY: all clean