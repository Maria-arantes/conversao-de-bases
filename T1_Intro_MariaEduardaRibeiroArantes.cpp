#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

//Convers�o bin�rio/decimal
int bin_to_dec(int bin) {
    int dec = 0, i = 0, digito;
    while (bin!= 0) {
        digito = bin % 10;
        dec += digito * pow(2, i);
        ++i;
        bin /= 10;
    }
    return dec;
}

//Convers�o decimal/bin�rio
int dec_to_bin(int dec){
    int resto, i = 1, bin = 0;
    while (dec != 0) {
        resto = dec % 2;
        dec /= 2;
        bin += resto * i;
        i *= 10;
    }
    return bin;
}

//Convers�o decimal/octal
int dec_to_oct(int dec){
    int potencia = 1, oct = 0, digito;
    while (dec != 0) {
        digito = dec % 8;
        oct += digito * potencia;
        potencia *= 10;
        dec /= 8;
    }
    return oct;
}

//Convers�o hexa/bin�rio
void hex_to_bin() {
    char hex[20] , bin[65] = "";
    int i, len;

    printf("Digite um n�mero em hexadecimal: ");
    scanf("%s", hex);

    len = strlen(hex);

    for(i = 0; i < len; i++) {
        switch(hex[i]) {
            case '0':
                strcat(bin, "0000");
                break;
            case '1':
                strcat(bin, "0001");
                break;
            case '2':
                strcat(bin, "0010");
                break;
            case '3':
                strcat(bin, "0011");
                break;
            case '4':
                strcat(bin, "0100");
                break;
            case '5':
                strcat(bin, "0101");
                break;
            case '6':
                strcat(bin, "0110");
                break;
            case '7':
                strcat(bin, "0111");
                break;
            case '8':
                strcat(bin, "1000");
                break;
            case '9':
                strcat(bin, "1001");
                break;
            case 'A':
            case 'a':
                strcat(bin, "1010");
                break;
            case 'B':
            case 'b':
                strcat(bin, "1011");
                break;
            case 'C': case 'c':
                strcat(bin, "1100");
                break;
            case 'D':case 'd':
                strcat(bin, "1101");
                break;
            case 'E':case 'e':
                strcat(bin, "1110");
                break;
            case 'F':case 'f':
                strcat(bin, "1111");
                break;
            default:
                printf("N�mero hexadecimal inv�lido.\n");
        }
    }

    printf("O n�mero em bin�rio �: %s.\n", bin);

}

//Convers�o bin�rio/hexa
void bin_to_hex(){
    int dec = 0, i = 0, digito, bin;
    printf("Digite um n�mero em bin�rio: ");
    scanf("%d",&bin);

    while (bin!= 0) {
        digito = bin % 10;
        dec += digito * pow(2, i);
        ++i;
        bin /= 10;
    }
    
    char hex[20];

    sprintf(hex, "%X", dec);

    printf("O n�mero em hexadecimal �: %s.\n",hex);

}

//Convers�o octal/bin�rio
void oct_to_bin() {
    char oct[20] , bin[65] = "";
    int i, len;

    printf("Digite um n�mero em octal: ");
    scanf("%s", oct);

    len = strlen(oct);

    for(i = 0; i < len; i++) {
        switch(oct[i]) {
            case '0':
                strcat(bin, "000");
                break;
            case '1':
                strcat(bin, "001");
                break;
            case '2':
                strcat(bin, "010");
                break;
            case '3':
                strcat(bin, "011");
                break;
            case '4':
                strcat(bin, "100");
                break;
            case '5':
                strcat(bin, "101");
                break;
            case '6':
                strcat(bin, "110");
                break;
            case '7':
                strcat(bin, "111");
                break;
            default:
                printf("N�mero octal inv�lido.\n");
        }
    }

    printf("O n�mero em bin�rio �: %s.\n", bin);

}

//Convers�o decimal/octal
void dec_to_hex(){
    int dec ;
    printf("Digite um n�mero em decimal: ");
    scanf("%d", &dec);

    
    char hex[20];

    sprintf(hex, "%X", dec);

    printf("O n�mero em hexadecimal �: %s.\n",hex);

}

//Convers�o octal/decimal
void oct_to_dec(){
    int dec, oct,i;
    printf("Digite um n�mero octal: ");
    scanf("%d", &oct);
    dec = 0;
    i = 0;

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    printf("O n�mero em decimal �: %d.\n", dec);

}

//Convers�o octal/hexa
void oct_to_hex(){
    int oct,i=0,dec=0;
    printf("Digite um n�mero em octal: ");
    scanf("%d", &oct);
    char hex[20];

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    sprintf(hex, "%X", dec);

    printf("O n�mero em hexadecimal �: %s.\n",hex);

}

//Convers�o hexa/decimal
void hex_to_dec(){
    char hex[100];
    long dec;
    char* end_ptr;

    printf("Digite um n�mero em hexadecimal: ");
    scanf("%s", hex);

    dec = strtol(hex, &end_ptr, 16);

    if (end_ptr == hex) {
        printf("Erro na convers�o.\n");
    } else {
        printf("O n�mero em decimal �: %ld.\n",dec);
    }

}


//Convers�o hexa/octal
void hex_to_oct(){
    char hex[100];
    long dec;
    char* end_ptr;

    printf("Digite um n�mero em hexadecimal: ");
    scanf("%s", hex);

    dec = strtol(hex, &end_ptr, 16);

    int potencia = 1, oct = 0, digito;
    while (dec != 0) {
        digito = dec % 8;
        oct += digito * potencia;
        potencia *= 10;
        dec /= 8;
    }
    printf("O n�mero em octal �: %d.\n",oct);    

}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i, d;
    int bin, dec, oct;
    int num = 0;
    
    do{
    printf("-------------------MENU------------------");
    printf("\n1.Bin�rio\n2.Decimal\n3.Octal\n4.Hexadecimal\n");
    printf("-----------------------------------------");
    printf("\n");
    printf("\n");
    printf("Escolha a entrada do sistema n�merico");
    printf("\n");
    printf("Op��o n�mero: ");
    scanf("%d", &i);
    printf("\n");
    printf("Para qual sistema n�merico voc� deseja transferir ");
    printf("\n");
    printf("Op��o n�mero: ");
    scanf("%d", &d);
    printf("\n");
    if(i== d){
        printf("Os n�meros s�o iguais");
    }else{
        if (i == 1 && d == 2){
            printf("Digite um n�mero em bin�rio: ");
            scanf("%d",&bin);
            dec = bin_to_dec(bin);
            printf("O n�mero em decimal �: %d.",dec);
            printf("\n");
        }
        else if (i==1 && d == 3){
            printf("Digite um n�mero em bin�rio: ");
            scanf("%d",&bin);
            dec = bin_to_dec(bin);
            oct = dec_to_oct(dec);
            printf("O n�mero em octal �: %d.",oct);
            printf("\n");
        }
        else if(i==1 && d == 4){
            bin_to_hex();
        }
        
        else if(i==2 && d == 1){
            printf("Digite um n�mero em decimal: ");
            scanf("%d",&dec);
            bin = dec_to_bin(dec);
            printf("O n�mero em bin�rio �: %d.",bin);
            printf("\n");
        }
        else if(i==2 && d == 3){
            printf("Digite um n�mero em decimal: ");
            scanf("%d",&dec);
            oct = dec_to_oct(dec);
            printf("O n�mero em octal �: %d",oct);
            printf("\n");
        }
        else if(i==2 && d == 4){
            dec_to_hex();

        }
        else if(i==3 && d == 1){
            oct_to_bin();

        }
        else if(i==3 && d == 2){
            oct_to_dec();

        }
        else if(i==3 && d == 4){
            oct_to_hex();

        }
        else if(i==4 && d == 1){
            hex_to_bin();
        }
        else if(i==4 && d == 2){
            hex_to_dec();

        }
        else if(i==4 && d == 3){
            hex_to_oct();

        }
    }
    printf("\nDeseja converter mais algum n�mero? \n");
	printf( "Digite 1- Sim\n");
	printf("Digite 2- N�o \n");
    scanf("%d", &num);
}while(num==1);
    return 0;
}
