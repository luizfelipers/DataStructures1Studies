
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

//LISTAS ENCADEADAS



//chamada função principal Main()
int main()
{
    //declarando variável do tipo lista
    Lista* lista;
    //cria lista vazia
    lista = criar_lista();
    
    //inserindo uma série de elementos na lista
    lista = inserir_lista(lista,10);
    lista = inserir_lista(lista,30);
    lista = inserir_lista(lista,40);

    
    return 0;
}
