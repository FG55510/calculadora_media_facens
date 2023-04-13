#include <iostream>
#include <cctype>//biblioteca que permite a utilizacao do comando topper
using namespace std;
int main() {
    float ac1, ac2, ag, af, soma;// declaracao das variaveis usadas
    char continua;//variavel que guardara a condicao para continuar
    string nome, ra;//variaveis armazenando o nome e o RA do aluno
    do {//codigo que sera executado e repetido
        
        cout << "digite o RA do aluno: " << endl;//interface para o usuario
        cin >> ra;//atribuicao da nota entrada pelo usuario
        
        cout << "digite o nome do aluno: " << endl;//interface para o usuario
        cin >> nome;//atribuicao da nota entrada pelo usuario
        
        cout << "digite a nota da AC1: " << endl;//interface para o usuario
        cin >> ac1;//atribuicao da nota entrada pelo usuario
    
        cout << "digite a nota da AC2: " << endl;//interface para o usuario
        cin >> ac2;//atribuicao da nota entrada pelo usuario
    
        cout << "digite a nota AG: " << endl;//interface para o usuario
        cin >> ag;//atribuicao da nota entrada pelo usuario
        
        cout << "digite a nota AF: " << endl;//interface para o usuario
        cin >> af;//atribuicao da nota entrada pelo usuario
        
        ac1 = ac1 * 0.15;
        ac2 = ac2 * 0.35;
        ag = ag * 0.1;
        af = af * 0.4;
        //Multiplicacao das notas pelo devido peso
        
        soma = (ac1 + ac2 + af + ag);//soma das notas
        
        cout <<"Alune: "<< nome <<" RA: " << ra << "\nA soma das notas eh " << soma << endl;//interface para o usuario informando a soma das notas
        
        
        if (soma >= 5){
            cout << "Voce foi aprovado! =)" << endl;
        }//motra a mensagem caso o usuario foi aprovado
        
        
        else if (soma >= 3){
            cout << "Voce esta de recuperacao :/" << endl;
        }//motra a mensagem caso o usuario ficou de recuperacao
        
        else{
            cout << "Voce nao foi aprovado! :(" << endl;
        }//motra a mensagem caso contrario
        
        cout << "deseja continuar? s/n: " << endl;//interface para o usuario
        cin >> continua;//atribuicao da nota entrada pelo usuario
        
        continua = toupper(continua);//faz com que o caracter digitado fique maiusculo
        
    } while(continua == 'S');//Condicao de repeticao

    return 0;
}