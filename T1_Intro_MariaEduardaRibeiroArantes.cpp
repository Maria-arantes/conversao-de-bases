#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

//Conversão binário/decimal
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

//Conversão decimal/binário
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

//Conversão decimal/octal
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

//Conversão hexa/binário
void hex_to_bin() {
    char hex[20] , bin[65] = "";
    int i, len;

    printf("Digite um número em hexadecimal: ");
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
                printf("Número hexadecimal inválido.\n");
        }
    }

    printf("O número em binário é: %s.\n", bin);

}

//Conversão binário/hexa
void bin_to_hex(){
    int dec = 0, i = 0, digito, bin;
    printf("Digite um número em binário: ");
    scanf("%d",&bin);

    while (bin!= 0) {
        digito = bin % 10;
        dec += digito * pow(2, i);
        ++i;
        bin /= 10;
    }
    
    char hex[20];

    sprintf(hex, "%X", dec);

    printf("O número em hexadecimal é: %s.\n",hex);

}

//Conversão octal/binário
void oct_to_bin() {
    char oct[20] , bin[65] = "";
    int i, len;

    printf("Digite um número em octal: ");
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
                printf("Número octal inválido.\n");
        }
    }

    printf("O número em binário é: %s.\n", bin);

}

//Conversão decimal/octal
void dec_to_hex(){
    int dec ;
    printf("Digite um número em decimal: ");
    scanf("%d", &dec);

    
    char hex[20];

    sprintf(hex, "%X", dec);

    printf("O número em hexadecimal é: %s.\n",hex);

}

//Conversão octal/decimal
void oct_to_dec(){
    int dec, oct,i;
    printf("Digite um número octal: ");
    scanf("%d", &oct);
    dec = 0;
    i = 0;

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    printf("O número em decimal é: %d.\n", dec);

}

//Conversão octal/hexa
void oct_to_hex(){
    int oct,i=0,dec=0;
    printf("Digite um número em octal: ");
    scanf("%d", &oct);
    char hex[20];

    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    sprintf(hex, "%X", dec);

    printf("O número em hexadecimal é: %s.\n",hex);

}

//Conversão hexa/decimal
void hex_to_dec(){
    char hex[100];
    long dec;
    char* end_ptr;

    printf("Digite um número em hexadecimal: ");
    scanf("%s", hex);

    dec = strtol(hex, &end_ptr, 16);

    if (end_ptr == hex) {
        printf("Erro na conversão.\n");
    } else {
        printf("O número em decimal é: %ld.\n",dec);
    }

}


//Conversão hexa/octal
void hex_to_oct(){
    char hex[100];
    long dec;
    char* end_ptr;

    printf("Digite um número em hexadecimal: ");
    scanf("%s", hex);

    dec = strtol(hex, &end_ptr, 16);

    int potencia = 1, oct = 0, digito;
    while (dec != 0) {
        digito = dec % 8;
        oct += digito * potencia;
        potencia *= 10;
        dec /= 8;
    }
    printf("O número em octal é: %d.\n",oct);    

}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i, d;
    int bin, dec, oct;
    int num = 0;
    
    do{
    printf("-------------------MENU------------------");
    printf("\n1.Binário\n2.Decimal\n3.Octal\n4.Hexadecimal\n");
    printf("-----------------------------------------");
    printf("\n");
    printf("\n");
    printf("Escolha a entrada do sistema númerico");
    printf("\n");
    printf("Opção número: ");
    scanf("%d", &i);
    printf("\n");
    printf("Para qual sistema númerico você deseja transferir ");
    printf("\n");
    printf("Opção número: ");
    scanf("%d", &d);
    printf("\n");
    if(i== d){
        printf("Os números são iguais");
    }else{
        if (i == 1 && d == 2){
            printf("Digite um número em binário: ");
            scanf("%d",&bin);
            dec = bin_to_dec(bin);
            printf("O número em decimal é: %d.",dec);
            printf("\n");
        }
        else if (i==1 && d == 3){
            printf("Digite um número em binário: ");
            scanf("%d",&bin);
            dec = bin_to_dec(bin);
            oct = dec_to_oct(dec);
            printf("O número em octal é: %d.",oct);
            printf("\n");
        }
        else if(i==1 && d == 4){
            bin_to_hex();
        }
        
        else if(i==2 && d == 1){
            printf("Digite um número em decimal: ");
            scanf("%d",&dec);
            bin = dec_to_bin(dec);
            printf("O número em binário é: %d.",bin);
            printf("\n");
        }
        else if(i==2 && d == 3){
            printf("Digite um número em decimal: ");
            scanf("%d",&dec);
            oct = dec_to_oct(dec);
            printf("O número em octal é: %d",oct);
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
    printf("\nDeseja converter mais algum número? \n");
	printf( "Digite 1- Sim\n");
	printf("Digite 2- Não \n");
    scanf("%d", &num);
}while(num==1);
    return 0;
}
