# 🚀 LeetCode - Length of Last Word (58)

## 📌 Problema
Dada uma string `s` que consiste em palavras e espaços, retorne o **comprimento da última palavra**.  

- Uma **palavra** é definida como uma sequência máxima de caracteres que não são espaços.  
- Se não houver palavras, retorne `0`.  

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`s = "Hello World"`  

**Saída**:  
`5`  

---

### Exemplo 2
**Entrada**:  
`s = "   fly me   to   the moon  "`  

**Saída**:  
`4`  

---

### Exemplo 3
**Entrada**:  
`s = "luffy is still joyboy"`  

**Saída**:  
`6`  

---

## ⚙️ Restrições
- `1 <= s.length <= 10⁴`  
- `s` consiste apenas de letras maiúsculas/minúsculas e espaços `' '`.  
- Há pelo menos uma palavra em `s`.  

---

## 💡 Solução

A estratégia é:  
1. Começar do final da string.  
2. Ignorar todos os espaços em branco à direita.  
3. Contar os caracteres até encontrar um espaço ou o início da string.  
4. Retornar esse tamanho.  

---

## ✅ Complexidade

- **Tempo**: O(n) → percorremos a string no pior caso uma vez.  
- **Espaço**: O(1) → usamos apenas variáveis auxiliares.  
