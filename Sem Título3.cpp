#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float n1, n2, n3,media;
	int cont;
	//for(cont=1; cont>=5; cont ++);
	{
	printf("Digite sua primeira nota:");
	scanf("%f",&n1);
	printf("Digite sua segunda nota:");
	scanf("%f",&n2);
	printf("Digite sua terceira nota:");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	if (media>=7)
	{
		printf("Aluno APROVADO com média %.2f", media);
	}
	else{
		printf("Aluno REPROVADO com media %.2f", media);
	}
	}
	return 0;
}