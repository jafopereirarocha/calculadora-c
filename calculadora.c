#include <stdio.h>
#include <math.h>
#include <locale.h> // Incluir a biblioteca locale.h para configurar o idioma

// Função para exibir o menu da calculadora
void exibirMenu();

// Funções para cada operação da calculadora
void adicao();
void subtracao();
void multiplicacao();
void divisao();
void raizQuadrada();
void quadrado();
void fatorial();

// Função para limpar o buffer de entrada
void limparBuffer();

int main()
{
    setlocale(LC_ALL, "pt_PT"); // Configurar o idioma para Português de Portugal
    int opcao;
    do
    {
        // Exibir o menu e solicitar a escolha do usuário
        exibirMenu();
        printf("Escolha uma opção (1-8): ");
        if (scanf("%d", &opcao) != 1)
        {
            limparBuffer();
            printf("Entrada inválida! Insira um número de 1 a 8.\n");
            continue;
        }
        // Executar a operação escolhida pelo usuário
        switch (opcao)
        {
            case 1: adicao(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: raizQuadrada(); break;
            case 6: quadrado(); break;
            case 7: fatorial(); break;
            case 8: printf("Saindo da calculadora...\n"); break;
            default: printf("Entrada inválida! Insira um número de 1 a 8.\n");
        }
    } while (opcao != 8); // Continuar até que a opção 8 (sair) seja escolhida
    return 0;
}

// Função para exibir o menu da calculadora
void exibirMenu()
{
    printf("\n====== Calculadora ======\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Raiz quadrada\n");
    printf("6. Quadrado\n");
    printf("7. Fatorial de qualquer número\n");
    printf("8. Sair\n");
    printf("=========================\n");
}

// Implementação das operações matemáticas

void adicao()
{
    double num1, num2;
    printf("Insira dois números para adicionar: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    printf("Resultado: %.2lf\n", num1 + num2);
}
// Implementação similar às outras funções
// As funções seguintes têm um padrão similar
void subtracao()
{
    double num1, num2;
    printf("Insira dois números para subtrair: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    printf("Resultado: %.2lf\n", num1 - num2);
}

void multiplicacao()
{
    double num1, num2;
    printf("Insira dois números para multiplicar: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    printf("Resultado: %.2lf\n", num1 * num2);
}

void divisao()
{
    double num1, num2;
    printf("Insira dois números para dividir: ");
    if (scanf("%lf %lf", &num1, &num2) != 2)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    if (num2 == 0)
    {
        printf("Erro: Divisão por zero não é permitida!\n");
        return;
    }
    printf("Resultado: %.2lf\n", num1 / num2);
}

void raizQuadrada()
{
    double num;
    printf("Insira um número para calcular a raiz quadrada: ");
    if (scanf("%lf", &num) != 1)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    if (num < 0)
    {
        printf("Erro: Raiz quadrada de número negativo não é permitida!\n");
        return;
    }
    printf("Resultado: %.2lf\n", sqrt(num));
}

void quadrado()
{
    double num;
    printf("Insira um número para calcular o quadrado: ");
    if (scanf("%lf", &num) != 1)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    printf("Resultado: %.2lf\n", num * num);
}

void fatorial()
{
    int num;
    printf("Insira um número para calcular o fatorial: ");
    if (scanf("%d", &num) != 1)
    {
        limparBuffer();
        printf("Entrada inválida! Tente novamente.\n");
        return;
    }
    if (num < 0)
    {
        printf("Erro: Fatorial de número negativo não é permitida!\n");
        return;
    }
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; ++i)
    {
        resultado *= i;
    }
    printf("Resultado: %llu\n", resultado);
}
// Função para limpar o buffer de entrada
void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }  // Limpeza do buffer de entrada
}
