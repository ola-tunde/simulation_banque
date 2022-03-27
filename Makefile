SRC = sources/Banque.cpp \
sources/Arrivee.cpp  \
sources/Caissier.cpp  \
sources/Client.cpp  \
sources/Evenement.cpp  \
sources/FileAttente.cpp  \
sources/FinService.cpp  \
sources/SED.cpp    \
main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = simulationBanque

all : $(NAME)

$(NAME) : $(OBJ)                                                       
	g++ -o $(NAME) $(SRC) -W -Wall -Wextra -Werror -g3
	rm -f $(OBJ)

clean :
	rm -f $(OBJ)

fclean:	clean
	rm -rf $(NAME)
	rm -rf *~

re : fclean all

$(V).SILENT: