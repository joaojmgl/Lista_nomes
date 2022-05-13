 # Substuição de nomes 

## Proposta apresentada:
 - O exercicio apresenta um prblema onde é necessario apresentar um     arquivo com ate 100 nomes aleatorios.
 - Em seguida era necesario indentificar os nomes replicados na lista, logo apos removelos sem mover os ponteiros.

 ## Logica utilizada :
 1. Leitura e gravação do nomes encontrados no arquivos 
    - Primeiramente foi necessario a criação d eum arquivo txt com varios nomes.
    - Logo apos foi necessario utilizar uma funçao na ``` main.cpp ```     chamado ``` Read_arch ```.
    1.1 Onde a função recebe um arquivo **.txt** contendo os nomes a serem analisados pelo algoritmo.
    1.2 logo apos receber o arquivo a função abre o arquivo e le os dados que existem dentro do arquivo e gravalos em uma variavel auxiliar ` arq.open("Lista_nomes.txt"); ` *Abrindo o arquivo*. 

    ```c++
    if(arq.is_open()){
		while(!arq.eof()){
			getline(arq, n);
			aux.val=n;
                
                '*Leitura e gravação dos nomes dos arquivos*'
    
    ```
    1.3 APos isso gravei os nomes encontrados na fila linear, chamando a função `LInsert(&l, aux);`
     
 2. A segunda parte do codigo criamos uma funçao para remover os nomes   replicados sem que os ponteiro sejam alterados:
   - Primeiramente criamos a função `Tocompare(&l)`.
   2.1 Onde criamos dois lop *for* atrelados a um *if* que usamos para comparamos o valor da posição *i* com o valor atribuido a posição *i+J*.
   ```c++
   for (int i=l->first ;i<=l->last; i++ ){
		for(int j =1;j<=l->last;j++){
			if(l->vet[i].val==l->vet[i+j].val)
   ```
   2.3 Em seguida caso a condição seja atendida atribuimos o valor *"\0"* no lugar do valor que estava atribuido a posição do vetor.
   ```c++
     l->vet[i+j].val= "\0";
   ```
 3. Por ultimo na **main.cpp** chamamos as variaveis:
   ```c++
   FLVazia(&l);
   Read_arch(&l,aux);
   Tocompare(&l);
	 LImprime(&l);
   ```
   Para que elas sejam executadas.

   ## Funcionamento 
   
 ### Funcionamento Makefile:
                                                                   
 |      Comandos       |        Função       |
 | ------------------- | ------------------- |
 |         Make        |  Compila o Programa |
 |       Make run      | Executa o algoritmo |
 
 ### Funcionamento Aquivo *"Lista_nomes.txt"*:
 
 - O arquivo deve ser um aquivo txt.
 - Conter ate no maximo 100 nomes.
 - O nomes devem ser escritos um nome por linha.Ex:
   ```
   joao
   marcelo
   marcos
   gustavo
   matheus
   ```
   ## Resposta:

   No exercicio proposto foi perguntado como eu iria lidar com os espaços em branco no vetor para futuras novas inserções. Bom acredito que a forma mais inteligente seria ordenar o vetor de forma que os espaço em brancos fiquem sempre nas primeiras posições da fila.  