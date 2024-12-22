#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

void ConversorDeComprimento();
void ConversorDeTemperatura();
void ConversorDeVelocidade();
void ConversorDeVolume();
void ConversorDeArmazenamento();

int main() {
    setlocale(LC_ALL, "portuguese"); 
    int opcao = 0;

    printf("\n\n========================================================================================\n");
    printf("                                   Conversor De Unidades                                       ");
    printf("\n========================================================================================\n\n");

    printf("# DESCRI��O:\n");
    printf("  - Escolha o conversor de seu interesse especificando o n�mero \n    entre chaves [XX], dentre as op��es abaixo.\n\n");

    printf("[1] Conversor de unidades de comprimento (metro, cent�metro e mil�metro)\n");
    printf("[2] Conversor de unidades de volume (litro, mililitro e metros c�bicos)\n");
    printf("[3] Conversor de unidades de massa (kilograma, grama e tonelada)\n");
    printf("[4] Conversor de unidades de temperatura (celcius, kelvin e fahrenheit)\n");
    printf("[5] Conversor de unidades de velocidade (km/h, m/s e mph)\n");
    printf("[6] Conversor de unidades de pot�ncia (watt, kilowatt e cavalo-vapor)\n");
    printf("[7] Conversor de unidades de �rea (metro quadrado, cent�metro )\n");
    printf("[8] Conversor de unidades de tempo (segundo, minuto e hora)\n");
    printf("[9] Conversor de unidades de armazenamento (bits, bytes e kilobytes)\n");

    printf("\nEscolha a op��o: ");
    scanf("%d", &opcao);

    system("clear");

    switch (opcao) {
        case 1:
            ConversorDeComprimento();
            break;
        case 2:
            ConversorDeVolume();
            break;
        case 3:
            //conversor de massa
            break;
        case 4:
            ConversorDeTemperatura();
            break;
        case 5:
            ConversorDeVelocidade();
            break;
        case 6:
            //conversor de potencia
            break;
        case 7:
            //conversor de area
            break;
        case 8:
            //conversor de tempo
            break;
        case 9:
            ConversorDeArmazenamento();
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }

    return 0;
}

// Fun��es do menu
void ConversorDeComprimento () {
    int opcao = 0;
    float grandeza = 0;

    printf("\n\n Indique a grandeza do valor que voc� vai inserir\n");
    printf("[1] Metro\n");
    printf("[2] Cent�metro\n");
    printf("[3] Mil�metro\n");

    printf("Escolha a op��o: ");
    scanf("%d", &opcao);  // escolhendo a op��o


    printf("Digite a grandeza: ");
    scanf("%f", &grandeza);  // escolhendo a op��o


    switch(opcao){
        case 1: 
            printf("\nValor digitado %.2f em metros\n", grandeza);
            printf("Valor em cent�metros: %.2f cm\n", grandeza * 100);
            printf("Valor em mil�metros: %.2f mm\n", grandeza * 1000);
            break;
        case 2: 
            printf("\nValor digitado %.2f em cent�metros\n", grandeza);
            printf("Valor em metros: %.2f m\n", grandeza / 100);
            printf("Valor em mil�metros: %.2f mm\n", grandeza * 10);
            break;
        case 3: 
            printf("\nValor digitado %.2f em mil�metros\n", grandeza);
            printf("Valor em metros: %.2f m\n", grandeza / 1000);
            printf("Valor em cent�metros: %.2f cm\n", grandeza / 10);
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
}

// Cria fun��o para o menu de temperaturas
void ConversorDeTemperatura () {
    int opcao = 0;
    float temperatura = 0;

    printf("\n\n Indique a unidade da temperatura que voc� vai inserir\n");
    printf("[1] Kelvin\n");
    printf("[2] Celsius\n");
    printf("[3] Fahrenheit\n");

    //Pede ao usu�rio a qual a unidade inicial
    printf("Escolha a op��o: ");
    scanf("%d", &opcao);

    //Pede ao usu�rio a temepratura
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    //Verifica a op��o e imprime as suas convers�es para as outras unidades
    switch(opcao){
        case 1:
            printf("\nValor digitado: %.2f K\n", temperatura);
            printf("Valor em Celsius: %.2f �C\n", temperatura - 273.15);
            printf("Valor em Fahrenheit: %.2f �F\n", (temperatura - 273.15) * 9/5 + 32);
            break;
        case 2:
            printf("\nValor digitado: %.2f �C\n", temperatura);
            printf("Valor em Kelvin: %.2f K\n", temperatura + 273.15);
            printf("Valor em Fahrenheit: %.2f �F\n", temperatura * 9/5 + 32);
            break;
        case 3:
            printf("\nValor digitado: %.2f �F\n", temperatura);
            printf("Valor em Celsius: %.2f �C\n", (temperatura - 32) * 5/9);
            printf("Valor em Kelvin: %.2f K\n", ((temperatura - 32) * 5/9) + 273.15);
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
}

// Fun��o que solicita ao usu�rio um valor e unidade de velocidade e realiza a convers�o para outras.
void ConversorDeVelocidade () {
    int opcao = 0;
    float velocidade = 0;

    printf("\n\n Indique a unidade da velocidade que voc� vai inserir\n");
    printf("[1] m/s\n");
    printf("[2] Km/h\n");
    printf("[3] Mph\n");

    //Pede ao usu�rio a qual a unidade inicial
    printf("Escolha a op��o: ");
    scanf("%d", &opcao);

    //Pede ao usu�rio a velocidade
    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    //Verifica a op��o e imprime as suas convers�es para as outras unidades
    switch(opcao){
        case 1:
            printf("\nValor digitado: %.2f m/s\n", velocidade);
            printf("Valor em Km/h: %.2f km/h\n", velocidade * 3.6);
            printf("Valor em Mph: %.2f mph\n", velocidade * 2.237);
            break;
        case 2:
            printf("\nValor digitado: %.2f km/h\n", velocidade);
            printf("Valor em M/s: %.2f m/s\n", velocidade / 3.6);
            printf("Valor em Mph: %.2f mph\n", velocidade / 1.609);
            break;
        case 3:
            printf("\nValor digitado: %.2f mph\n", velocidade);
            printf("Valor em M/s: %.2f m/s\n", velocidade / 2.237);
            printf("Valor em Km/h: %.2f km/h\n", velocidade * 1.609);
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
}

// Fun��o para convers�o de volume
void ConversorDeVolume () {
    int choice;
    double value;
    double n;

    // Exibindo as op��es de unidades para litros e metros c�bicos
    printf("Selecione a unidade para convers�o:\n");
    printf("1. Mililitro (ml)\n");
    printf("2. Centilitro (cl)\n");
    printf("3. Decilitro (dl)\n");
    printf("4. Litro (L)\n");
    printf("5. Decalitro (dal)\n");
    printf("6. Hectolitro (hl)\n");
    printf("7. Quilolitro (kl)\n");
    printf("8. Dec�metro c�bico (dm�)\n");
    printf("9. Cent�metro c�bico (cm�)\n");
    printf("10. Mil�metro c�bico (mm�)\n");
    printf("11. Dec�metro c�bico (dam�)\n");
    printf("12. Hect�metro c�bico (hm�)\n");
    printf("13. Quil�metro c�bico (km�)\n");
    printf("14. Metro c�bico (m�)\n");

    printf("Digite o valor: \n");
    scanf("%lf", &n);


    // Recebendo a escolha do usu�rio
    printf("Escolha a unidade (1-14): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            value = n * 1000;  
            printf("%lf ml\n", value);
            break;
        case 2:
            value = n * 10000; 
            printf("%lf cl\n", value);
            break;
        case 3:
            value = n * 100000; 
            printf("%lf dl\n", value);
            break;
        case 4:
            value = n;  
            printf("%lf L\n", value);
            break;
        case 5:
            value = n * 10; 
            printf("%lf dal\n", value);
            break;
        case 6:
            value = n * 100;  
            printf("%lf hl\n", value);
            break;
        case 7:
            value = n * 1000; 
            printf("%lf kl\n", value);
            break;
        case 8:
            value = n * 1000; 
            printf("%lf dm�\n", value);
            break;
        case 9:
            value = n * 1000000;  
            printf("%lf cm�\n", value);
            break;
        case 10:
            value = n * 1000000000;  
            printf("%lf mm�\n", value);
            break;
        case 11:
            value = n / 1000;  
            printf("%lf dam�\n", value);
            break;
        case 12:
            value = n / 1000000;  
            printf("%lf hm�\n", value);
            break;
        case 13:
            value = n / 1000000000;  
            printf("%lf km�\n", value);
            break;
        case 14:
            value = n / 1000;  
            printf("%lf m�\n", value);
            break;
        default:
            printf("Escolha inv�lida!\n");
            break;
    }
}

void ConversorDeArmazenamento () {
    double valor, resultado;
    int de, para;

    printf("Conversor de Unidades de Armazenamento\n");
    printf("1. Bits\n");
    printf("2. Bytes\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");

    printf("Escolha a unidade de origem (1-6): ");
    scanf("%d", &de);
    if (de < 1 || de > 6) {
        printf("Unidade de origem inv�lida.\n");
        return;
    }

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    printf("Escolha a unidade de destino (1-6): ");
    scanf("%d", &para);
    if (para < 1 || para > 6) {
        printf("Unidade de destino inv�lida.\n");
        return; 
    }

    long long multiplicadores[] = {
        1LL,                          // Bits
        8LL,                          // Bytes
        8LL * 1024,                  // KB
        8LL * 1024 * 1024,           // MB
        8LL * 1024 * 1024 * 1024,    // GB
        8LL * 1024 * 1024 * 1024 * 1024 // TB
    };

    resultado = valor * multiplicadores[de - 1] / multiplicadores[para - 1];

    printf("Resultado: %.6lf\n", resultado);
}