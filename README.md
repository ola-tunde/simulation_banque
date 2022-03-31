### Simulation de banque

# Contexte
Il s’agit de simuler le fonctionnement d’une banque contenant un nombre fix´e de caissiers, et recevant des  lients qui arrivent de manière pseudo-aléatoire. Lorsqu’un client arrive, si un caissier est libre, il prend en charge le client, sinon le client prend place dans une file d’attente (supposées être de taille infinie et commune à tous les caissiers).

Le but de la simulation est de fournir des résultats statistiques sur les différents acteurs de la
simulation. Pour cela, on donne en entrée de la simulation:

• La durée estimée de la simulation `dureePrevue`: c’est la durée au bout de laquelle la banque n’accepte
plus de nouveaux clients. Bien entendu, ceux qui se trouvent d´ej`a dans la file seront servis...
• Le nombre de caissiers.
• Le temps moyen de service de chaque caissier (on suppose donc qu’ils ne sont pas tous
´egalement performants ...).
• Le temps moyen entre deux arriv´ees successives de clients.
On souhaite obtenir, `a la fin de la simulation, les r´esultats suivants :
• La dur´ee r´eelle de la simulation (c’est-`a-dire la dur´ee au bout de laquelle tous les clients qui
se trouvaient encore dans la file ont ´et´e servis).
• Les longueurs maximale et moyenne de la file d’attente.
• Le nombre de clients servis (au total, et par caissier).
• Le taux d’occupation de chque caissier.
• Le temps moyen d’attente d’un client dans la file.
Hypoth`eses de fonctionnement
Pour r´ealiser cette simulation, on adopte un certain nombre d’hypoth`eses simplificatrices :
• Les clients sont honnˆetes (ils ne cherchent pas `a passer devant ceux qui ´etaient l`a avant eux).
• Les clients sont patients (quelle que soit la longueur de la file, ils attendent leur tour et ne
quittent pas la banque avant d’avoir ´et´e servis).
• Les clients sont paresseux  (si plusieurs caissiers sont libres lors de l’arriv´ee d’un client,
ce dernier se fera servir par le caissier de plus faible num´ero, celui situ´e le plus pr`es de la
porte d’entr´ee).
1
• Les caissiers ne sont jamais fatigu´es : d`es la fin de traitement d’un client, le caissier en
reprend un si la file n’est pas vide.
• On dispose d’un g´en´erateur al´eatoire permettant de d´eterminer les arriv´ees de clients et les
temps de service effectifs des caissiers.
• La simulation repose sur la succession d’´ev´enements discrets: on suppose qu’entre deux
´ev´enements cons´ecutifs il ne se passe rien de marquant dans le syst`eme, donc le temps varie
de mani`ere discr`ete.