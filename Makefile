SRC = src/Banque.cpp \
src/Arrivee.cpp  \
src/Caissier.cpp  \
src/Client.cpp  \
src/Evenement.cpp  \
src/FileAttente.cpp  \
src/FinService.cpp  \
src/SED.cpp    \
main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = simulationBanque

all : compile run #docs

run : 
	./$(NAME)


compile : $(NAME)

$(NAME) : $(OBJ)                                                       
	g++ -o $(NAME) $(SRC) -W -Wall -Wextra -Werror -g3
	rm -f $(OBJ)

clean :
	rm -f $(OBJ)

fclean:	clean
	rm -rf $(NAME)
	rm -rf *~
	rm -rf docs

re : fclean all

$(V).SILENT:

DOXYFILE = Doxyfile

docs :
	doxygen $(DOXYFILE)