prog : main.o Arrivee.o Banque.o Caissier.o Client.o Evenement.o FileAttente.o FinService.o SED.o
	g++ -o prog main.o Arrivee.o Banque.o Caissier.o Client.o Evenement.o FileAttente.o FinService.o SED.o


main.o : main.cpp
	g++ -c -Wall main.cpp -o main.o

Arrivee.o : Arrivee.cpp
	g++ -c -Wall Arrivee.cpp -o Arrivee.o

Banque.o : Banque.cpp
	g++ -c -Wall Banque.cpp -o Banque.o

Caissier.o : Caissier.cpp
	g++ -c -Wall Caissier.cpp -o Caissier.o

Client.o : Client.cpp
	g++ -c -Wall Client.cpp -o Client.o

Evenement.o : Evenement.cpp
	g++ -c -Wall Evenement.cpp -o Evenement.o

FileAttente.o : FileAttente.cpp
	g++ -c -Wall FileAttente.cpp  -o FileAttente.o

FinService.o : FinService.cpp
	g++ -c -Wall FinService.cpp -o FinService.o

SED.o : SED.cpp
	g++ -c -Wall SED.cpp -o SED.o

clean: 
	rm *.o prog
