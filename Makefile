# Fichiers sources
SRC	= sources/Banque.cpp \
sources/Arrivee.cpp  \
sources/Caissier.cpp  \
sources/Client.cpp  \
sources/Evenement.cpp  \
sources/FileAttente.cpp  \
sources/FinService.cpp  \
sources/SED.cpp    \
main.cpp

# Fichiers objets
OBJ = $(SRC:.cpp = .o)

# Nom du programme
NAME = simulationBanque

all: $(NAME)
	@rm -f $(OBJ)

$(NAME): $(OBJ)
	@g++ -o $(NAME) $(SRC) -W -Wall -Wextra -Werror -g3
	@rm -f $(OBJ)

clean:
	@rm -rf *.o
	@rm -rf sources/*.o
	@rm -rf sources/*.exe

fclean:    clean
	@rm -rf $(NAME)
	@rm -rf *~

re:	fclean all