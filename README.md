# Lista Dinâmica em C

Este repositório contém a implementação de um **Tipo Abstrato de Dados (TAD) Lista** em linguagem **C**, utilizando **alocação dinâmica de memória**. O projeto foi desenvolvido com fins didáticos, sendo indicado para o estudo de ponteiros, estruturas, organização modular e algoritmos de ordenação.

## Estrutura de Dados

A lista é representada pela estrutura `Lista`, composta por:

* `capacidade`: quantidade máxima de elementos que a lista pode armazenar
* `tamanho`: quantidade atual de elementos inseridos
* `lista`: ponteiro para um vetor dinâmico de inteiros

```c
typedef struct lista{
    int capacidade;
    int tamanho;
    int *lista;
} Lista;
```


## Funções Disponíveis

### Criação e Manipulação

* **`Lista* cria_lista(int capacidade);`**
  Cria e inicializa uma lista com a capacidade informada.

* **`void mostra_lista(Lista* lista);`**
  Exibe todos os elementos da lista.

* **`void preenche_lista(Lista* lista);`**
  Preenche a lista com valores (por exemplo, via entrada do usuário).


### Inserção de Elementos

* **`int adiciona_elementos_fim(Lista* lista, int valor);`**
  Insere um elemento no final da lista.

* **`int adiciona_elementos(Lista* lista, int valor, int posicao);`**
  Insere um elemento em uma posição específica da lista.


### Remoção de Elementos

* **`int remove_elementos(Lista* lista, int posicao);`**
  Remove o elemento presente em uma posição específica.

* **`int remove_elementos_fim(Lista* lista, int quantidade);`**
  Remove uma quantidade de elementos a partir do final da lista.


### Ordenação

* **`int insertionSort(Lista* lista);`**
  Ordena os elementos da lista utilizando o algoritmo **Insertion Sort**.


## Exemplo de Uso

```c
Lista *l = cria_lista(10);
adiciona_elementos_fim(l, 5);
adiciona_elementos_fim(l, 2);
adiciona_elementos(l, 8, 1);
insertionSort(l);
mostra_lista(l);
```


## Objetivos do Projeto

* Praticar o uso de **ponteiros**
* Trabalhar com **alocação dinâmica de memória**
* Implementar e manipular **estruturas de dados**
* Compreender o funcionamento do algoritmo **Insertion Sort**
* Organizar código em C de forma modular


## Tecnologias Utilizadas

* Linguagem C
* GCC (GNU Compiler Collection)
* Ambiente Linux


## Observações

Este projeto é voltado para aprendizado acadêmico e pode ser facilmente expandido para incluir:

* Outros algoritmos de ordenação
* Tratamento de erros mais robusto
