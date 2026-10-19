### Conceitos :  
 Váriaveis guardam dados na memória e o **scanf/printf** realizam a entrada e saída via terminal.  
### Regras em C: 
Toda variável declarada precisa do tipo correto **(int, float, char)**.  
No **scanf**, utilize o operador de endereço **&**.  
### Erro comum:  
Esquecer o **&** no **scanf** ou esquecer de passar o nome da variável no final de **printf**.
### Conceitos :
A estrutura condicional **(if else)** permite ao programa tomar caminhos diferentes com base  
em uma condição verdadeira ou falsa.
### Regra em C:  
A condição deve ficar entre parênteses: **if (condicao) { ... } else { ... }**.
### Erro comum:  
Usar **=** (atribuição) no lugar de **==** (comparação de igualdade), ou esquecer as chaves **{}**  
quando houver mais de uma instrução dentro do bloco.
### Conceito:  
O **else if** serve para testar múltiplas condições em sequência. Os operadores lógicos **&&** (E) e  
**||** (OU) permitem validar intervalos e combinar regras.
### Regra em C:
Para testar se um número está entre A e B, usamos **variavel >= A  &&  variavel <=B**.
### Erro Comum:  
Usar **%f** com casas decimais (como **%.2f**) dentro do **scanf**, ou esquecer de incluir os limites **<=** e **>=**.
