typedef struct pessoal{
    char nome[50];
    char nomecontasfixas[50];
    double valores;
    double contasfixas;
    char nomecontasvariaveis[50];
    double contasvariaveis;
    double total;
    double restante;
    int o;
    int l;
    int m;
    int n;
}pessoal;

using namespace std;

void receberValor(pessoal *p);
void meta(pessoal *p);
void meta();
void planilha(pessoal *p);
void showplanilha(pessoal *p);
void investimento();
void Desenhasgpf();
void DesenhaDesp();
void DesenhaPlan();
void Desenhainvest();
void DesenhaMeta();
void Carregar();
void Carregar(){
int y=30;
int x=120;
if (y==0 && x==0){
    textbackground(WHITE);

    cout << "  ";
    x = x-1;
    Carregar();

}

}
void Desenhainvest(){
gotoxy(21,3);
cout <<"   _____    _   _   __      __   ______     _____    _______    _____    _____  ";
gotoxy(21,4);
cout <<"  |_   _|  | \\ | |  \\ \\    / /  |  ____|   / ____|  |__   __|   _   _   |  __ \\ ";
gotoxy(21,5);
cout <<"    | |    |  \\| |   \\ \\  / /   | |__     | (___       | |       | |    | |__) | ";
gotoxy(21,6);
cout <<"    | |    | . ` |    \\ \\/ /    |  __|     \\___ \\      | |       | |    |  _  /  ";
gotoxy(21,7);
cout <<"   _| |_   | |\\  |     \\  /     | |____    ____) |     | |      _| |_   | | \\ \\  ";
gotoxy(21,8);
cout <<"  |_____|  |_| \\_|      \\/      |______|  |_____/      |_|     |_____|  |_|  \\_\\ ";
}
void DesenhaPlan(){
 gotoxy(20,3);
 cout <<" _____      _                     _   _   _____    _         _    _          ";
 gotoxy(20,4);
 cout <<"|  __ \\    | |           /\\      | \\ | | |_   _|  | |       | |  | |      /\\         " ;
 gotoxy(20,5);
 cout <<"| |__) |   | |          /  \\     |  \\| |   | |    | |       | |__| |     /  \\        " ;
 gotoxy(20,6);
 cout <<"|  ___/    | |         / /\\ \\    | . ` |   | |    | |       |  __  |    / /\\ \\       " ;
 gotoxy(20,7);
cout <<"| |        | |____    / ____ \\   | |\\  |  _| |_   | |____   | |  | |   / ____ \\      " ;
gotoxy(20,8);
cout <<"|_|        |______|  /_/    \\_\\  |_| \\_| |_____|  |______|  |_|  |_|  /_/    \\_\\     ";
}
void DesenhaMeta(){
gotoxy(39,3);
cout <<"  __  __    ______    _______ ";
gotoxy(39,4);
cout<<" |  \\/  |  |  ____|  |__   __|    /\\  ";
gotoxy(39,5);
cout<<" | \\  / |  |  |__       | |      /  \\   ";
gotoxy(39,6);
cout<<" | |\\/| |  |   __|      | |     / /\\ \\  ";
gotoxy(39,7);
cout<<" | |  | |  |  |____     | |    / ____ \\ ";
gotoxy(39,8);
cout<<" |_|  |_|  |______|     |_|   /_/    \\_\\ ";
}
void Desenhasgpf(){

gotoxy(39,3);
cout << "   _____      _____      _____      ______       ";
gotoxy(39,4);
cout << "  / ____     / ____|    |  __ \\    |  ____|       ";
gotoxy(39,5);
cout << " | (___      | |  __    | |__) |   | |__        ";
gotoxy(39,6);
cout << "  \\___ \\     | | |_ |   |  ___/    |  __|        ";
gotoxy(39,7);
cout << "  ____) |    | |__| |   | |        | |        ";
gotoxy(39,8);
cout << " |_____/     \\______|   |_|        |_|        ";

}
void DesenhaDesp(){

gotoxy(10,1);
cout <<"  _____      ______       _____      _____      ______       _____                     _____ " << endl;
gotoxy(10,2);
cout <<" |  __ \\    |  ____|     / ____|    |  __ \\    |  ____|     / ____|        /\\         / ____|" << endl;
gotoxy(10,3);
cout <<" | |  | |   | |__       | (___      | |__) |   | |__       | (___         /  \\        | (___ " << endl;
gotoxy(10,4);
cout <<" | |  | |   |  __|       \\___ \\     |  ___/    |  __|       \\___  \\      / /\\ \\       \\___  \\ " << endl;
gotoxy(10,5);
cout <<" | |__| |   | |____      ____) |    | |        | |____      ____) |     / ____ \\       ___)  |" << endl;
gotoxy(10,6);
cout <<" |_____/    |______|    |_____/     |_|        |______|    |_____/     /_/    \\_\\     |_____/" << endl;
}
double calcularResto(pessoal *p){
//Fazer Calculo das despesas
    double total, aux = 0, aux2 = 0;
    int k=0, a=p[0].m;
    do
    {
        aux += p[k].contasfixas;
        aux2 += p[k].contasvariaveis;
        k++;
        a--;
    }while(a > 0);

    return total = aux + aux2;
}
void receberValor(pessoal *p){

char op2;
double qua;
p[0].o=0;
p[0].l=0;



            Desenhasgpf();
            gotoxy(55,14);
            textcolor(MAGENTA);
            cout << "FORMULÁRIO";
            textcolor(BLACK);

            textbackground(BROWN);
            gotoxy(40,17);
            for (int x=0; x<10; x++){
                cout << "    ";
            }

            gotoxy(40,20);
            for (int x=0; x<7; x++){
                cout << "    ";
            }

            gotoxy(40,20);
            printf("Renda mensal: ");
            gotoxy(40,17);
            printf("Nome:");
            gets(p[0].nome);
            fflush(stdin);
            //nome também foi pra struct pra facilitar nossa vida
            gotoxy(53,20);
            scanf("%lf", &p[0].valores);


            if(p[0].valores <= 0){
                gotoxy(40,25);
                printf("Formato inválido. Digite valores positivos");
                gotoxy(40,27);
                printf("Renda mensal: ");
                scanf("%lf", &p[0].valores);
            }
            textbackground(WHITE);
            system("cls");
            textbackground(WHITE);
            DesenhaDesp();

            gotoxy(20,10);
            printf("Despesas fixas");

            gotoxy(20,12);

            printf("Paga moradia? <s/n>: ");
            op2 = getch();//ver se esse getch funciona no seu computador

            fflush(stdin);
            textbackground(BROWN);
            if(toupper(op2)!='N'){
                gotoxy(20,14);
                printf("Quanto? ");
                gotoxy(27,14);
                scanf("%lf", &p[1].valores);

                getchar();
            }


            char resp;
            int i = 0;



//esse campo do do while é para que o usuario digite suas proprias contas
            textbackground(WHITE);


            do{

                DesenhaDesp();

                textcolor(MAGENTA);
                gotoxy(20,16);
                printf("Declare suas contas mensais");
                textcolor(BLACK);
                gotoxy(20,18);
                printf("Ex: água, luz, escola, faculdade, assinatura stream e etc...\n");
                textbackground(BROWN);

                gotoxy(20,22);
                printf("Digite o valor:");
                gotoxy(20,20);
                printf ("Nome da conta:");
                gotoxy(35,20);
                scanf("%s", p[i].nomecontasfixas);
                fflush(stdin);
                gotoxy(36,22);


                scanf("%lf", &p[i].contasfixas);

                gotoxy(37,26);
                printf("Deseja adicionar mais contas? <s/n> ");



                p[0].o++;
                p[0].m = p[0].o;
                fflush(stdin);

                do{
                    resp = getch();//ver se esse getch funciona no seu computador
                    textbackground(WHITE);
                    system("cls");
                    textbackground(WHITE);
                    gotoxy(20,14);
                    printf("Despesas fixas");
                }while (toupper(resp) != 'S' && toupper(resp) != 'N');



                i++;

            }while(toupper(resp) == 'S');

            i = 0;

            system("cls");
                DesenhaDesp();
                textcolor(MAGENTA);
                gotoxy(30,10);
                printf ("Despesas Variáveis");
                textcolor(BLACK);
                gotoxy(30,14);
                printf("Ex: Lazer, cartões de crédito e etc...");
                gotoxy(30,12);
                printf("Tem despesas varíaveis? <s/n>");
                resp = getch();



              do{

                if(toupper(resp)== 'S'){
                    DesenhaDesp();

                    textcolor(BLACK);
                    textbackground(BROWN);
                    gotoxy(30,16);
                    printf("Declare-as: ");
                    scanf("%s", p[i].nomecontasvariaveis);
                    gotoxy(30,18);
                    printf("Digite o valor:");
                    fflush(stdin);
                    scanf("%lf", &p[i].contasvariaveis);
                    gotoxy(37,26);
                    printf("Deseja adicionar mais contas? <s/n> ");
                    p[0].l++;
                    p[0].n= p[0].l;
                    fflush(stdin);
                do{
                    resp = getch();//ver se esse getch funciona no seu computador
                    textbackground(WHITE);
                    system("cls");
                    textbackground(WHITE);
                    textcolor(MAGENTA);
                    gotoxy(30,10);
                    printf ("Despesas Variáveis");
                    textcolor(BLACK);
                    gotoxy(30,12);
                    printf("Ex: Lazer, cartões de crédito e etc...");
                    gotoxy(30,14);
                    printf("Declare novamente");

                }while (toupper(resp) != 'S' && toupper(resp) != 'N');

                i++;
                }

            }while(toupper(resp) == 'S');

            system("cls");
            DesenhaDesp();
            textcolor(MAGENTA);
            gotoxy(25,10);
            printf("Suas Despesas Fixas: ");
            gotoxy(25,12);
            printf("Valor da moradia: %.2lf", p[1].valores);
            i=0;
            int k=14;
            do{
                gotoxy(25,k);
                printf ("%s => %.2f", p[i].nomecontasfixas, p[i].contasfixas);
                k++;
                i++;
                p[0].o--;

            }while(p[0].o > 0);
            textcolor(BLACK);
            textcolor(BLUE);
            gotoxy(65,10);
            printf("Suas Despesas Variáveis:");
            i=0;
            k = 12;
            do{
                if(p[0].l<= 0){
                    gotoxy(65,11);
                    printf("Não há despesas varíaveis este mês");
                }
                    gotoxy(65,k);
                    printf ("%s => %.2lf", p[i].nomecontasvariaveis, p[i].contasvariaveis);
                    k++;
                    i++;
                    p[0].l--;
            }
            while(p[0].l > 0);
            textcolor(BLACK);
            qua=calcularResto(p);
            p[0].restante = p[0].valores - p[1].valores - qua;
            //system("cls");

            if(p[0].restante <= 0){
                textcolor(RED);
                gotoxy(42,20);
                printf("Seu saldo tá Negativo");
                textcolor(BLACK);
            }
            else{
                textcolor(GREEN);
                gotoxy(42,20);
                printf("Seu saldo tá Positivo");
                textcolor(BLACK);
            }
            gotoxy(45,22);
            printf ("Restante: %.2lf", p[0].restante);

            if(p[0].restante > 0){
                gotoxy(28,26);
                system("Pause");
                system("cls");
                DesenhaDesp();
                meta(p);
            }

            //coloquei o restante na struct pra facilitar nossas vidas na hora de passar a informação
    }

void meta(pessoal *p){

    //essa função serve para calcular o valor que o usuario pretende economizar

    float economizar;
    double calcEconom;
    char eco;
    gotoxy(10,10);
    printf("Deseja economizar este mês? <s|n> ");
    scanf("%s", &eco);

    while(toupper(eco)!='N'){
        gotoxy(10,12);
        printf("Digite quanto pretende economizar este mês: ");
        scanf("%f", &economizar);

        calcEconom= p[0].restante-economizar;

        if(calcEconom < 0){
            gotoxy(10,14);
            textcolor(RED);
            printf("Seu saldo este mês está negativo, não pode gastar mais nada");
            textcolor(BLACK);
        }
        else{
            gotoxy(10,14);
            textcolor(GREEN);
            printf("Você conseguirá economizar o quanto deseja %.2lf", economizar);
            gotoxy(10,16);
            printf("Você ainda terá de saldo: %.2lf", calcEconom);
            textcolor(BLACK);
        }
        break;
    }

}
void meta(){
// essa função serve como opção do menu, se o usuário quiser alcançar uma meta de dinheiro até x mês
    char op;
    double meta, result;
    int m;
    DesenhaMeta();
    do{
        DesenhaMeta();
        gotoxy(10,15);
        printf("Em até quantos meses você deseja conseguir tal meta?: ");
        gotoxy(10,13);
        printf("Informe o valor que você deseja alcançar como meta de dinheiro guardado: ");
        textbackground(BROWN);
        scanf("%lf",&meta);
        gotoxy(63,15);
        scanf("%d",&m);
        textbackground(WHITE);



        result = meta/m;

         if(meta <= 0  || m <=0){
            gotoxy(10,17);
         textcolor(RED);
            printf("Seu pobre, você não tem condições de juntar NADA");
        textcolor(BLACK);
        }
        else{
            textcolor(GREEN);
            gotoxy(10,17);
            printf("Sua meta é: R$: %.lf", meta);
            gotoxy(10,19);
            printf("Você precisará economizar por mês: R$ %.lf\n", result);
            textcolor(BLACK);
        }
        gotoxy(10,22);
        system("pause");

        system("cls");
        gotoxy(10,2);
        printf("Deseja consultar novas metas (s ou n)?: ");
        scanf(" %c", &op);


    }while(toupper(op) != 'N');
}

void planilha(pessoal *p){
    FILE *arq1;
    arq1= fopen("write.txt", "w");
    int var= p[0].m;
    int var2= p[0].n;

    if(arq1 != NULL){
        DesenhaPlan();
        textcolor(GREEN);
        gotoxy(10,10);
        printf("Arquivo aberto com sucesso");
        textcolor(BLACK);

        fprintf(arq1, "\nNome: ");
        fprintf(arq1, "%s", p[0].nome);
        fprintf(arq1, "\nRenda mensal: ");
        fprintf(arq1, "%.2lf", p[0].valores);
        fprintf(arq1, "\nDespesas Mensais:");
        fprintf(arq1, "\nAluguel: ");
        fprintf(arq1, "%.2lf", p[1].valores);


        int i=0;

        do{
            fprintf(arq1, "\n%s: ", p[i].nomecontasfixas);
            fprintf(arq1, "%.2lf\n", p[i].contasfixas);

            i++;
            var--;
        }while(var > 0);

        int j=0;

        do{

            fprintf(arq1, "\n%s: ", p[j].nomecontasvariaveis);
            fprintf(arq1, "%.2lf\n", p[j].contasvariaveis);

            j++;
            var2--;
        }while(var2 > 0);
        fprintf(arq1, "\nRestante: ");
        fprintf(arq1, "%.2lf", p[0].restante);
    }
    fclose(arq1);
}

void showplanilha(pessoal *p){
    int var= p[0].m;
    int var2= p[0].n;
    int x=15;
    int y=15;
    gotoxy(10,13);
    printf("Nome: %s", p[0].nome);
    gotoxy(10,14);
    printf("Renda mensal: %.2lf", p[0].valores);
    gotoxy(10,15);
    printf("Despesas mensais ");
    gotoxy(10,16);
    printf("Aluguel: %.2lf", p[1].valores);

    int i=0;

        int aux2;
        gotoxy(35,13);
        textcolor(GREEN);
        printf("Despesas Fixas");
        textcolor(BLACK);
        do{
            aux2 = strlen(p[i].nomecontasfixas);
            gotoxy(35,y);
            printf("%s: ", p[i].nomecontasfixas);
            aux2 = aux2 + 36;
            gotoxy(aux2,y);
            printf("%.2lf", p[i].contasfixas);


            y++;
            i++;
            var--;
        }while(var > 0);

        int j=0;
        int aux=0;
        gotoxy(60,13);
        textcolor(BROWN);
        printf("Despesas Variaveis");
        textcolor(BLACK);
        do{
            aux = strlen(p[j].nomecontasvariaveis);
            gotoxy(60,x);
            printf("%s: ", p[j].nomecontasvariaveis);
            aux = aux+61;
            gotoxy(aux,x);
            printf("%.2lf", p[j].contasvariaveis);
            x++;

            j++;
            var2--;
        }while(var2 > 0);
        gotoxy(10,17);
        printf("Restante: ");
        gotoxy(19,17);
        printf("%.2lf", p[0].restante);
    }

void investimento(){
    double valorinvest, valorretorno, calcinvest;
    int tempoinvest;
    Desenhainvest();
    gotoxy(10,10);
    printf("Bem-vindo(a) a nossa parte de simulação de rentabilidade.");
    gotoxy(10,11);
    printf("Aqui calculamos quanto você deseja investir, para isso precisamos das seguintes informações: ");
    gotoxy(10,13);
    printf("Quanto deseja investir? ");
    scanf("%lf", &valorinvest);
    gotoxy(10,15);
    printf("Por quanto tempo deseja investir essa quantia? <tempo em meses> ");
    scanf("%d", &tempoinvest);
    gotoxy(10,17);
    printf("Quanto deseja de retorno? ");
    scanf("%lf", &valorretorno);
    calcinvest= valorinvest*tempoinvest*(0.01);
    system("cls");
    Desenhainvest();
    gotoxy(10,14);
    printf("Esse é a simulação de retorno que receberá aplicando %.1lf por %d meses: %.2lf", valorinvest, tempoinvest, valorinvest+calcinvest);

    if(valorretorno > calcinvest){
        gotoxy(10,16);
        printf("Não será possivel retornar o valor %.2lf a cada %d meses", valorretorno, tempoinvest);
    }
    else{
        textcolor(GREEN);
        gotoxy(10,18);
        printf("Valor retornado esperado: %.2lf \nValor retornado: %.2lf", valorretorno, calcinvest);
        textcolor(BLACK);
    }

}
