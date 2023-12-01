//Сделано RedFoxMain 
//Git hub: https://github.com/RedFoxMain

#include <iostream>
#include <string>


std::string botStep(){
                std::string array[3] = {"Камень","Ножницы","Бумага
"};
        int index = rand() % 3;
        return array[index];
}

void showWinner(std::string player, std::string bot){
        if (player == bot){
                        std::cout << "Ничья";
        }
        else if ((player == "Ножницы" && bot == "Бумага") ||        (player == "Камень" && bot == "Ножницы") ||
                                 (player == "Бумага" && bot == "Ка
мень")){

                        std::cout << "Игрок победил";
                }else{
             std::cout << "Бот победил";
        }
                std::cout << std::endl;
}

int main() {
                std::string comand;
                std::cout << "Камень, Ножницы или Бумага: " << std
::endl;
        while (comand != "exit"){
                        std::cout << "Игрок: ";
            std::cin >> comand;
                        std::string bot = botStep();
                        std::cout << "Бот: " << bot << std::endl;
            showWinner(comand, bot);
        }
}