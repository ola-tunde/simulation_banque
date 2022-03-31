### Simulation de banque

# Contexte
Il s’agit de simuler le fonctionnement d’une banque contenant un nombre fix´e de caissiers, et recevant des  lients qui arrivent de manière pseudo-aléatoire. Lorsqu’un client arrive, si un caissier est libre, il prend en charge le client, sinon le client prend place dans une file d’attente (supposées être de taille infinie et commune à tous les caissiers).

Le but de la simulation est de fournir des résultats statistiques sur les différents acteurs de la simulation. Pour cela, on donne en entrée de la simulation:

• La durée estimée de la simulation `dureePrevue`: c’est la durée au bout de laquelle la banque n’accepte plus de nouveaux clients. Bien entendu, ceux qui se trouvent déjàa dans la file seront servis.
• Le nombre de caissiers `nbCaissiers`.
• Le temps moyen de service de chaque caissier `tempsMoyenService` (on suppose donc qu’ils ne sont pas tous également performants).
• Le temps moyen entre deux arrivées successives de clients `tempsEntreArrivees`.

On souhaite obtenir, à la fin de la simulation, les résultats suivants :
• La durée réelle de la simulation (c’est-à-dire la durée au bout de laquelle tous les clients qui se trouvaient encore dans la file ont été servis).
• Les longueurs maximale et moyenne de la file d’attente.
• Le nombre de clients servis (au total, et par caissier).
• Le taux d’occupation de chque caissier.
• Le temps moyen d’attente d’un client dans la file.

# Hypothèses de fonctionnement
• Les clients sont honnêtes (ils ne cherchent pas à passer devant ceux qui étaient avant eux).
• Les clients sont patients (quelle que soit la longueur de la file, ils attendent leur tour et ne quittent pas la banque avant d’avoir été servis).
• Les clients sont paresseux (si plusieurs caissiers sont libres lors de l’arrivée d’un client, ce dernier se fera servir par le caissier de plus faible numéro, celui situé le plus près de la porte d’entrée).
• Les caissiers ne sont jamais fatigués : dès la fin de traitement d’un client, le caissier en reprend un si la file n’est pas vide.
• On dispose d’un générateur aléatoire permettant de déterminer les arrivées de clients et les temps de service effectifs des caissiers.
• La simulation repose sur la succession d’évènements discrets: on suppose qu’entre deux évènenements consécutifs, il ne se passe rien de marquant dans le système, donc le temps varie de manière discrète.
