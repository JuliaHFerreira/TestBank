#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, ""); /*set de linguagem local*/
	
	float dep, saldo=0, saq, trans;
	int op, i, agencia, conta, numbanco;
	char nome[50], banco[50];
	
	do{
		system("cls");
		printf("Bem vindo ao Banco 1900 e bolinha\n");
		printf("\nO que deseja?\n");
		printf("1 - Consultar saldo na conta\n");
		printf("2 - Depositar dinheiro\n");
		printf("3 - Sacar dinheiro\n");
		printf("4 - Transferencia Bancaria\n");
		printf("5 - Bloquear Cartão\n");
		printf("6 - Sair\n");
		fflush(stdin);
		scanf("%d", &op);
		
		switch(op){
			case 1 : {/*Consulta de saldo*/
				system("cls");
				for (i=0; i<4;i++){
					printf("Consultando Saldo.\n");
					printf("Consultando Saldo..\n");
					printf("Consultando Saldo...\n");
				}
				printf("\nSeu saldo atual é R$ %.2f reais\n", saldo);
				system("pause");
				break;
			}
			case 2: {/*Deposito de saldo*/
				system("cls");
				printf("Insira o valor: \n");
				scanf("%f", &dep);
				saldo=saldo+dep;
				printf("Saldo de %.2f depositado com sucesso!\n", dep);
				system("pause");
				break;
			}
			case 3: {/*Saque de dinheiro*/
				system("cls");
				printf("Insira o valor que deseja sacar: \n");
				scanf("%f", &saq);
				if(saldo-saq>=0){
					printf("Saque de R$ %.2f reais realizado com sucesso!\n", saq);
					saldo=saldo-saq;
				}
				else{
					printf("Saldo insuficiente!\n");
				}
				system("pause");
				break;
			}
			case 4: {/*Transferência de Dinheiro*/
				system("cls");
				printf("Nome completo \n");
				fflush(stdin);
				fgets(nome, sizeof(nome), stdin);
				int comprimento = strlen(nome);
				if (comprimento > 0 && nome[comprimento - 1] == '\n') {
					nome[comprimento - 1] = '\0';
				}
				printf("\nInsira a Agência\n");
				scanf("%d", &agencia);
				printf("\nNumero da conta \n");
				scanf("%d", &conta);
				printf("\nNúmero banco\n");
				scanf("%d", &numbanco);
				printf("\nNome da instituição \n");
				fflush(stdin);
				fgets(banco, sizeof(banco), stdin);
				int comprimentos = strlen(banco);
				if (comprimentos > 0 && banco[comprimentos - 1] == '\n') {
					banco[comprimentos - 1] = '\0';
				}
				
				printf("\nQuanto deseja transferir?\n ");
				scanf("%f", &trans);
				if(saldo-trans>=0){
					printf("\nTransferencia de R$ %.2f reais realizado com sucesso!\n", trans);
					printf("\nDados da transferencia \n");
					printf("Nome completo: %s \n",nome);
					printf("Agência: %d \n",agencia);
					printf("Conta: %d \n",conta);
					printf("Número do Banco: %d \n",numbanco);
					printf("Nome do banco: %s \n",banco);
					saldo=saldo-trans;
				}
				else{
					printf("Saldo insuficiente!\n");
				}
				system("pause");
				break;
			}
			case 5:{/*Bloqueando Cartão*/
				system("cls");
				printf("Cartão bloqueado com sucesso!\n");
				printf("Para desbloquear o cartão ligue para 0800 775 1500 \n");
				op=6;
				system("pause");
				break;
			}
			case 6: {/*Encerrar o programa*/
				system("cls");
				printf("Fechando o programa!!!\n");
				printf("Obrigado por usar o Banco 1900 e bolinha!\n");
				system("pause");
				break;
			}
			default: {/*Caso o usuário insira um valor errado das opções*/
				system("cls");
				printf("Insira uma opção valida! \n");
				system("pause");
				break;
			}
		}		
	} while(op!=6);
	
	return 0;
}
