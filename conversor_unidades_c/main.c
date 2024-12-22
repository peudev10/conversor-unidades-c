#include <stdio.h>
#include <locale.h>

void Metro_Centrimetro_Milimetro();
void ConversorDeTemperaturas();
void ConversorDeVelocidades();
void transformVol();
void ConversorDeArmazenamento();

int main() {
    setlocale(LC_ALL, ""); 
    int opcao = 0;

    printf("\n\n------------ Conversor de unidades em C ------------\n");
    printf("[1] Conversor de metro, centímetro e milímetro\n");
    printf("[2] Conversor de litro, mililitro e metros cúbicos\n");
    printf("[4] Conversor de metro, centímetro e milímetro\n");
    printf("[5] Conversor de km/h, m/s e mph\n");
    printf("[9] Conversor de unidade de armazenamento\n");

    printf("Escolha a opção: ");
    scanf("%d", &opcao); // escolhendo a opção

    switch(opcao){
        case 1: 
            Metro_Centrimetro_Milimetro();
            break;
        case 2:
            transformVol();
            break;
        case 4:
            ConversorDeTemperaturas();
            break;
        case 5:
            ConversorDeVelocidades();
            break;
        case 9:
            ConversorDeArmazenamento();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}

// Funções do menu
void Metro_Centrimetro_Milimetro(){
    int opcao = 0;
    float grandeza = 0;

    printf("\n\n Indique a grandeza do valor que você vai inserir\n");
    printf("[1] Metro\n");
    printf("[2] Centímetro\n");
    printf("[3] Milímetro\n");

    printf("Escolha a opção: ");
    scanf("%d", &opcao);  // escolhendo a opção


    printf("Digite a grandeza: ");
    scanf("%f", &grandeza);  // escolhendo a opção


    switch(opcao){
        case 1: 
            printf("\nValor digitado %.2f em metros\n", grandeza);
            printf("Valor em centímetros: %.2f cm\n", grandeza * 100);
            printf("Valor em milímetros: %.2f mm\n", grandeza * 1000);
            break;
        case 2: 
            printf("\nValor digitado %.2f em centímetros\n", grandeza);
            printf("Valor em metros: %.2f m\n", grandeza / 100);
            printf("Valor em milímetros: %.2f mm\n", grandeza * 10);
            break;
        case 3: 
            printf("\nValor digitado %.2f em milímetros\n", grandeza);
            printf("Valor em metros: %.2f m\n", grandeza / 1000);
            printf("Valor em centímetros: %.2f cm\n", grandeza / 10);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

// Cria função para o menu de temperaturas
void ConversorDeTemperaturas(){
    int opcao = 0;
    float temperatura = 0;

    printf("\n\n Indique a unidade da temperatura que você vai inserir\n");
    printf("[1] Kelvin\n");
    printf("[2] Celsius\n");
    printf("[3] Fahrenheit\n");

    //Pede ao usuário a qual a unidade inicial
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

    //Pede ao usuário a temepratura
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    //Verifica a opção e imprime as suas conversões para as outras unidades
    switch(opcao){
        case 1:
            printf("\nValor digitado: %.2f K\n", temperatura);
            printf("Valor em Celsius: %.2f °C\n", temperatura - 273.15);
            printf("Valor em Fahrenheit: %.2f °F\n", (temperatura - 273.15) * 9/5 + 32);
            break;
        case 2:
            printf("\nValor digitado: %.2f °C\n", temperatura);
            printf("Valor em Kelvin: %.2f K\n", temperatura + 273.15);
            printf("Valor em Fahrenheit: %.2f °F\n", temperatura * 9/5 + 32);
            break;
        case 3:
            printf("\nValor digitado: %.2f °F\n", temperatura);
            printf("Valor em Celsius: %.2f °C\n", (temperatura - 32) * 5/9);
            printf("Valor em Kelvin: %.2f K\n", ((temperatura - 32) * 5/9) + 273.15);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

// Função que solicita ao usuário um valor e unidade de velocidade e realiza a conversão para outras.
void ConversorDeVelocidades(){
    int opcao = 0;
    float velocidade = 0;

    printf("\n\n Indique a unidade da velocidade que você vai inserir\n");
    printf("[1] m/s\n");
    printf("[2] Km/h\n");
    printf("[3] Mph\n");

    //Pede ao usuário a qual a unidade inicial
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

    //Pede ao usuário a velocidade
    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    //Verifica a opção e imprime as suas conversões para as outras unidades
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
            printf("Opção inválida!\n");
            break;
    }
}

// Função para conversão de volume
void transformVol() {
    int choice;
    double value;
    double n;

    // Exibindo as opções de unidades para litros e metros cúbicos
    printf("Selecione a unidade para conversão:\n");
    printf("1. Mililitro (ml)\n");
    printf("2. Centilitro (cl)\n");
    printf("3. Decilitro (dl)\n");
    printf("4. Litro (L)\n");
    printf("5. Decalitro (dal)\n");
    printf("6. Hectolitro (hl)\n");
    printf("7. Quilolitro (kl)\n");
    printf("8. Decímetro cúbico (dm³)\n");
    printf("9. Centímetro cúbico (cm³)\n");
    printf("10. Milímetro cúbico (mm³)\n");
    printf("11. Decâmetro cúbico (dam³)\n");
    printf("12. Hectômetro cúbico (hm³)\n");
    printf("13. Quilômetro cúbico (km³)\n");
    printf("14. Metro cúbico (m³)\n");

    printf("Digite o valor: \n");
    scanf("%lf", &n);


    // Recebendo a escolha do usuário
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
            printf("%lf dm³\n", value);
            break;
        case 9:
            value = n * 1000000;  
            printf("%lf cm³\n", value);
            break;
        case 10:
            value = n * 1000000000;  
            printf("%lf mm³\n", value);
            break;
        case 11:
            value = n / 1000;  
            printf("%lf dam³\n", value);
            break;
        case 12:
            value = n / 1000000;  
            printf("%lf hm³\n", value);
            break;
        case 13:
            value = n / 1000000000;  
            printf("%lf km³\n", value);
            break;
        case 14:
            value = n / 1000;  
            printf("%lf m³\n", value);
            break;
        default:
            printf("Escolha inválida!\n");
            break;
    }
}

void ConversorDeArmazenamento() {
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
        printf("Unidade de origem inválida.\n");
        return;
    }

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    printf("Escolha a unidade de destino (1-6): ");
    scanf("%d", &para);
    if (para < 1 || para > 6) {
        printf("Unidade de destino inválida.\n");
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
