#include <stdio.h>

struct Cliente {
  long codigo;
  char nome[256];
  long long cpf;
};

struct Conta {
  long    numero_da_conta;
  long    codigo_do_cliente;
  double  saldo;
};

#define QUANTIDADE_DE_CLIENTES 3
#define OPERACAO_SAQUE 1
#define OPERACAO_DEPOSITO 2

int main(){
  struct Cliente clientes[QUANTIDADE_DE_CLIENTES];
  struct Conta   contas[QUANTIDADE_DE_CLIENTES];

  printf("Campos: cpf nome deposito-inicial\n");
  for(long i=0; (i < QUANTIDADE_DE_CLIENTES); i++){
    printf("\nDados para abertura da conta(%ld): ",i+1);
    scanf("%Ld %s %lf",&clientes[i].cpf,clientes[i].nome,
      &contas[i].saldo);

    clientes[i].codigo = i;
    contas[i].numero_da_conta = i;
    contas[i].codigo_do_cliente = clientes[i].codigo;

    printf("\nCliente: %s Conta: %ld Saldo inicial: %1.2lf\n",
      clientes[i].nome, contas[i].numero_da_conta, contas[i].saldo);
  }

  int operacao; // como ainda não aprendemos a comparar strings,
                // vamos usar 'operação' como numérico.
  long num_conta;
  double valor;
  int sair=0; // FALSE

  while (!sair){
    printf("\nInforme a operação: 1-Saque 2-Deposito 3-Sair: ");
    scanf("%d", &operacao);

    if (operacao == OPERACAO_SAQUE || operacao == OPERACAO_DEPOSITO){
      printf("\nInforme numero-da-conta e valor: ");
      scanf("%ld %lf", &num_conta, &valor);
      for(int i=0; (i < QUANTIDADE_DE_CLIENTES); i++){
        if (contas[i].numero_da_conta == num_conta) {
          if (operacao == OPERACAO_SAQUE){
            contas[i].saldo -= valor;
            printf("\nSAQUE: %1.2lf", valor);
          }
          if (operacao == OPERACAO_DEPOSITO){
            contas[i].saldo += valor;
            printf("\nDEPOSITO: %1.2lf", valor);
          }
          for(int j=0; j < QUANTIDADE_DE_CLIENTES; j++){
            if (clientes[j].codigo == contas[i].codigo_do_cliente)
              printf("\nCliente: %s Saldo atual: %1.2lf",
                clientes[j].nome, contas[i].saldo);
          }
        }
      }
    }else{
      sair = 1; // TRUE
    }
  }

  getchar();
  return 0;
}
