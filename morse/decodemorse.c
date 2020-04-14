#include <stdio.h>
#include <string.h>

//Protótipos
void verificaArq(FILE* arq);
void decodifica(FILE* arqDec, FILE* arqCod);


void verificaArq(FILE* arq)
{
    if(arq == NULL) {
        printf("Ocorreu um erro! o arquivo não pode ser aberto.\n");
    } else {
        printf("O arquivo foi aberto com sucesso!\n");
    }
}

void decodifica(FILE* arqDec, FILE* arqCod) 
{   
    char txt[100];

        while((fscanf(arqCod, "%s" ,txt))!=EOF){
            if(strcmp(txt,".-")==0){
                fputs("a",arqDec);
                printf("a");
            }
                
            else if(strcmp(txt,"-...")==0){
                fputs("b",arqDec);
                printf("b");
            }
                
            else if(strcmp(txt,"-.-.")==0){
                fputs("c",arqDec);
                printf("c");
            }	
            else if(strcmp(txt,"-..")==0){
                fputs("d",arqDec);
                printf("d");
            }
            else if(strcmp(txt,".")==0){
                fputs("e",arqDec);
                printf("e");
            }	
            else if(strcmp(txt,"..-.")==0){
                fputs("f",arqDec);
                printf("f");
            }
            else if(strcmp(txt,"--.")==0){
                fputs("g",arqDec);
                printf("g");
            }
            else if(strcmp(txt,"....")==0){
                fputs("h",arqDec);
                printf("h");
            }
            else if(strcmp(txt,"..")==0){
                fputs("i",arqDec);
                printf("i");
            }
            else if(strcmp(txt,".---")==0){
                fputs("j",arqDec);
                printf("j");
            }
            else if(strcmp(txt,"-.-")==0){
                fputs("k",arqDec);
                printf("k");
            }
            else if(strcmp(txt,".-..")==0){
                fputs("l",arqDec);
                printf("l");
            }	
            else if(strcmp(txt,"--")==0){
                fputs("m",arqDec);
                printf("m");
            }
            else if(strcmp(txt,"-.")==0){
                fputs("n",arqDec);
                printf("n");
            }
            else if(strcmp(txt,"---")==0){
                fputs("o",arqDec);
                printf("o");
            }
            else if(strcmp(txt,".--.")==0){
                fputs("p",arqDec);
                printf("p");
            }
            else if(strcmp(txt,"--.-")==0){
                fputs("q",arqDec);
                printf("q");
            }
            else if(strcmp(txt,".-.")==0){
                fputs("r",arqDec);
                printf("r");
            }
            else if(strcmp(txt,"...")==0){
                fputs("s",arqDec);
                printf("s");
            }
            else if(strcmp(txt,"-")==0){
                fputs("t",arqDec);
                printf("t");
            }
            else if(strcmp(txt,"..-")==0){
                fputs("u",arqDec);
                printf("u");
            }
            else if(strcmp(txt,"...-")==0){
                fputs("v",arqDec);
                printf("v");
            }
            else if(strcmp(txt,".--")==0){
                fputs("w",arqDec);
                printf("w");
            }
            else if(strcmp(txt,"-..-")==0){
                fputs("x",arqDec);
                printf("x");
            }
            else if(strcmp(txt,"-.--")==0){
                fputs("y",arqDec);
                printf("y");
            }
            else if(strcmp(txt,"--..")==0){
                fputs("z",arqDec);
                printf("z");
            }
            else if(strcmp(txt,".----")==0){
                fputs("1",arqDec);
                printf("1");
            }
            else if(strcmp(txt,"..---")==0){
                fputs("2",arqDec);
                printf("2");
            }
            else if(strcmp(txt,"...--")==0){
                fputs("3",arqDec);
                printf("3");
            }
            else if(strcmp(txt,"....-")==0){
                fputs("4",arqDec);
                printf("4");
            }
            else if(strcmp(txt,".....")==0){
                fputs("5",arqDec);
                printf("5");
            }
            else if(strcmp(txt,"-....")==0){
                fputs("6",arqDec);
                printf("6");
            }
            else if(strcmp(txt,"--...")==0){
                fputs("7",arqDec);
                printf("7");
            }
            else if(strcmp(txt,"---..")==0){
                fputs("8",arqDec);
                printf("8");
            }
            else if(strcmp(txt,"----.")==0){
                fputs("9",arqDec);
                printf("9");
            }
            else if(strcmp(txt,"-----")==0){
                fputs("0",arqDec);
                printf("0");
            }
            else if(strcmp(txt,"/")==0){
                fputs(" ",arqDec);
                printf(" ");
            }
            else return;
	    }
}

int main(void)
{
    FILE* arqDec = fopen("decodificado.txt", "w");
    verificaArq(arqDec);

    FILE* arqCod = fopen("codificado.txt", "r");    
    verificaArq(arqCod);
    
    decodifica(arqDec,arqCod);
    printf("\n");

    fclose(arqDec);
    fclose(arqCod);
}