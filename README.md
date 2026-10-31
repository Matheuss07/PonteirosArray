## Respostas às perguntas da atividade

### Pergunta 1 — Exercício 2

A função dobra consegue alterar o vetor declarado no main sem return porque,
em C, um array decai para o ponteiro para seu primeiro elemento: ao chamar
dobra(v, 5), o parâmetro int *v recebe o endereço de v[0]. A função, portanto,
opera diretamente sobre a memória original do main, modificando cada v[i] no
local. Não há cópia do vetor e não é necessário devolver outro vetor.

### Pergunta 2 — Exercício 5

Dois endereços consecutivos de int obtidos na execução real:

- v[0]: 00000082699FFB10
- v[1]: 00000082699FFB14

Diferença: 00000082699FFB14 - 00000082699FFB10 = 4 bytes, que é exatamente
sizeof(int) nesta plataforma (4 bytes). Isso confirma a fórmula
endereço = base + índice * sizeof(tipo): para índice = 1,
base + 1 * 4 = base + 4, ou seja, o endereço do segundo elemento está 4 bytes
após o primeiro.

### Pergunta 3 — Exercício 6

O AddressSanitizer detectou um stack-buffer-overflow porque a escrita em v[10]
está fora dos limites válidos do vetor de 10 elementos (índices 0 a 9), e sem ele o
erro poderia passar despercebido por ser comportamento indefinido que nem sempre
causa falha visível.
