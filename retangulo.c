# include <stdio.h>

int main ()
{

    int i;
    int j;
    int alt; //altura
    int larg; //largura
    char cont;
    
    do
    {
       
        printf ("\nVamos desenhar um retângulo? \n\n");
        do
        {
                printf ("Digite um valor válido para altura: ");
                scanf ("%d", &alt);
        }
        while(alt<=1);
        
        do
        {
            printf ("Digite um valor válido para largura: ");
            scanf ("%d", &larg);
        }
        while(larg<=1);
        
        printf("Olá meu nome é Alessandra e o retângulo ficou assim:\n\n");
        
        
        for (i=1; i<=alt;i++)
        {
            for (j=1;j<=larg;j++)
            if(j==1||i==1||j==larg||i==alt)
               {
                   printf("* ");
               }   
               else 
               {
                   printf("  ");
               }
            printf("\n");
        }
    
        printf("Deseja continuar (s/n)?\n");
        scanf(" %c", &cont);
    }   
    while (cont=='s');

return 0;
}