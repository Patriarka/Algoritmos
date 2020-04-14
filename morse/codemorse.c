#include <stdio.h>

//Protótipos
void verificaArq(FILE* arq);
void codifica(FILE* arqDec, FILE* arqCod);


void verificaArq(FILE* arq)
{
    if(arq == NULL) {
        printf("Ocorreu um erro! o arquivo não pode ser aberto.\n");
    } else {
        printf("O arquivo foi aberto com sucesso!\n");
    }
}

void codifica(FILE* arqDec, FILE* arqCod) 
{   
    char txt;

    while(!feof(arqDec)) 
    {
        txt = fgetc(arqDec); 
	
        switch(txt)
        {
            case 'A':
            case 'a': fputs (".- ", arqCod);
                    printf(".- ");
                break;

            case 'B':
            case 'b': fputs ("-... ", arqCod);
                    printf("-... ");
                break;

            case 'C':
            case 'c': fputs ("-.-. ", arqCod);
                    printf("-.-. ");
                break;

            case 'D':
            case 'd': fputs ("-.. ", arqCod);
                    printf("-.. ");
                break;

            case 'E':
            case 'e': fputs (". ", arqCod);
                    printf(". ");
                break;

            case 'F':
            case 'f': fputs ("..-. ", arqCod);
                    printf("..-. ");
                break;

            case 'G':
            case 'g': fputs ("--. ", arqCod);
                    printf("--. ");
                break;

            case 'H':
            case 'h': fputs (".... ", arqCod);
                    printf(".... ");
                break;

            case 'I':
            case 'i': fputs (".. ", arqCod);
                    printf(".. ");
                break;

            case 'J':
            case 'j': fputs (".--- ", arqCod);
                    printf(".--- ");
                break;

            case 'K':
            case 'k': fputs ("-.- ", arqCod);
                    printf("-.- ");
                break;

            case 'L':
            case 'l': fputs (".-.. ", arqCod);
                    printf(".-.. ");
                break;

            case 'M':
            case 'm': fputs ("-- ", arqCod);
                    printf("-- ");
                break;

            case 'N':
            case 'n': fputs ("-. ", arqCod);
                    printf("-. ");
                break;

            case 'O':
            case 'o': fputs ("--- ", arqCod);
                    printf("--- ");
                break;

            case 'P':
            case 'p': fputs (".--. ", arqCod);
                    printf(".--. ");
                break;

            case 'Q':
            case 'q': fputs ("--.- ", arqCod);
                    printf("--.- ");
                break;

            case 'R':
            case 'r': fputs (".-. ", arqCod);
                    printf(".-. ");
                break;

            case 'S':
            case 's': fputs ("... ", arqCod);
                    printf("... ");
                break;

            case 'T':
            case 't': fputs ("- ", arqCod);
                    printf("- ");
                break;

            case 'U':
            case 'u': fputs ("..- ", arqCod);
                    printf("..- ");
                break;

            case 'V':
            case 'v': fputs ("...- ", arqCod);
                    printf("...- ");
                break;

            case 'W':
            case 'w': fputs (".-- ", arqCod);
                    printf(".-- ");
                break;

            case 'X':
            case 'x': fputs ("-..- ", arqCod);
                    printf("-..- ");
                break;

            case 'Y':
            case 'y': fputs ("-.-- ", arqCod);
                    printf("-.-- ");
                break;

            case 'Z':
            case 'z': fputs ("--.. ", arqCod);
                    printf("--.. ");
                break;

            case '1': fputs (".---- ", arqCod);
                    printf(".---- ");
                break;

            case '2': fputs ("..--- ", arqCod);
                    printf("..--- ");
                break;

            case '3': fputs ("...-- ", arqCod);
                    printf("...-- ");
                break;

            case '4': fputs ("....- ", arqCod);
                    printf("....- ");
                break;

            case '5': fputs ("..... ", arqCod);
                    printf("..... ");
                break;

            case '6': fputs ("-.... ", arqCod);
                    printf("-.... ");
                break;

            case '7': fputs ("--... ", arqCod);
                    printf("--... ");
                break;

            case '8': fputs ("---.. ", arqCod);
                    printf("---.. ");
                break;

            case '9': fputs ("----. ", arqCod);
                    printf("----. ");
                break;

            case '0': fputs ("----- ", arqCod);
                    printf("----- ");
                break;

            case ' ': fputs("/ ", arqCod);
                    printf("/ ");
                break;

            default: return;
        }
    }
}

int main(void)
{   
    FILE* arqDec = fopen("decodificado.txt", "r");
    verificaArq(arqDec);    

    FILE* arqCod = fopen("codificado.txt", "w");    
    verificaArq(arqCod);
    
    codifica(arqDec,arqCod);
    printf("\n");

    fclose(arqDec);
    fclose(arqCod);
}
