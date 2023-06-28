// Esse código é uma simulação de uma calculadora simples de números inteiros com as 5 operações básicas: adição, subtração, multiplicação e divisão. Além disso é mostrado o resultado em outros sistemas como o binário, octal e o hexadecimal.

#include <stdio.h>

void decimalParaBinario (int decimal);
void decimalParaOctal (int decimal);
void decimalParaHexadecimal (int decimal);

// Função principal que irá rodar a aplicação
int main () {
  int num1, num2, resultado;
  char operador;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o símbolo da operação a ser realizada: ");
  scanf(" %c", &operador);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  // Verifica qual tipo de operação será realizada
  switch (operador)
  {
  case '+':
    resultado = num1 + num2;
    break;
  case '-':
    resultado = num1 - num2;
    break;
  case '*':
    resultado = num1 * num2;
    break;
  case '/':
    resultado = num1 / num2;
    break;
  case '%':
    resultado = num1 % num2;
    break;

  default:
    printf("Operação inválida!\n");
    break;
  }

  // Exibição dos resultados
  printf("O resultado da operação no sistema decimal é: %d\n", resultado);
  printf("O resultado da operação no sistema binário é: ");
  decimalParaBinario(resultado);
  printf("\nO resultado da operação no sistema octal é: ");
  decimalParaOctal(resultado);
  printf("\nO resultado da operação no sistema hexadecimal é: ");
  decimalParaHexadecimal(resultado);
  printf("\n");

  return 0;
}

// Essa função tem como objetivo converter um número decimal para binário
void decimalParaBinario (int decimal) {
  int numeroBinario[32], indice = 0;

  // Fazendo o cálculo da conversão usando o método das divisões sucessivas e armazenando no array
  while (decimal > 0) {
    numeroBinario[indice] = decimal % 2;
    decimal /= 2;
    indice++;
  }

  // Exibição dos números na tela
  for (int i = indice - 1; i >= 0; i--) {
    printf("%d", numeroBinario[i]);
  }
}

// Essa função tem como objetivo converter um número decimal para octal
void decimalParaOctal (int decimal) {
  int numeroOctal[16], indice = 0;

  // Fazendo o cálculo da conversão usando o método das divisões sucessivas e armazenando no array
  while (decimal > 0) {
    numeroOctal[indice] = decimal % 8;
    decimal /= 8;
    indice++;
  }

  // Exibição dos números na tela
  for (int i = indice - 1; i >= 0; i--) {
    printf("%d", numeroOctal[i]);
  }
}

// Essa função tem como objetivo converter um número decimal para hexadecimal
void decimalParaHexadecimal (int decimal) {
  int numeroHexadecimal[8], indice = 0;

  // Fazendo o cálculo da conversão usando o método das divisões sucessivas e armazenando no array
  while (decimal > 0) {
    numeroHexadecimal[indice] = decimal % 16;
    decimal /= 16;
    indice++;
  }

  // Exibição dos números na tela
  for (int i = indice - 1; i >= 0; i--) {

    // Substituição dos números de dois algarismos da base decimal para os seus respectivos caracteres da base hexadecimal
    switch (numeroHexadecimal[i]) {
      case 10:
        printf("A");
        break;
      case 11:
        printf("B");
        break;
      case 12:
        printf("C");
        break;
      case 13:
        printf("D");
        break;
      case 14:
        printf("E");
        break;
      case 15:
        printf("F");
        break;
      default:
        printf("%d", numeroHexadecimal[i]);
        break;
    }    
  }
}