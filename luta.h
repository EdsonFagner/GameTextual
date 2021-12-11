#include <iostream>
#include <cstdlib>
#include <windows.h>
#ifndef LUTA_H
#define LUTA_H
#include "conexao.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string nome;
string nomeinmg;
int x, y;

//Comando para controlar a posição das letras na tela!
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int HP1=100, HP2=50, ATK1=30, ATK2=20, DEF1=10,DEF2=15, DANO1, DANO2; //Variaveis dos status!

int ATK (void);
int STATUS (void);

int ATKINIMIGO (void);
int STATUS2 (void);

int PERSONAGEM (void); //dcs1=Decisão 1!
int INIMIGO (void);
int BATALHA (void);
int RBATALHA (void); //Resultado da batalha!
int RST1 (void); //RST=Reset do status!
int RST2 (void);
int VENCEU (void);


int bruxa=0;
int a, b, i, j=0; //Variaveis (da noção) do ataque ou defesa!

int LUTAR(void) 
{
	system ("cls");
	BATALHA ();
}

int ATK (void)
{
DANO1=ATK1;	
}

int ATKINIMIGO (void)
{
DANO2=ATK2;
}


int STATUS (void)
{
	gotoxy (1,1);
	cout<< "PERSONAGEM=" <<nome <<endl;
	cout<< "SANGUE=" <<HP1 <<endl;
	cout<< "ATAQUE=" <<ATK1 <<endl;
	cout<< "DEFESA=" <<DEF1 <<endl;
}

int STATUS2 (void)
{
	gotoxy (60,1);
	cout<< "INIMIGO=" <<nomeinmg;
	gotoxy (60,2);
	cout<< "SANGUE DO INIMIGO=" <<HP2;
	gotoxy (60,3);
	cout<< "ATAQUE DO INIMIGO=" <<ATK2;
	gotoxy (60,4);
	cout<< "DEFESA DO INIMIGO=" <<DEF2;
}

int PERSONAGEM (void)
{
	int x;
gotoxy (31,4);	
cout<< "1=ATAQUE 2=DEFESA" <<endl;	
gotoxy (31,5);
cin>> x;
switch (x)
{
	
	case 1:
		gotoxy (31,6);
		cout<< "ATACANDO..." <<endl;
		Sleep (2000);
		a=1;
		ATK ();
		break;
	case 2:
		gotoxy (31,7);
		cout<< "DEFENDENDO..." <<endl;
		Sleep (2000);
		a=2;
		break;
	default:
	cout<< "OPCAO INVALIDA" <<endl;
	Sleep (1000);
	system ("cls");
		
}	
}

int INIMIGO (void)
{
	int y;
	gotoxy (31,4);
	cout<< "INIMIGO" <<endl;
	y=rand()%2;
	switch (y)
	{
		case 0:
			gotoxy (31,5);
			cout<< "ATACANDO..." <<endl;
			Sleep (2000);
			b=1;
			ATKINIMIGO ();
			break;
		case 1:
			gotoxy (31,5);
			cout<< "DEFENDENDO..." <<endl;
			Sleep (2000);
			b=2;
			break;		
	}
	
}

int BATALHA (void)
{
	STATUS ();
	STATUS2 ();
	PERSONAGEM ();
	Sleep (1000);
	system ("cls");
	STATUS ();
	STATUS2 ();
	INIMIGO ();
	Sleep (1000);
	system ("cls");
	RBATALHA ();
	system ("cls");	
	
		if ((HP1<=0) && (HP2>0))
	{
		gotoxy (31,4);
		cout<< "VOCE PERDEU!" <<endl;
		Sleep (2000);
		system ("cls");
		bruxa=0;
		j=0;
		RST1 ();
		RST2 ();
		dcs2 ();
	}
	if((HP2<=0)&&(HP1>0))
	{
		gotoxy (31,4);
		cout<< "VOCE GANHOU!" <<endl;
		Sleep (2000);
		system ("cls");
		i=1;
		if ((bruxa==3) && (i==1))
			{
				RST1 ();
				VENCEU ();
			}
		if (j==2)
			{
				RST1 ();
				bxr3 ();
			}	
		if (bruxa==4)
			{
				RST1 ();
				bxr2 ();
			}	
		if (bruxa==2)
			{
				RST1 ();
				bxr4 ();
			}
		RST1 ();
		RST2 ();
		return 0;
		
	}
	if((HP1<=0)&&(HP2<=0))
	{
		RST1 ();
		RST2 ();
		gotoxy (31,4);
		cout<< "EMPATOU!" <<endl;
		Sleep (2000);
		RST1 ();
		LUTAR ();
	}
	
	LUTAR ();
		
}

int RBATALHA (void)
{
	if ((a==1) && (b==1))
	{
		HP1=HP1-DANO2;
		HP2=HP2-DANO1;
		STATUS ();
		STATUS2 ();
	}
	if ((a==2) && (b==2))
	{
		DEF1=DEF1;
		DEF2=DEF2;
		STATUS ();
		STATUS2 ();
	}
	if ((a==1) && (b==2))
	{
		if (DEF2<DANO1)
		{
			HP2=HP2-(DANO1-DEF2);
			STATUS ();
			STATUS2 ();
		}
		if (DEF2>DANO1)
		{
			HP2=HP2-0;
			STATUS ();
			STATUS2 ();
		}
	}
	if	((a==2) && (b==1))
	{
		if (DEF1<DANO2)
		{
			HP1=HP1-(DANO2-DEF1);
			STATUS ();
			STATUS2 ();
		}
		if (DEF2>DANO1)
		{
			HP2=HP2-0;
			STATUS ();
			STATUS2 ();
		}
	}
}


int RST1 (void)
{
HP1=100;		
}

int RST2 (void)
{
HP2=50;		
}

int VENCEU (void)
{
	system ("cls");
	gotoxy (31,1);
	cout<< "GAME SAVED!";
	x=31;
	y=27;
while (true)
{
	gotoxy (x,y);
	cout<< "ARTIX: PARABENS " <<nome;
	cout<< " VOCE DERROTOU TODAS AS BRUXAS DO UNIVERSO, SERA DIGNO DO MEU RESPEITO ETERNAMENTE!";
	Sleep (500);
	system ("cls");
	--y;
if (y==1)
{
	system ("cls");
	gotoxy (31,1);
	cout<< "GAME OVER" <<endl;
	Sleep (2000);
	system ("cls");
	break;
}	
}
system ("PAUSE");
j=0;
bruxa=0;
main ();
} 

#endif
