# 💻 CS50 Exercises

![C](https://img.shields.io/badge/C%20Programming-00599C?style=for-the-badge&logo=c)![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)

Este repositório contém todos os exercícios resolvidos do curso [CS50x: Introduction to Computer Science](https://cs50.harvard.edu/x/), da Universidade de Harvard — uma introdução rigorosa e desafiadora ao mundo da Ciência da Computação, abordando fundamentos como algoritmos, estruturas de dados, linguagens C, Python, SQL, sistemas e mais.

🧩 O curso está sendo realizado na versão **[CC50](https://www.estudarfora.org.br/cc50-v2/)**, que é uma **iniciativa da [Fundação Estudar](https://www.estudar.org.br/) em parceria com o [Estudar Fora](https://www.estudarfora.org.br/)**. A plataforma oferece uma **versão legendada para pt-br**, com suporte e emissão de certificados válidos para o Brasil.

Todos os exercícios foram resolvidos do zero, com foco em aprendizado sólido, boas práticas e organização por módulos.

## 📈 Progresso

- ✅ Módulo 1 – C
- ✅ Módulo 2 – Arrays
- ✅ Módulo 3 – Algoritmos
- ⏳ Módulo 4 – Memória
- ⏳ Módulo 5 – Estrutura de Dados
- ⏳ Módulo 6 - Python
- ⏳ Módulo 6.5 – Inteligência Artificial
- ⏳ Módulo 7 – SQL
- ⏳ Módulo 8 – HTML, CSS e JavaScript
- ⏳ Módulo 9 – Flask
- ⏳ Módulo 10 – Ética

## 🧰 Biblioteca personalizada mycs50lib

Para este repositório, foi criada uma biblioteca própria chamada mycs50lib.c (com mycs50lib.h) que substitui algumas funções da cs50.h, como:

```c
typedef char* string;
int get_int();
long get_long();
float get_float();
string get_string();
```

Essas funções incluem validações robustas de entrada, evitando erros de digitação e mantendo o código mais limpo e seguro.

Essa abordagem permite compilar os exercícios sem depender da biblioteca original do CS50, tornando o projeto mais portável e compatível com qualquer sistema que possua um compilador C. Além disso, ao centralizar as funções de entrada em uma única biblioteca, evita-se a repetição de código em múltiplos arquivos, promovendo a reutilização, organização e manutenibilidade do projeto.

## 🧠 Exercícios por módulo

**Módulo 1 – C**
- [mario](pset1/mario.c) – Pirâmides em ASCII
- [mario-challenge](pset1/mario-challenge.c) – Variação criativa do problema do Mario
- [cash](pset1/cash.c) – Algoritmos gananciosos
- [credit](pset1/credit.c) – Validador de número de cartão (Luhn)
- [population](pset1/population.c) – Crescimento populacional

**Módulo 2 - Arrays**
- [scrabble](pset2/scrabble.c) – Pontuação de palavras no Scrabble
- [readability](pset2/readability.c) – Índice de legibilidade do texto
- [caesar](pset2/caesar.c) – Cifra de César para cifrar texto
- [substitution](pset2/substitution.c) – Cifra de substituição com alfabeto dado

**Módulo 3 - Algoritmos**
- [sort](pset3/sort/answers.txt) - Estudo de algoritmos de ordenação
- [plurality](pset3/plurality/plurality.c) - Eleição por maioria simples
- [runoff](pset3/runoff/runoff.c) - Eleição com rodadas de eliminação
- [tideman](pset3/tideman/tideman.c) - Eleição usando grafo sem ciclos

(Novos módulos serão adicionados conforme o curso progride)

## 🛠️ Como executar os exercícios

Para compilar e rodar um exercício, use o Makefile:

```bash
make all
./output/mario
./output/mario-challenge
./output/credit.c
...
...
```

## 🤝 Contribuições

Este repositório é focado em aprendizado individual. Caso você esteja fazendo o curso também e queira comparar soluções, sinta-se à vontade para explorar o conteúdo! Feedbacks e sugestões são sempre bem-vindos via issues.
 
## 📄 Licença

Este projeto está licenciado sob a MIT License.
Sinta-se livre para estudar, adaptar e usar o conteúdo.