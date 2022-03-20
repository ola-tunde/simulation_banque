#TODO corriger au besoin le makefile

# Classe de fichiers
FILES = $(HD)SED.h $(HD)Evenement.h $(HD)Banque.h $(HD)Caissier.h $(HD)FileAttente.h $(HD)Client.h $(HD)FinService.h $(HD)Arrivee.h

#Objets
OBJ = SED.o Evenement.o Banque.o Caissier.o FileAttente.o Client.o FinService.o Arrivee.o

# Path fichiers headers
HD = headers/

#path fichiers sources 
SRC = sources/

#path fichiers objets 
PHOBJ = obj/

# Commande compilateur 
CC = g++ -c -Wall

# Compiler le main
main.o : $(OBJ) 
	$(CC) prog $(OBJ)

# Compiler chaque classe et les dépendances
SED.o : $(HD)SED.h $(HD)Evenement.h 
Banque.o : $(HD)Banque.h $(HD)Caissier.h $(HD)SED.h
Caissier.o : $(HD)Caissier.h 
FileAttente.o : $(HD)FileAttente.h $(HD)Client.h 
Client.o : $(HD)Client.h
Evenement.o : $(HD)Evenement.h $(HD)SED.h
FinService.o : $(HD)FinService.h $(HD)Evenement.h
Arrivee.o : $(HD)Arrivee.h $(HD)Evenement.h
main.o : $(FILES)

clean: 
	rm *.o
