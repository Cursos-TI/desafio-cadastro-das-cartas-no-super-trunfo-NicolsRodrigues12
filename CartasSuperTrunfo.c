#include <stdio.h>

int main(){

 //carta 1
long long int carta1;
long long int carta2;
char estado;
char codigo[4];
char cidade[20];
long long int populacao;
float area;
float PIB;
long long int Turistico;
float densidade;
float percapita;
float superpoder;

//carta 2
char estado2;
char codigo2[4];
char cidade2[20];
long long int populacao2;
float area2;
float PIB2;
long long int Turistico2;
float densidade2;
float percapita2;
float superpoder2;
    
    //imprime o cabeçalho da carta1:
     printf("\nCARTA 1:\n", carta1 );

    //O Estado mas com uma letra de 'A' a 'H' (representando um dos oito estados):
    printf("digite a primeira letra do nome do seu Estado:");
    scanf(" %c" , &estado);

    //O código da carta da sua cidade, (exemplo:A01,B03):
    printf("digite o código da sua cidade:");
    scanf("%s" , codigo);

    //O nome da cidade:
    printf("digite o nome da sua cidade:");
    scanf("%s" , cidade);

    //A quantidade da população(exemplo:6748000): 
    printf("Digite a quantidade da população:");
    scanf("%d" , &populacao);

    //A área da cidade (Exemplo:1200.25 km²):
    printf("Digite a área da sua cidade:");
    scanf("%f" , &area);

    //O PIB da população (Exemplo:300.50 bilhões de reais):
    printf("Digite o PIB da sua população:");
    scanf("%f", &PIB);

    //O numero de pontos turísticos(exemplo:30 , 40 , 50):
    printf("Digite a Quantidade de pontos turisticos da sua cidade:");
    scanf("%lld" , &Turistico);

    densidade = (float)populacao / area;
    percapita = (float)PIB / populacao;
    superpoder = (float) PIB + populacao + area + Turistico+ densidade + percapita;

    //Imprime o resultado na tela:
    printf(" - Estado: %c\n - Código: %s\n - Cidade: %s\n - População: %lld\n - Àrea: %.2f\n - PIB:%.2f\n - Número de Pontos Turísticos: %lld\n - Densidade populacional: %f\n - PIB per capita: %f\n - Super Poder é de: %f\n" , estado , codigo , cidade , populacao , area , PIB , Turistico , densidade , percapita, superpoder); 
    
     //imprime o cabeçalho da carta2:
     printf("\nCARTA 2:\n", carta2);

    //O Estado mas com uma letra de 'A' a 'H' (representando um dos oito estados):
    printf("digite a primeira letra do nome do seu Estado:");
    scanf(" %c" , &estado2);

    //O código da carta da sua cidade, (exemplo:A01,B03):
    printf("digite o código da sua cidade:");
    scanf("%s" , codigo2);

    //O nome da cidade:
    printf("digite o nome da sua cidade:");
    scanf("%s" , cidade2);

    //A quantidade da população(exemplo:6748000): 
    printf("Digite a quantidade da população:");
    scanf("%lld" , &populacao2);

    //A área da cidade (Exemplo:1200.25 km²):
    printf("Digite a área da sua cidade:");
    scanf("%f" , &area2);

    //O PIB da população (Exemplo:300.50 bilhões de reais):
    printf("Digite o PIB da sua população:");
    scanf("%f", &PIB2);

    //O numero de pontos turísticos(exemplo:30 , 40 , 50):
    printf("Digite a Quantidade de pontos turisticos da sua cidade:");
    scanf("%lld" , &Turistico2);

    densidade2 = (float)populacao2 / area2;
    percapita2 = (float)PIB2 / populacao2;
    superpoder2 = (float) PIB2 + populacao2 + area2 + Turistico2+ densidade2 + percapita2;

    //Imprime o resultado na tela:
    printf(" - Estado: %c\n - Código: %s\n - Cidade: %s\n - População: %lld\n - Àrea: %.2f\n - PIB:%.2f\n - Número de Pontos Turísticos: %lld\n - Densidade populacional: %f\n - PIB per capita: %f\n - Super Poder é de: %f\n" , estado , codigo , cidade , populacao , area , PIB , Turistico , densidade , percapita, superpoder); 
 
 
    printf("\nOs resulatados do jogo:\n");
    
    if (populacao > populacao2) {
    printf(" - A População da carta 1 venceu.\n");
} else if (populacao < populacao2) {
    printf(" - A População da carta 2 venceu.\n");
} else {
    printf(" - As populações são iguais.\n");
}

if (area > area2){
printf("- A Àrea da carta 1 venceu.\n");
}else if ( area < area2){
     printf("- A Àrea da carta 2 venceu.\n");
    } else { 
        printf("- As Áreas são iguais.\n");
    
            }
    
if (PIB > PIB2){
printf("- O PIB da carta 1 venceu.\n");
}else if ( PIB < PIB2){
     printf("- O PIB da carta 2 venceu.\n");
    } else { 
        printf("- OS PIBs são iguais.\n");
    }

    if (Turistico > Turistico2){
printf("- Os pontos turisticos da carta 1 venceu.\n");
}else if ( Turistico < Turistico2){
     printf("- O pontos turisticos da carta 2 venceu.\n");
    } else { 
        printf("- Os pontos turisticos são iguais.\n");
    }

       if (densidade > densidade2){
printf("- A densidade populacional da carta 1 venceu.\n");
}else if ( densidade < densidade2){
     printf("- A densidade populacional da carta 2 venceu.\n");
    } else { 
        printf("- As densidades populacionais são iguais.\n");
    }

       if (percapita > percapita2){
printf("- O PIB per Capita da carta 1 venceu.\n");
}else if ( percapita < percapita2){
     printf("- O PIB per Capita da carta 2 venceu.\n");
    } else { 
        printf("- Os PIBs per Capita são iguais.\n");
    }

     if (superpoder > superpoder2){
printf("- O Super Poder da carta 1 venceu.\n");
}else if ( superpoder < superpoder2){
     printf("- O Super Poder da carta 2 venceu.\n");
    } else { 
        printf("- Os Super Poderes são iguais.\n");
    }

            
return 0;

}
