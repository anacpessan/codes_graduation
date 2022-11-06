// JOGO QUEM QUER SER UM MILIONÁRIO?

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Baseado nos tutoriais que assiti, serve para poder acentuar as palavras.
using namespace std;

int main (){

int Resposta1, Resposta2, Resposta3, Resposta4, Resposta5; 
setlocale (LC_ALL, "portuguese"); //Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado. 
system ("color e5"); //alteração de cor de fundo e texto do prompt

cout << "---------------------------------------------" << endl;
cout << "------- QUEM QUER SER UM MILIONÁRIO? --------" << endl;
cout << "---------------------------------------------" << endl;
cout << "----------- Versão Cantoras do Pop ----------" << endl;
cout << "---------------------------------------------" << endl;

cout << "Atenção player você deverá ler as perguntas e responder utilizando as opções 1 ou 2. Let's Go!" << endl; 

cout << "[Pergunta 1] Atenção jogador! Que foi a artista responsável pela seguinte frase ""Brazil, I'm devastated?" << endl;

cout << "[1] Katy Perry ou [2] Lady Gaga"<< endl;
cin >> Resposta1;
if (Resposta1 == 2) 
	{
	cout << "Parabéns você acertou! " << endl;
	}
else
	{
		cout << "Que pena! Você errou!" << endl;
	}
cout << "[Pergunta 2] Fique atento! A ex-cantora Rihanna não lança um novo album a quantos anos?" << endl;
cout << "[1] 2 anos ou [2] 1 milhão de anos" << endl;
cin >> Resposta2;

if (Resposta2 == 2)
	{
	cout << "Parabéns você acertou! " << endl;
	}
else
	{
		cout << "Que pena! Você errou!" << endl;
	}
cout << "[Pergunta 3] O jogador de futebol Gerard Piqué ficou conhecido como? " << endl;
cout << "[1] O ex da cantora Shakira ou [2] Um dos melhores jogadores do mundo" << endl;
cin >> Resposta3; 

 if (Resposta3 == 1)
	{
	cout << "Parabéns você acertou! " << endl;
	}
else
	{
		cout << "Que pena! Você errou!" << endl;
	}
cout << "[Pergunta 4] Qual das cantoras a seguir foi cogitada para cantar na posse do presidente Lula?" << endl;
cout << "[1] Ivete Sangalo ou [2] Pablo Vittar" << endl;
cin >> Resposta4;

if (Resposta4 == 2)
	{
	cout << "Parabéns você acertou! " << endl;
	}
else
	{
		cout << "Que pena! Você errou!" << endl;
	}
	
if ( Resposta1 == 2, Resposta2 == 2, Resposta3 == 1, Resposta4 == 2)
	{
	cout << "Parabéns! Você acertou todas as perguntas! Vamos para a pergunta de R$ 1 MILHÃO DE REAIS!" << endl;
	cout << "[Pergunta 5] Valendo R$ 1 MILHÃO DE REAIS! Qual o número de prêmios já ganhados pela cantora Beyoncé?" << endl;
	cout << "[1] 585 prêmios ou [2] 661 prêmios" << endl;
	cin >> Resposta5;

	if (Resposta5 == 2)
			{
			cout << "PARABÉNS VOCÊ ACABA DE GANHAR R$ 1 MILHÃO DE REAIS E É O MAIS NOVO MILIONÁRIO!" << endl;
			}
else
	{
		cout << "Que pena! Você errou!" << endl;
	}
	
	}
		else	
			{
			cout << "Parabéns por sua participação! Infelizmente você não atingiu o score para a última pergunta!" << endl;
			cout << "Fim do programa" << endl;
			}
}
