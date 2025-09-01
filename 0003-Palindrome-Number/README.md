# 🔢 Palindrome Number (LeetCode 9)

Este projeto implementa em **C++** uma solução para o problema [Palindrome Number](https://leetcode.com/problems/palindrome-number/) do LeetCode.  

O objetivo é verificar se um número inteiro `x` é um **palíndromo**.  
Um número é palíndromo se for lido da **esquerda para a direita** e da **direita para a esquerda** da mesma forma.  

---

## 📌 Exemplos

### Exemplo 1
**Entrada:**  
x = 121
**Saída:**  
true
**Explicação:**  
`121` lido em ambas as direções continua `121`.  

---

### Exemplo 2
**Entrada:**  
x = -121
**Saída:**  
false
**Explicação:**  
Da esquerda para a direita é `-121`, da direita para a esquerda é `121-`.  
Não é palíndromo.  

---

### Exemplo 3
**Entrada:**  
x = 10
**Saída:**  
**Explicação:**  
Invertido fica `01`, que não é igual a `10`.  

---

## ⚙️ Restrições

- `-2^31 <= x <= 2^31 - 1`  

---

## 🚀 Abordagens da Solução

### Conversão para string
- Converte o inteiro para string.  
- Compara a string com sua versão invertida.  
- Solução simples, mas menos eficiente.  



