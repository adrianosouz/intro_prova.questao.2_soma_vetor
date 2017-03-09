#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i;
    int *v3,*v1,*v2;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&n1);
    printf("Digite o tamanho dos vetores: ");
    scanf("%d",&n2);
    v1 = malloc(sizeof(int)*n1);

    if(v1 == NULL)
    {
        printf("memoria insuficiente");
        return 1;
    }
    v2 = malloc(sizeof(int)*n2);
    if(v2 == NULL)
    {
        printf("memoria insuficiente");
        return 1;
    }
    printf("\n\n");

if(n1 != n2)
        printf("a matriz tem tamanhos diferente");


else if(n1 = n2)
 {

    v3 = malloc(sizeof(int)*n1);
    if(v3 == NULL)
    {
        printf("memoria insuficiente");
        return 1;
    }
    printf("\n\n");

    printf("Elementos do vetor 1:\n");
    for(i = 0 ; i < n1 ; i++)
    {
        scanf("%d",v1 + i);
    }
    printf("\n\n");
    printf("Elementos do vetor 2:\n");
    for(i = 0 ; i < n1 ; i++)
    {
        scanf("%d",v2 + i);
    }
    printf("\n\n");
    printf("VETOR 1\n");
    for(i = 0 ; i < n1 ; i++)
        printf("vetor[%d] = [%d]\n",i + 1,*(v1 + i));
    printf("\n\n");
    printf("VETOR 2\n");
    for(i = 0 ; i < n1 ; i++)
        printf("vetor[%d] = [%d]\n",i + 1,*(v2 + i));
    printf("\n\n");
    printf("VETOR 3\n");
    for(i = 0 ; i < n1 ; i++)
    {
        v3[i] = v1[i] + v2[i];
        printf("vetor[%d] = [%d]\n",i + 1, *(v3 + i));
    }
 }
    return 0;
}

