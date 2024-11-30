# AIX_GD3_FilRouge

Notes : 

(Blueprint)

J'ai du abandonner mon projet que j'avais malheuresement explosé en essayant de suivre le cours mais j'ai tenté de recréer des mécaniques spécifiques sur celui là.

J'ai configuré les cases mini-jeu pour qu'elles ouvrent les niveaux et communiquent le score avec la structure des joueurs à travers l'instance.
Le joueur qui a lancé le mini jeu est celui qui reçoit les points s'il reussit le mini jeu.
J'ai crée un écran de démarrage qui explique les touches et les mécaniques qui met en pause le jeu la première fois qu'il est activé pour que le joueur puisse lire.
Ainsi qu'un écran de fin qui affiche les scores des joueurs.
Les effets des cases sont signalés par des widget qui aparaissent et disparaissent au bout de deux secondes.

J'ai reproduit les cases bonus qui existaient dans mon projet de base, elles donnent des points au joueur qui marche dessus : 
Pas de case avancer, le but du jeu est de reculer le plus possible pour amasser des points sur un plateau court. Le premier joueur qui arrive au bout met fin à la partie.
Les mini jeux sont les meilleures cases sur lequelles tomber, si un joueur les réussit, il remporte plus de points que sur n'importe quel autre case.

(C++)

Le score du jeu de collecte est entièrement géré en c++, il communique les résultats au score du jeu de plateau.
Il s'agit d'un actor component attaché à un actor en BP qui augmente le score du joueur avant de se détruire.
Il se retrouve dans deux actors et ne donne pas le même score.
Le timer est aussi géré en C++, il s'agit d'un widget qui affiche simplement un texte qui se modifie chaque seconde avant d'ouvrir le niveau plateau lorsqu'il arrive à 0.
Il est aussi utilisé dans le memory.

(Esthétique et obstacle rencontrés)
Je n'ai pas réussi à respecter le gamedoc de base qui promettait un jeu de mahjong à cause de plusieurs obstacles sur le chemin : 

-J'ai mit du temps à me rendre compte que visual studio la source de la plupart de mes maux, tout est allé bien plus vite lorsque j'ai installé Rider vers les derniers jours
de travaux sur le projet. Jusqu'à la, mon ordinateur avait des freeze constants et plus de milles avertissements à chaque fois que j'essayais de compiler.
-Il est anormalement dur de trouver des modèles 3D gratuits de tuiles de mahjong, le mahjong riichi est bien moins populaire que ce que j'imaginais.
-J'ai tout misé sur les deux derniers weekend car je devais souvent me rendre à l'hopital ce qui a grandement impacté mon temps de travail. Je n'ai pas pour but de me plaindre à travers
ça, je pense juste que ça a grandement affecté mon rendu.

A la place, j'ai trouvé des modèles 3D et textures plus simples d'utilisation et j'ai tenté de créer une ambiance de village enneigé, c'est aussi plus simple de créer un platformer
avec cette thématique. J'ai tenté d'utiliser l'outil landscape pour tenter de faire un décor loin qui semble loin derrière le plateau.

KNOWN BUGS :
Le joueur qui joue après un minijeu est toujours le joueur 0. Pour être sincère, j'ai eu un peu peur de toucher au modulo...

