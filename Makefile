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

all : docs compile  

compile : $(NAME)

$(NAME) : $(OBJ)                                                       
	g++ -o $(NAME) $(SRC) -W -Wall -Wextra -g3
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