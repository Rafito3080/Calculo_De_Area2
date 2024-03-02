#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int escolha;
	int SCh;
	double base;
	double altura;
	double baseMA;
	double baseME;
	double resu;
	cout << "Como posso te ajudar a calcular a área de figuras planas? Caso queira fazer a área de um quadrado, pressione 1. Caso quiser calcular a área de um retângulo, pressione 2. Pressione 3 caso queira calcular a área de um triângulo. Selecione 4 se quiser calcular a área de um trapézio. Ou pressione 5 para calcular a área de um losango. \n";
	cin >> escolha;
	cin.ignore();
	switch (escolha){
	case 1:
		cout << "Qual o valor do lado do quadrado? ";
        cin >> base; //pega o valor do lado do quadrado
        cin.ignore();
        resu = base*base; //faz a conta
        cout << "A área do quadrado é de: " << resu ;
        break;
	case 2:
		cout << "Qual é o valor da base do retângulo? ";
		cin >> base; //pega o valor da base
		cin.ignore();
		cout << "Qual é o valor da altura? ";
		cin >> altura; //pega o valor da altura
		cin.ignore();
		resu = base*altura; // faz a conta
		cout << "A área do retângulo é de: " << resu; //printa o resultado da conta
		break;
	case 3:
		cout << "Qual é o valor da base do triângulo? ";
		cin >> base;  // pega o valor da base do triângulo
		cin.ignore();
		cout << "Qual é o valor da altura? ";
		cin >> altura;  // pega o valor da altura do triângulo
		cin.ignore();
		resu = (base*altura) / 2; // faz a conta
		cout << "A área do triângulo é de " << resu; // printa o resultado
		break;
	case 4:
		cout << "Qual é o valor da base menor do trapézio? ";
		cin >> baseME; // pega o valor da base menor
		cin.ignore();
		cout << "Qual é o valor da base maior? ";
		cin >> baseMA; // pega o valor da base maior
		cin.ignore();
		cout << "Qual é o valor da altura? ";
		cin >> altura; // pega o valor da altura
		cin.ignore();
		resu = (baseMA + baseME) * altura / 2;
		cout << "A área do trapézio é de " << resu;
		break;
	case 5:
		cout << "Qual o valor da diagonal maior do losango? ";
		cin >> baseMA;  // pega o valor da diagonal maior do losango
		cin.ignore();
		cout << "Qual é o valor da diagonal menor? ";
		cin >> baseME; // pega o valor da diagonal menor
		cin.ignore();
		resu = (baseMA * baseME) /2;
		cout << "A área desse losango é de " << resu;
		break;
	default:
		cout << "Tente novamente com os números válido;, 1, 2, 3, 4 ou 5;";
		cin >> SCh;
		cin.ignore();
		switch (SCh){
			case 1:
				cout << "Qual o valor do lado do quadrado? ";
		        cin >> base; //pega o valor do lado do quadrado
		        cin.ignore();
		        resu = base*base; //faz a conta
		        cout << "A área do quadrado é de: " << resu ;
		        break;
			case 2:
				cout << "Qual é o valor da base do retângulo? ";
				cin >> base; //pega o valor da base
				cin.ignore();
				cout << "Qual é o valor da altura? ";
				cin >> altura; //pega o valor da altura
				cin.ignore();
				resu = base*altura; // faz a conta
				cout << "A área do retângulo é de: " << resu; //printa o resultado da conta
				break;
			case 3:
				cout << "Qual é o valor da base do triângulo? ";
				cin >> base;  // pega o valor da base do triângulo
				cin.ignore();
				cout << "Qual é o valor da altura? ";
				cin >> altura;  // pega o valor da altura do triângulo
				cin.ignore();
				resu = (base*altura) / 2; // faz a conta
				cout << "A área do triângulo é de " << resu; // printa o resultado
				break;
			case 4:
				cout << "Qual é o valor da base menor do trapézio? ";
				cin >> baseME; // pega o valor da base menor
				cin.ignore();
				cout << "Qual é o valor da base maior? ";
				cin >> baseMA; // pega o valor da base maior
				cin.ignore();
				cout << "Qual é o valor da altura? ";
				cin >> altura; // pega o valor da altura
				cin.ignore();
				resu = (baseMA + baseME) * altura / 2;
				cout << "A área do trapézio é de " << resu;
				break;
			case 5:
				cout << "Qual o valor da diagonal maior do losango? ";
				cin >> baseMA;  // pega o valor da diagonal maior do losango
				cin.ignore();
				cout << "Qual é o valor da diagonal menor? ";
				cin >> baseME; // pega o valor da diagonal menor
				cin.ignore();
				resu = (baseMA * baseME) /2;
				cout << "A área desse losango é de " << resu;
				break;
			default:
				cout << "Número pressionado é inválido, volte e tente novamente mais tarde.";
				break;
	}
		break;
}
      return 0;
}
