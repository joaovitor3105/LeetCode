# 🚀 LeetCode - Valid Parentheses (20)

## 📌 Problema
Dada uma string `s` que contém apenas os caracteres `'('`, `')'`, `'{'`, `'}'`, `'['` e `']'`, determine se a string é **válida**.

Uma string é considerada válida se:
1. Os parênteses abertos forem fechados pelo **mesmo tipo de parêntese**.
2. Os parênteses abertos forem fechados na **ordem correta**.
3. Todo parêntese de fechamento tiver um correspondente de abertura.

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`s = "()"`  

**Saída**:  
`true`  

---

### Exemplo 2
**Entrada**:  
`s = "()[]{}"`  

**Saída**:  
`true`  

---

### Exemplo 3
**Entrada**:  
`s = "(]"`  

**Saída**:  
`false`  

---

### Exemplo 4
**Entrada**:  
`s = "([])"`  

**Saída**:  
`true`  

---

### Exemplo 5
**Entrada**:  
`s = "([)]"`  

**Saída**:  
`false`  

---

## ⚙️ Restrições
- `1 <= s.length <= 10^4`  
- `s` consiste apenas dos caracteres `'()[]{}'`.  

---

## 💡 Solução

A solução utiliza uma **pilha (stack)**:  
- Sempre que encontramos um **abre**, empilhamos.  
- Sempre que encontramos um **fecha**, verificamos se o topo da pilha é o correspondente correto.  
- Se não for, a string é inválida.  
- No final, a pilha deve estar **vazia** para a string ser válida. 

## ✅ Complexidade

- Tempo: O(n) → percorremos a string uma vez.

- Espaço: O(n) → no pior caso, a pilha pode armazenar todos os caracteres (se forem todos aberturas).