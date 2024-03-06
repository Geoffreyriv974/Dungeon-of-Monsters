#include <iostream>
#include <ctime>
#include <vector>

#include "player.h"
#include "charactere.h"

int main(){

    std::srand(std::time(0));

    int userReponse;
    int userMenu;
    std::string userName;

    do {
        std::cout << "\n|| Dungeon and monsters ||\n" << std::endl;

        std::cout << "Creer son personnage [1]" << std::endl;
        std::cout << "Quitter l'aventure [2]\n" << std::endl;

        std::cout << "Que voulez vous faire ? ";
        std::cin >> userReponse;
        std::cout << "______________________________________________" << std::endl;

        if (userReponse == 1) {
            std::cout << "Creation de votre joueur\n " << std::endl;

            std::cout << "Quel sera votre pseudo ? ";
            std::cin >> userName;

            std::cout << "\nBienvenue " << userName << std::endl;

        } else if (userReponse == 2) {
            std::cout << "\nA bientot aventurier !\n" << std::endl;
            return 0;

        } else {
            std::cout << "\nEntrer invalide ! Veuillez choisir 1 ou 2.\n" << std::endl;
        }

    } while (userReponse > 2);


    do {

        std::cout << "______________________________________________" << std::endl;

        std::cout << "\n|| Dungeon and monsters ||\n" << std::endl;

        std::cout << "Marchand [1]" << std::endl;
        std::cout << "Auberge [2]" << std::endl;
        std::cout << "Au combat [3]" << std::endl;
        std::cout << "Quitter l'aventure [4]\n" << std::endl;

        std::cout << "Que voulez vous faire ? ";
        std::cin >> userMenu;

        if(userMenu == 1){
            std::cout << "Marchand" << std::endl;
        }
        else if(userMenu == 2){
            std::cout << "Auberge" << std::endl;
        }
        else if(userMenu == 3){

            std::cout << "______________________________________________" << std::endl;

            std::vector<Character*> tabMonsters;

            Player user("Joueur", userName, 20, 10, 20, "epee", "bouclier", 0);

            Character Slime("Non-joueur", "un Slime", 10, 2, 5, 10);
            Character Gobelin("Non-joueur", "un Gobelin", 15, 5, 3, 10);
            Character Gargouille("Non-joueur", "une Gargouille", 22, 7, 5, 25);
            Character Squelette("Non-joueur", "un Squelette", 30, 6, 15, 30);
            Character Slime_geant("Non-joueur", "un Slime Geant", 25, 8, 9, 30);
            Character Roi_gobelin("Non-Joueur", "un Roi gobelin", 50, 19, 20, 200);
            Character Dragon("Non-joueur", "un Dragon", 100, 100, 100, 1000);
            Character Divin("Nom-Joueur", "une Diviniter", 1000, 500, 500, 10000);

            tabMonsters.push_back(&Slime);
            tabMonsters.push_back(&Gobelin);
            tabMonsters.push_back(&Gargouille);
            tabMonsters.push_back(&Squelette);
            tabMonsters.push_back(&Slime_geant);
            tabMonsters.push_back(&Roi_gobelin);
            tabMonsters.push_back(&Dragon);
            tabMonsters.push_back(&Divin);

            int randomIndex = std::rand() % tabMonsters.size();

            Character* randomMonster = tabMonsters[randomIndex];

            std::string pseudoMonsterRandom = randomMonster->getPseudo();
            int lifeMonsterRandom = randomMonster->getLife();

            std::cout << "\n" << pseudoMonsterRandom << " est apparue !" << std::endl;
            std::cout << "Ce monstre a " << lifeMonsterRandom << " points de vie.\n" << std::endl;

            std::cout << "A toi de jouer " << userName << std::endl;
            std::cout << "Tu a " << user.getLife() << " points de vie.\n";

            int userAction;
            std::string attackType;

            do {

                std::cout << "______________________________________________" << std::endl;

                std::cout << "\nAttaquer [1]" << std::endl;
                std::cout << "Defendre [2]" << std::endl;
                std::cout << "Utiliser une potion [3]" << std::endl;
                std::cout << "Prendre la fuite [4]\n" << std::endl;

                std::cout << "\nQue voulez-vou faire ? ";
                std::cin >> userAction;

                if (userAction == 1){

                    int userAttack = user.getDegInitiaux();

                    int randomAttack = std::rand() % 3 + 1;

                    if (randomAttack == 1) {
                        userAttack /= 2;
                        attackType = " << COUT LEGER ! >>";
                    } else if (randomAttack == 3) {
                        userAttack *= 2;
                        attackType = " << COUT CRITIQUE ! >>";
                    }else{
                        userAttack *= 1;
                        attackType = " ";
                    }

                    randomMonster->TakeDamage(userAttack);

                    std::cout << "\nDegats infliges par " << userName << " : " << userAttack << attackType << std::endl;

                    if(randomMonster->getLife() < 0){

                        std::cout << "______________________________________________" << std::endl;

                        std::cout << "\nPoint de vie restants du monstre : 0" << std::endl;
                        std::cout << "\nLe monstre a etait terasser !! Bravo aventurier !\n" << std::endl;
                        std::cout << "Vous remporter 10 piece d'or" << std::endl;
                        std::cout << "Votre solde s'eleve donc a : " << user.getWallet().getMoney() << "\n" << std::endl;

                        std::cout << "______________________________________________" << std::endl;

                        break;
                    }else{
                        std::cout << "\nPoints de vie restants du monstre : " << randomMonster->getLife() << std::endl;
                    }

                } else if (userAction == 2){
                    return 0;
                }else if (userAction == 3){
                    return 0;
                }else if (userAction == 4){
                    std::cout << "______________________________________________" << std::endl;
                    std::cout << "\nCe monstre est trop fort fuyons !!!\n" << std::endl;
                    std::cout << "______________________________________________" << std::endl;
                    return 0;
                }else{
                    std::cout << "\nAction impossible !\n";
                }

            } while ( randomMonster->getLife() > 0);

        }

        else if(userMenu == 4){
            std::cout << "\nA bientot aventurier !\n" << std::endl;
            return 0;

        } else{
            std::cout << "\nEntrer invalide ! Veuillez choisir un chiffre valide.\n" << std::endl;
        }

    } while (userMenu > 4);

}