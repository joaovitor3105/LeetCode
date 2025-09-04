# 🚀 LeetCode - Zigzag Conversion (6)

## 📌 Problema
A string `"PAYPALISHIRING"` é escrita em um padrão de zigzag em um determinado número de linhas, como se estivesse escrevendo em uma grade e depois lendo linha por linha.

Por exemplo, com `numRows = 3`, a string é escrita assim:

```
P A H N
A P L S I I G
Y I R

```

Ao ler linha por linha, o resultado é `"PAHNAPLSIIGYIR"`.

Implemente o método que converte uma string dada para esse padrão zigzag, retornando o resultado lido linha a linha.

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`s = "PAYPALISHIRING", numRows = 3`  

**Saída**:  
`"PAHNAPLSIIGYIR"`  

---

### Exemplo 2
**Entrada**:  
`s = "PAYPALISHIRING", numRows = 4`  

A escrita em zigzag é:  

```
P I N
A L S I G
Y A H R
P I

```
**Saída**:  
`"PINALSIGYAHRPI"`  

---

### Exemplo 3
**Entrada**:  
`s = "A", numRows = 1`  

**Saída**:  
`"A"`  

---

## ⚙️ Restrições
- `1 <= s.length <= 1000`  
- `s` consiste apenas de letras em inglês (maiúsculas/minúsculas), `','` e `'.'`.  
- `1 <= numRows <= 1000`  

---

## 💡 Solução

A ideia é simular o movimento "zigzag":
- Criamos um vetor de strings, um para cada linha.  
- Iteramos pelos caracteres da string original, adicionando na linha correspondente.  
- Alternamos entre **descendo** e **subindo** quando atingimos a última ou a primeira linha.  
- No final, concatenamos todas as linhas.

## ✅ Complexidade

- Tempo: O(n) → percorremos todos os caracteres uma vez.

- Espaço: O(n) → armazenamos os caracteres temporariamente nas linhas.