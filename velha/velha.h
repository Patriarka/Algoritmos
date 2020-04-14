//Protótipos
int menu();
void preencher(char* vetor);
int aleatoria(int* vez);
void atribui(char* j1, char* j2, int p1);
void mostrar(char* vetor);
void escolha(char j1, char j2, char* v, int vez);
void exibe();
int checa(char* v, char j1, char j2);


int menu()
{
    int op;

    printf("1.Jogar\n");
    printf("2.Sair\n");
    printf("Opção: ");
    scanf("%d",&op);

    if(op != 1) {
        printf("Programa finalizado!\n");
        return 0;
    }

    return op;
}

void preencher(char* vetor)
{
	for(int i = 0; i < 9; i++){
		vetor[i] = ' ';
	}
}

int aleatoria(int* vez)
{
    int aux = 0;
    int p1 = 1;

	srand(time(NULL));
	aux = rand() % 2;
	p1 += aux;
	*vez = p1;

	printf("Jogador %d inicia o jogo!\n", p1);

    return p1;
}

void atribui(char* j1, char* j2, int p1)
{
    if(p1 == 1) { 
		printf("Jogador 1: X\n");
		printf("Jogador 2: O\n");

        *j1 = 'X';
        *j2 = 'O';
    } else {
		printf("Jogador 1: O\n");
		printf("Jogador 2: X\n");

        *j1 = 'O';
        *j2 = 'X';
    }  
}

void exibe()
{
    printf("\t1 | 2 | 3\n");
	printf("\t--|---|---\n");
	printf("\t4 | 5 | 6\n");
	printf("\t--|---|---\n");
	printf("\t7 | 8 | 9\n");
    printf("\n");
}

void mostrar(char* vetor)
{
	printf("-------------------\n");
	printf("\t%c | %c | %c\n",vetor[0],vetor[1],vetor[2]);
	printf("\t--|---|---\n");
	printf("\t%c | %c | %c\n",vetor[3],vetor[4],vetor[5]);
	printf("\t--|---|---\n");
	printf("\t%c | %c | %c\n",vetor[6],vetor[7],vetor[8]);
}

void escolha(char j1, char j2, char* v, int vez)
{ 
	int pos;
	int jog = 0;
	int vit = 0;
	
	do{
		printf("Jogador %d\n", vez);
		printf("Escolha uma posição: ");
		scanf("%d", &pos);

		if(v[pos] == ' '){
			if(vez == 2) vez -= 1;
			else vez += 1; 
		}

		switch(pos){
			case 1:
				if(v[0] == ' '){
					if(vez%2==0){
						v[0] = j1;
					}
					else{
						v[0] = j2;
					}
					jog++;
				}
			break;

			case 2:
				if(v[1] == ' '){
					if(vez%2==0){
						v[1] = j1;
					}
					else{
						v[1] = j2;
					}
					jog++;
				}
			break;

			case 3:
				if(v[2] == ' '){
					if(vez%2==0){
						v[2] = j1;
					}
					else{
						v[2] = j2;
					}
					jog++;
				
				}
			break;

			case 4:
				if(v[3] == ' '){
					if(vez%2==0){
						v[3] = j1;
					}
					else{
						v[3] = j2;
					}
					jog++;

				}
			break;

			case 5:
				if(v[4] == ' '){
					if(vez%2==0){
						v[4] = j1;
					}
					else{
						v[4] = j2;
					}
					jog++;

				}
			break;

			case 6:
				if(v[5] == ' '){
					if(vez%2==0){
						v[5] = j1;
					}
					else{
						v[5] = j2;
					}
					jog++;

				}
			break;

			case 7:
				if(v[6] == ' '){
					if(vez%2==0){
						v[6] = j1;
					}
					else{
						v[6] = j2;
					}
					jog++;
				}
			break;

			case 8:
				if(v[7] == ' '){
					if(vez%2==0){
						v[7]=  j1;
					}
					else{
						v[7] = j2;
					}
					jog++;
				}
			break;

			case 9:
				if(v[8] == ' '){
					if(vez%2==0){
						v[8] = j1;
					}
					else{
						v[8] = j2;
					}
					jog++;
				}
			break;
		}
		mostrar(v);
		vit = checa(v, j1, j2);

	}while(jog!=9 && vit!=1);
	
}

int checa(char* v, char j, char j2)
{
		if(v[0]==j && v[1]==j && v[2]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[0]==j2 && v[1]==j2 && v[2]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
        }
		else if(v[3]==j && v[4]==j && v[5]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[3]==j2 && v[4]==j2 && v[5]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
		}
		else if(v[6]==j && v[7]==j && v[8]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
        }
		else if(v[6]==j2 && v[7]==j2 && v[8]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
		}
		else if(v[0]==j && v[3]==j && v[6]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[0]==j2 && v[3]==j2 && v[6]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
		}
		else if(v[1]==j && v[4]==j && v[7]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[1]==j2 && v[4]==j2 && v[7]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
		}
		else if(v[2]==j && v[5]==j && v[8]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[2]==j2 && v[5]==j2 && v[8]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
		}
		else if(v[0]==j && v[4]==j && v[8]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[0]==j2 && v[4]==j2 && v[8]==j2){ 
			printf("Jogador 2 ganhou!\n");
			return 1;
		}
		else if(v[2]==j && v[4]==j && v[6]==j){ 
			printf("Jogador 1 ganhou!\n");
			return 1;
		}
		else if(v[2]==j2 && v[4]==j2 && v[6]==j2){
			printf("Jogador 2 ganhou!\n");
			return 1;
		}

	return 0; 
}

