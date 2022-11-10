#include <stdio.h>
#include "conio.h"
#include <iomanip>
#include <string.h>
#include <windows.h>
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "gconio.h"
#include "funcfam.h"

using namespace std;
int main (){

    char op= 'S';
    char opc;
    int cadastro = 0;
    setlocale(LC_ALL, "portuguese");

Desenhasgpf();
textcolor(WHITE);
Carregar();
cout << "                            ";
gotoxy(40,20);
textcolor(WHITE);
cout << "Pressione qualquer tecla para continuar";
opc = getch();

gotoxy(29, 23);
    printf("CARREGANDO");

    gotoxy(40,18);
    printf("          ");

    gotoxy(79,24);
    printf("        ");
    textbackground(BLACK);
    gotoxy(40, 23);
    printf("                                                        ");

    textbackground(MAGENTA);
    gotoxy(40, 23);

    for (int c = 16; c <= 25; c++){//fazer a parte grafica do carregamento
        printf(" ");
        Sleep(150);
    }
    for (int c = 26; c <= 66; c++){
        printf(" ");
        Sleep(70);
    }
    for (int c = 67; c <= 71; c++){
        printf(" ");
        Sleep(250);
    }

    textbackground(WHITE);
    system("cls");
    gotoxy(1,1);

    do{




        system("cls");

        pessoal p[50];
        //setlocale(LC_ALL, "portuguese");
        textcolor(BLACK);
        Desenhasgpf();
        gotoxy(50,13);
        printf("1 - Planejamento");
        gotoxy(50,15);
        printf("2 - Meta");
        gotoxy(50,17);
        printf("3 - Planilha");
        gotoxy(50,19);
        printf("4 - Simule seu investimento");
        gotoxy(108,29);
        printf ("0 - Sair");


        do{
            //so da p gerar a planilha se tiver cadastro
            if(cadastro == 0 && opc == '3'){
                printf("\n\nVocê ainda nao fez o cadastro. Cadastre-se para acessar esta opção: ");
            }
            do{

                opc = getch();

                if (opc == '0'){
                    abort();
                }

                //checar se a opcao digitada é valida
                if(opc != '1' && opc != '2' && opc != '3' && opc!= '4'){
                    printf("\n\nOpcao invalida, digite novamente: ");
                }

            }while(opc != '1' && opc != '2' && opc != '3' && opc != '4');
        }while(cadastro == 0 && opc == '3');

        switch(opc){
        case '1':
            {
                system("cls");
                cadastro = 1;
                receberValor(p);

                break;
            }
        case '2':
            {
                system("cls");
                meta();
                break;
            }
        case '3':
            {
                system("cls");
                showplanilha(p);
                planilha(p);
                break;
            }
        case '4':
            {
                system("cls");
                investimento();

            }
        default:
            {
                break;
            }
        }
        gotoxy(38,26);
        printf("Deseja retornar ao menu? <s|n>");
        op = getch();
    }while(toupper(op)=='S');
    //esse trecho serve para retornar ao menu depois que o usuario digitar as informações
}


