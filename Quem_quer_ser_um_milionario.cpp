// JOGO QUEM QUER SER UM MILION�RIO?

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Baseado nos tutoriais que assiti, serve para poder acentuar as palavras.
using namespace std;

int main (){

int Resposta1, Resposta2, Resposta3, Resposta4, Resposta5; 
setlocale (LC_ALL, "portuguese"); //Utilizamos a fun��o setlocale() para fazer a adapta��o do programa ao idioma desejado. 
system ("color e5"); //altera��o de cor de fundo e texto do prompt

cout << "---------------------------------------------" << endl;
cout << "------- QUEM QUER SER UM MILION�RIO? --------" << endl;
cout << "---------------------------------------------" << endl;
cout << "----------- Vers�o Cantoras do Pop ----------" << endl;
cout << "---------------------------------------------" << endl;

cout << "Aten��o player voc� dever� ler as perguntas e responder utilizando as op��es 1 ou 2. Let's Go!" << endl; 

cout << "[Pergunta 1] Aten��o jogador! Que foi a artista respons�vel pela seguinte frase ""Brazil, I'm devastated?" << endl;

cout << "[1] Katy Perry ou [2] Lady Gaga"<< endl;
cin >> Resposta1;
if (Resposta1 == 2) 
	{
	cout << "Parab�ns voc� acertou! " << endl;
	}
else
	{
		cout << "Que pena! Voc� errou!" << endl;
	}
cout << "[Pergunta 2] Fique atento! A ex-cantora Rihanna n�o lan�a um novo album a quantos anos?" << endl;
cout << "[1] 2 anos ou [2] 1 milh�o de anos" << endl;
cin >> Resposta2;

if (Resposta2 == 2)
	{
	cout << "Parab�ns voc� acertou! " << endl;
	}
else
	{
		cout << "Que pena! Voc� errou!" << endl;
	}
cout << "[Pergunta 3] O jogador de futebol Gerard Piqu� ficou conhecido como? " << endl;
cout << "[1] O ex da cantora Shakira ou [2] Um dos melhores jogadores do mundo" << endl;
cin >> Resposta3; 

 if (Resposta3 == 1)
	{
	cout << "Parab�ns voc� acertou! " << endl;
	}
else
	{
		cout << "Que pena! Voc� errou!" << endl;
	}
cout << "[Pergunta 4] Qual das cantoras a seguir foi cogitada para cantar na posse do presidente Lula?" << endl;
cout << "[1] Ivete Sangalo ou [2] Pablo Vittar" << endl;
cin >> Resposta4;

if (Resposta4 == 2)
	{
	cout << "Parab�ns voc� acertou! " << endl;
	}
else
	{
		cout << "Que pena! Voc� errou!" << endl;
	}
	
if ( Resposta1 == 2, Resposta2 == 2, Resposta3 == 1, Resposta4 == 2)
	{
	cout << "Parab�ns! Voc� acertou todas as perguntas! Vamos para a pergunta de R$ 1 MILH�O DE REAIS!" << endl;
	cout << "[Pergunta 5] Valendo R$ 1 MILH�O DE REAIS! Qual o n�mero de pr�mios j� ganhados pela cantora Beyonc�?" << endl;
	cout << "[1] 585 pr�mios ou [2] 661 pr�mios" << endl;
	cin >> Resposta5;

	if (Resposta5 == 2)
			{
			cout << "PARAB�NS VOC� ACABA DE GANHAR R$ 1 MILH�O DE REAIS E � O MAIS NOVO MILION�RIO!" << endl;
			}
else
	{
		cout << "Que pena! Voc� errou!" << endl;
	}
	
	}
		else	
			{
			cout << "Parab�ns por sua participa��o! Infelizmente voc� n�o atingiu o score para a �ltima pergunta!" << endl;
			cout << "Fim do programa" << endl;
			}
}
