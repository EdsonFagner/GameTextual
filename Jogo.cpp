#include <cstdlib>
#include <iostream>
#include <windows.h>
#include "luta.h"
#include "conexao.h"
using namespace std;

int dcs1 (void); //dcs=DECISAO
int dcs2 (void);
int dcs3 (void); 
int dcs4 (void);
int dcs5 (void);
int porao (void);
int bxr1 (void); //bxr=BRUXA
int bxr2 (void);
int bxr3 (void);
int bxr4 (void);
int escuro (void);
int papel (void);
int portadoabismo (void);
int artix (void);
int terrasanguinaria (void);
int esconderijo (void);
int suspeito (void);
int toca (void);
int lobo (void);

int atualizar (void);//Atualiza o nome e a arma do personagem!
int s;//Variavel da decisão de escolha da arma!
int lb=1;//Variavel para saber que passou pelo lobo!


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(void)
{	
	dcs1();
	atualizar ();
	dcs2();
	atualizar ();
	dcs3 ();
	atualizar ();
	terrasanguinaria ();
	
if (lb=1)
{
	lb=0;
	terrasanguinaria ();
}
system("PAUSE");
return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               
 int dcs1 (void) 
{
	cout<< "ESCOLHA O NOME DE SEU PERSONAGEM!" <<endl;
    cin>> nome;
    cout<< "ESCOLHA SUA ARMA! 1=ESPADA 2=ARCO E FLEXA" <<endl;
    cin>> s;   
                
    switch (s) 
{
           case 1:
           		cout<< "PERSONAGEM=" <<nome <<endl;
                cout<< "ARMA=ESPADA" <<endl;
                Sleep (2000);
                break;
           case 2:
           		cout<< "PERSONAGEM=" <<nome <<endl;
                cout<< "ARMA=ARCO E FLEXA" <<endl;
                Sleep (2000);
                break;
           default:
                cout<< "OPCAO INVALIDA" <<endl;
                Sleep(1000);
                system ("cls");
                s=0;
                dcs1 ();
                        
}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int dcs2 (void)
{
	int casa;
	system ("cls");
	atualizar ();
	cout<< "ESTA EM CASA! DESEJA SAIR? 1=SIM 2=NAO" <<endl;
	cin>> casa;
	switch (casa) {
		case 1:
			system ("cls");
			atualizar ();
			dcs3 ();
		case 2:
			system ("cls");
			atualizar ();
			porao ();					
								
		default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		casa=0;
		system ("cls");
		dcs2 ();	
				}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int porao (void){
	int porao1;
			system ("cls");
			atualizar ();
			cout<< "UM BARULHO NO PORAO, DESEJA VERIFICAR? 1=SIM 2=NAO" <<endl;
			cin>> porao1;
			switch (porao1){
				case 1:
					system ("cls");
					atualizar ();
					bxr1 ();
				case 2:
					system ("cls");
					atualizar ();
					dcs2 ();
			default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		system ("cls");
		atualizar ();
		porao ();
							}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int bxr1 (void){
	int bxr;
	system ("cls");
	atualizar ();
	cout<< "HA UMA BRUXA SONDANDO SEU PORAO, DESEJA ATACALA DE SURPRESA? 1=SIM 2=NAO" <<endl;
	cin>> bxr;
	switch (bxr){
		case 1:
			system ("cls");
			atualizar ();
			escuro ();
		case 2:
			system ("cls");
			atualizar ();
			dcs2 ();
	default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		system ("cls");
		atualizar ();
		bxr1 ();
				}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int escuro (void){
	int esc; 
	system ("cls");
	atualizar ();
	cout<< "PARECE MEIO ESCURO AQUI, DESEJA CONTINUAR? 1=SIM 2=NAO" <<endl;
	cin>> esc;
	switch (esc){
		case 1:
			system ("cls");
			nomeinmg="KASANDRA";
			LUTAR ();
		
		case 2:
			system ("cls");
			atualizar ();
			dcs2 ();
	default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		system ("cls");
		atualizar ();
		bxr1 ();
				}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int dcs3 (void)
{
	int cacar;
	system ("cls");
	atualizar ();
	cout<< 	"ESTA UM BELO DIA PARA CACAR BRUXAS, NAO ACHA? 1=SIM 2=NAO" <<endl;
	cin>> cacar;
	switch (cacar){
		case 1:
			system ("cls");
			atualizar ();
			dcs4 ();
		case 2:
			system ("cls");
			atualizar ();
			papel ();
		default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		system ("cls");
		atualizar ();
		dcs3 ();		
	}
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int papel (void){
	int ppl;
	system ("cls");
	atualizar ();
	cout<< "UMA FOLHA DE PAPEL SUSPEITA NO CHAO! LER? 1=SIM 2=NAO" <<endl;
	cin>> ppl;
	switch (ppl){
		case 1:
			system ("cls");
			atualizar ();
			cout<< "MATE A BRUXA ->LAUHI<- PARA GANHAR O JOGO!" <<endl;
			Sleep (3000);
			dcs3 ();
		case 2:
			system ("cls");
			atualizar ();
			papel ();
				}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int dcs4 (void)
{
	int lugar;
	system ("cls");
	atualizar ();
	cout<< "DESEJA SE AVENTURAR EM QUAL LOCAL? 1=PORTA DO ABISMO 2=TERRA SANGUINARIA" <<endl;
	cin>> lugar;
	switch (lugar){
		case 1:
			system ("cls");
			atualizar ();
			portadoabismo ();
		case 2:
			system ("cls");
			atualizar ();
			terrasanguinaria ();
		default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		system ("cls");
		atualizar ();
		dcs4 ();
	}
}	        

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int portadoabismo (void)
{
int abismo, entrar;	
cout<< 	"BEM VINDO A PORTA DO ABISMO! DESEJA EXPLORAR A AREA? 1=SIM 2=NAO" <<endl;
cin>> abismo;
switch (abismo){
	case 1:
		system ("cls");
		atualizar ();
		cout<< "A LENDA DIZ QUE PORTA DO ABISMO E UM LUGAR MAGICO, ONDE A UM ABISMO QUE NELE ESTA ESCONDIDO A --=ESPADA DO UNIVERSO=--, UMA DAS MELHORES ARMAS DO MUNDO, POREM JAMAIS UM GUERREIRO SAIU VIVO DO MESMO." <<endl;
		system ("PAUSE");
		system ("cls");
		atualizar ();
		cout<< "O QUE FAREMOS AGORA? SAIBA QUE ESSA E UMA DECISAO ARRISCADA, PENSE BEM ANTES DE QUALQUER ACAO! 1=IR EM BUSCA DA ESPADA 2=SAIR DA PORTA DO ABISMO" <<endl;
		cin>> entrar;
if 	(entrar==1)
{
system ("cls");	
artix ();
}

if (entrar==2){
	system ("cls");
	atualizar ();
	dcs4 ();
}

else {
	system ("cls");
	atualizar ();
	cout<< "OPCAO INVALIDA" <<endl;
	Sleep (1000);
	system ("cls");
	atualizar ();
	portadoabismo ();
}
case 2:
	system ("cls");
	atualizar ();
	dcs4 ();
	
				}
	
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int artix (void){
	int senha;
do{
	
		system ("cls");
		atualizar ();
		cout<< "OLA MEU NOME E ARTIX, SOU O GUARDIAO DA PORTA DO ABISMO. PARA ENTRAR TEM QUE ME DIZER A SENHA, MAS SE ERRAR NAO ME RESPONSABILIZO PELAS CONSEQUENCIAS! ESCOLHA UM NUMERO DE 1 A 3..." <<endl;
		cin>> senha;		
} while ((senha>3) || (senha==0));
switch (senha)
{
	case 1:
		system ("cls");
		atualizar ();
		cout<< "ARTIX: SENHA INCORRETA! SOFRA AS CONSEQUENCIAS" <<endl;
		Sleep (2000);
		cout<< "VOCE CAIU NO ABISMO!" <<endl;
		Sleep (2000);
		cout<< "GAME OVER!" <<endl;
		Sleep (2000);
        dcs2 ();
	case 2:
		system ("cls");
		atualizar ();
		cout<< "ARTIX: SENHA CORRETA! PEGUE A ESPADA E VA EMBORA, ANTES QUE EU MUDE DE IDEIA!" <<endl;
		cout<< "VOCE EQUIPOU A ESPADA DO UNIVERSO, GANHOU MAIS 20 DE ATAQUE!" <<endl;
		ATK1=ATK1+20;
		system ("PAUSE");
		terrasanguinaria ();
	case 3:
		system ("cls");
		atualizar ();
		cout<< "ARTIX: SENHA INCORRETA! SOFRA AS CONSEQUENCIAS!" <<endl;
		Sleep (2000);
		cout<< "VOCE CAIU NO ABISMO!" <<endl;
		Sleep (2000);
		cout<< "GAME OVER!" <<endl;
		Sleep (2000);
		system ("cls");
		dcs2 ();	
}	
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int terrasanguinaria (void)
{
	int terra;
	system ("cls");
	atualizar ();
cout<< "BEM VINDO A TERRA SANGUINARIA! DESEJA EXPLORAR A AREA? 1=SIM 2=NAO" <<endl;
cin>> terra;	
switch (terra) 
{
	case 1:
		system ("cls");
		atualizar ();
		cout<< "TERRA SANGUINARIA E UM LUGAR ONDE HABITAM AS PIORES BRUXAS QUE EXISTEM NO MUNDO, SE UM DIA ESBARRAR COM UMA DESSAS NAO EXITE EM MATA-LAS!" <<endl;
		system ("PAUSE");
		system ("cls");
		atualizar ();
		esconderijo ();	
	case 2:
		system ("cls");
		atualizar ();
		Sleep (3000);
		lobo ();
	default:
		cout<< "OPCAO INVALIDA" <<endl;
		Sleep(1000);
		system ("cls");
		terrasanguinaria ();
}	
}      

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int esconderijo (void)
{
    int escbxr;
    system ("cls");
    atualizar ();
    cout<< "DESEJA IR EM BUSCA DE UM POSSIVEL ESCONDERIJO DAS BRUXAS? 1=SIM 2=NAO" <<endl;
    cin>> escbxr;
    switch (escbxr)
	{
    	case 1:
    		suspeito ();
    	case 2:
    		lobo ();
		default:
			cout<< "OPCAO INVALIDA" <<endl;
			Sleep(1000);
			system ("cls");
			terrasanguinaria ();
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int suspeito (void)
{
	int spt;
	system ("cls");
	atualizar ();
	cout<< "VOCE ENCONTROU UM LUGAR SUSPEITO DESEJA VERIFICAR-LO? 1=SIM 2=NAO" <<endl;
	cin>> spt;
	switch (spt)
	{
		case 1:
			toca ();
		case 2:
			lobo ();
		default:
			cout<< "OPCAO INVALIDA" <<endl;
			Sleep(1000);
			system ("cls");
			suspeito ();
	}
	
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int toca (void)
{
	int bruxas1;
		system ("cls");
		cout<< "HA TRES BRUXAS PLANEJANDO UM ATAQUE AOS HUMANOS: ->MORGAN<-, ->LAUHI<- E ->ZORAIDA<-..." <<endl;
    	system ("PAUSE");
    	system ("cls");
		cout<<  "ENTRE AS TRES LAUHI E A MAS FORTE, POIS SEU PODER SE ELEVA QUANDO PERTO DE OUTRAS BRUXAS." <<endl;
		system ("PAUSE");
		system ("cls");
		atualizar ();
		cout<< "MAS CUIDADO... ESSAS PODEM TE SURPREENDER. QUAL DESSAS BRUXAS DESEJA ATACAR PRIMEIRO? 1=MORGAN 2=LAUHI 3=ZORAIDA" <<endl;
		cin>> bruxas1;
	switch (bruxas1)
	{
		case 1:
			bxr2 ();
		case 2:
			bxr3 ();
		case 3:
			bxr4 ();
		default:
			cout<< "OPCAO INVALIDA" <<endl;
			Sleep(1000);
			system ("cls");
			toca ();
	}
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int lobo (void)
{
	system ("cls");
	gotoxy (31,1);
	cout<< "UM LOBO SELVAGEM TE ATACOU!" <<endl;
	system ("PAUSE");
	nomeinmg="LOBO";
	ATK2=10;
	DEF2=10;
	HP2=200;
	lb=1;
	LUTAR ();		
}

int bxr2 ()
{
	nomeinmg="MORGAN";
	ATK2=30;
	HP2=180;
	DEF2=5;
	j+=1;
	bruxa=2;
	LUTAR ();
}

int bxr3 ()
{
	nomeinmg="LAUHI";
	ATK2=30;
	HP2=250;
	DEF2=0;
	bruxa=3;
	LUTAR ();
}

int bxr4 ()
{
	nomeinmg="ZORAIDA";
	ATK2=30;
	HP2=180;
	DEF2=5;
	j+=1;
	bruxa=4;
	LUTAR ();
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int atualizar (void)
{
	while (s==1)
	{
		cout<< "PERSONAGEM=" <<nome <<endl;
		cout<< "ARMA=ESPADA" <<endl;
		break;
	}
	while (s==2)
	{
		cout<< "PERSONAGEM=" <<nome <<endl;
		cout<< "ARMA=ARCO E FLEXA" <<endl;
		break;
	}
}


