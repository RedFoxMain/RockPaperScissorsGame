//Сделано RedFoxMain 
//Git hub: https://github.com/RedFoxMain


#include <iostream>
#include <string>
#include <random>
#include <array>
#include <iterator>
using namespace std;

random_device rd;
mt19937 gen(rd());
 
int random(int low, int high)
{
    uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

string botStep(){
	array ar = {"Камень","Ножницы","Бумага"};
	int r = random(0,2);
	return ar[r];
}

void showWinner(string player, string bot){
	if (player == bot){
		cout << "Ничья";
	}
	else if (player == "Ножницы"){
		if (bot == "Камень"){
			cout << "Бот победил";
		}else{
			cout << "Игрок победил";
		}
	}
	else if (player == "Камень"){
		if (bot == "Бумага"){
			cout << "Бот победил";
		}else{
			cout << "Игрок победил";
		}
	}
	else if (player == "Бумага"){
		if (bot == "Ножница"){
			cout << "Бот победил";
		}else{
			cout << "Игрок победил";
		}
	
	}
}

int main() {
	string symb;
	cout << "Камень, Ножницы или Бумага: " << endl;
	while (symb != "exit"){
		cout << endl;
		cout << "Игрок: ";
		cin >> symb;
		if (symb != "exit"){
		string bot = botStep();
		cout << "Бот: " << bot << endl;
		showWinner(symb, bot);
		}
	}
	
}

