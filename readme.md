# Lista 01 - Estruturas Básicas
1. Escreva um programa em C que resolva as seguintes expressões:
	1.  3 + 4
	2. 7/4
	3. 3^2
	4. 5.3 * 2.1
	5.  2 * 5 – 2
	6. 2 + 2 * 5
	7. sin(3.141502)
	8.  sqrt(5)
	9. 1 + 2 + 3
	10. 1 * 2 * 3
	11. (1 + 2 + 3) / 3.0
	12. (2 + 4) * (3 – 1)
	13. (9 / 3) + (3 * 2)
	14. sin(4.5) + cos(3.7)
	15. log(2.3) – log(3.1)
	16. log (7) + (log(7) * log(7) – cos(log(7)))
	17.  (10.3 + 8.4)/50.3 - (10.3 + 8.4)
	18. (cos(0.8) + sin(0.8)) * (cos(0.8) – sin(0.8))
2. Escreva um programa em C que lê quatro números reais do teclado (a, b, c e d) e exibe o resultado das seguintes expressões:
	1. a + b
	2. a/c
	3. a^2
	4. b * c
	5.  a * b – c
	6. a + b * c
	7.  sin(a)
	8.  sqrt(b)
	9. a + b + c
	10.  a * b * c
	11. (a + b + c) / d
	12. (a + b) * (a – d)
	13. (b / c) + (a * d)
	14. sin(b) + cos(c)
	15. log(a) – log(c)
	16. log(a) + (log(b) * log(d) – cos(log(c)))
	17. (b + a)/c - (d + a)
	18. (cos(d) + sin(c)) * (cos(b) – sin(a))
3. Escreva um programa em C que lê três números reais do teclado (a, b e c) e exibe o resultado das seguintes expressões:
	1. **Média:** média de a, b e c.
	2. **Média ponderada:** média ponderada de a, b e c onde a tem peso 3, b 4 e c 5.
	3. **Perímetro:** perímetro de um círculo de raio a.
	4. **Área do círculo:** área de um círculo de raio a.
	5. **Área do triângulo:** área de um triângulo de base b e altura c.
	6. **Hipotenusa:** hipotenusa de um triângulo retângulo, cujos lados conhecidos são b e c.

# Lista 02 - Procedimentos e funções
1. Escreva funções em C que resolvem os seguintes problemas:
	1. **Média:** calcula a média de a, b e c.
	2. **Média ponderada:** calcula a média ponderada de a, b e c onde a tem peso 3, b 4 e c 5.
	3. **Perímetro:** calcula o perímetro de um círculo de raio r.
	4. **Área do círculo:** calcula a área de um círculo de raio r.
	5. **Área do triângulo:** calcula a área de um triângulo de base b e altura c.
	6. **Área da caixa:** calcula a área de uma caixa de dimensões a, b e c.
	7. **Volume da caixa:** calcula o volume de uma caixa de dimensões a, b e c.
	8. **Área do cilindro:** calcula a área de um cilindro de raio r e altura h.
	9. **Volume do cilindro:** calcula o volume de um cilindro de raio r e altura h.
	10. **Hipotenusa:** calcula a hipotenusa de um triângulo retângulo com lados b e c.
	11. **Raiz positiva:** calcula a raiz positiva da equação do segundo grau definida por a.x^2 + b.x + c.
2. Escreva um programa em C para verificar se as funções do exercício anterior estão corretas.

# Lista 03 - Comandos de seleção e predicados
1. Escreva as seguintes funções em C:
	1. **max(a,b,c):** Retorna o maior dentre três números.
	2. **min(a,b,c):** Retorna o menor dentre três números.
2. Escreva os seguintes predicados em C:
	1. **par(x):** testa se um número é par;
	2. **dentro(x,y,z):** testa se o número x está dentro do intervalo [y z];
	3. **fora(x,y,z):** testa se o número x está fora do intervalo [y,z].
3.  Defina o predicado bissexto(ano) que testa se um ano é bissexto. Considere que bissexto é aquele ano que é divisível por 400 ou é divisível por 4 e, nesse caso, não é divisível por 100. Por exemplo: bissexto(2000) --> verdadeiro; bissexto(1900) --> falso; bissexto(3600) --> verdadeiro; bissexto(2004) --> verdadeiro. Dica: escreva um predicado divisivel(x,y) que testa se x é divisível por y, por exemplo: divisivel(2000,4) --> verdadeiro; divisível(2004,400) --> falso.

# Lista 04 - Recursão
1. Escreva as seguintes funções recursivas em C:
	1. **fat(n):** retorna o valor do fatorial de n.
	2. **mdc(a,b):** retorna o máximo divisor comum entre a e b.
	3. **mdc3(a,b,c):** retorna o máximo divisor comum entre a, b e c.
	4. **fib(n):** retorna o n-ésimo termo da série de Fibonacci
	5. **primo(x):** predicado que testa se um número x é primo.
	6. **decrescente(x):** procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
	7. **res(a,b):** retorna o resto da divisão entre a e b.
	8. **form(n):** retorna o valor do somatório de i*i, com i variando de 1 até n.
	9. **mmc(a, b):** retorna o menor múltiplo comum de a e b.
	10. **div(a, b):** retorna o resultado da divisão inteira de a por b.
	11. **sqrt(n):** retorna a raiz quadrada de n (com precisão de 0.001).
	12. **dig(n):** retorna a soma dos dígitos de um inteiro positivo n. A soma dos dígitos de 132, por exemplo, é 6.
	13. **exp(k, n):** retorna k^n
	14. **crescente(x):** escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.
2. Escreva um programa em C para testar todas as funções definidas acima.

# Lista 05 - Estruturas de repetição
1.  Escreva as seguintes funções utilizando estruturas de repetição em C:
	1. **fat(n):** retorna o valor do fatorial de n.
	2. **mdc(a,b):** retorna o máximo divisor comum entre a e b.
	3. **mdc3(a,b,c):** retorna o máximo divisor comum entre a, b e c.
	4. **fib(n):** retorna o n-ésimo termo da série de Fibonacci
	5. **primo(x):** predicado que testa se um número x é primo.
	6. **decrescente(x):** procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
	7. **res(a,b):** retorna o resto da divisão entre a e b.
	8. **form(n):** retorna o valor do somatório de i*i, com i variando de 1 até n.
	9. **mmc(a, b):** retorna o menor múltiplo comum de a e b.
	10. **div(a, b):** retorna o resultado da divisão inteira de a por b.
	11. **sqrt(n):** retorna a raiz quadrada de n (com precisão de 0.001).
	12. **dig(n):** retorna a soma dos dígitos de um inteiro positivo. A soma dos dígitos de 132, por exemplo, é 6.
	13. **exp(k, n):** retorna k^n
	14. **crescente(x):** escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.

# Lista 06 - Arquivos
1. Escreva um programa em C que lê um número n do teclado e gera um arquivo com os n primeiros números primos.
2. Escreva um programa em C que lê um arquivo com números naturais (um número por linha) e grava outro arquivo onde cada linha indica se o respectivo número é primo ou não.
3. Escreva um programa em C que lê um arquivo com números naturais e gera dois arquivos: “primos.txt” com aqueles números que são primos e “outros.txt” com aqueles números que não são primos.
4. Escreva um programa em C que lê um arquivo com números reais (um número por linha) e grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função f(x) = x^2 - 5x + 1.
5. Escreva um programa em C que lê um arquivo com números reais (um número por linha) e grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função f(x) = ax^3 + bx^2 + cx + d, onde a, b, c e d são lidos do teclado.

# Lista 07 - Arranjos
1.  Escreva um programa em C que lê uma sequência de números de um arquivo e armazena em um arranjo. Assuma que a quantidade de números no arquivo não ultrapassa o limite máximo de elementos no arranjo (e.g. 1000).
2. Escreva uma função em C++ que recebe um arranjo de números reais v e número de elementos n armazenados em v e que retorna a média dos n elementos armazenados em v. Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
3. Escreva uma função em C que recebe um arranjo de números reais v e número de elementos n armazenados em v e que retorna a variância dos n elementos armazenados em v. Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
4. Escreva uma função em C que recebe um arranjo de números reais v e número de elementos n armazenados em v e que retorna o maior dos n elementos armazenados em v. Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
5. Escreva uma função em C que recebe um arranjo de números reais v e número de elementos n armazenados em v e que retorna o menor dos n elementos armazenados em v. Assuma que n é menor que o número máximo de elementos do arranjo (e.g. 1000).
6. Escreva uma função em C que recebe dois arranjos de números reais u e v e a dimensão n dos dois arranjos e que retorna o produto escalar de u e v.

# Lista 09 - Matrizes
1. Escreva um programa em C que lê de um arquivo o número de linhas, o número de colunas e todos os coeficientes de uma matriz.
2. Escreva uma função que recebe uma matriz quadrada de dimensão n e que retorna a média dos elementos armazenados na matriz. O cabeçalho da função deve ser o seguinte: float media_matriz(int n, float mat[][100])
3. Escreva uma função que recebe uma matriz quadrada A de dimensão n e que transforma A em uma matriz identidade. O cabeçalho da função deve ser o seguinte: void identidade(int n, float A[][100])
4. Escreva uma função que recebe uma matriz quadrada A de dimensão n e que retorna uma matriz T que é a transposta de A. O cabeçalho da função deve ser o seguinte: void transposta(int n, float A[][100], float T[][100])
5. Escreva uma função que testa se uma matriz quadrada A de dimensão n é simétrica. O cabeçalho da função deve ser o seguinte: bool simetrica(int n, float A[][100])
6. Escreva uma função que recebe duas matrizes quadradas A e B de dimensão n e que retorna uma matriz S que é a soma de A e B. O cabeçalho da função deve ser o seguinte: void soma_matriz(int n, float A[][100], float B[][100], float S[][100])
7. Escreva uma função que recebe duas matrizes quadradas A e B de dimensão n e que retorna uma matriz P que é o produto de A e B. O cabeçalho da função deve ser o seguinte: void mult_matriz(int n, float A[][100], float B[][100], float P[][100])

# Lista 10 - Registros
## Parte I: Pontos
1. Implemente a seguinte estrutura de dados em C que representa pontos em um espaço euclidiano: 
```
struct Ponto {
	float x;
	float y;
	float distancia(Ponto& p); 
	void atribuir(float a, float b);
};
```
2. Implemente o método float Ponto::distancia(Ponto &p) que calcula a distância entre o ponto corrente (aquele que chama o método) e o ponto p passado como parâmetro.
3. Implemente o método void Ponto::atribuir(float a, float b) que atribui respectivamente os valores a e b as coordenadas x e y do ponto corrente.

## Parte II: Triângulos
1. Utilizando o tipo de dados Ponto, defina um tipo de dado Triangulo, que representa um triângulo num espaço euclidiano.
2. Implemente um método float Triangulo::perimetro() que retorna o perímetro do triângulo corrente (aquele que chama o método). 
3. Implemente um método float Triangulo::area() que retorna a área do triângulo corrente. 
4. Implemente um método bool Triangulo::equilatero() que testa se o triângulo corrente é equilátero. 
5. Implemente um método bool Triangulo::semelhante(Triangulo &t) que testa se o triângulo t é semelhante ao triângulo corrente.

## Parte III: Retângulos
1. Utilizando o tipo de dados Ponto, defina um tipo de dado Retangulo, que representa um retângulo num espaço euclidiano.
2. Implemente um método float Retangulo::perimetro() que retorna o perímetro do retângulo corrente (aquele que chama o método). 
3. Implemente um método float Retangulo::area() que retorna a área do retângulo corrente. 
4. Implemente um método bool Retangulo::quadrado() que testa se o retângulo corrente é quadrado.

## Parte IV: Circunferência
13. Defina o tipo de dados Circunferencia. Pense bem em quais os dados que definem uma circunferência.
14. Implemente um método float Circunferencia::perimetro() que retorna o perímetro da circunferência corrente (aquele que chama o método). 
15. Implemente um método float Circunferencia::area() que retorna a 
área da circunferência corrente. 
16. Implemente um método bool Circunferencia::contem(Ponto& p) que testa se o ponto p está dentro da circunferência corrente. 
17. Implemente um método bool Circunferencia::contem(Triangulo& p) que testa se o triângulo t está dentro da circunferência corrente.
18. Implemente um método bool Circunferencia::contem(Retangulo& r) que testa se o retângulo r está dentro da circunferência corrente.
19. Implemente um método bool Circunferencia::pertence(Ponto& p) que testa se o ponto p está na linha definida pela circunferência corrente. 
20. Implemente um método bool Circunferencia::circunscrita(Triangulo& t) que testa se a circunferência corrente é circunscrita ao triângulo t.
21. Implemente um método bool ircunferencia::circunscrita(Retangulo& r) que testa se a circunferência corrente é circunscrita ao retângulo r. 
