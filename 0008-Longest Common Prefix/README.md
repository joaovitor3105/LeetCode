# 🚀 LeetCode - Longest Common Prefix (14)

## 📌 Problema
Escreva uma função para encontrar o **prefixo comum mais longo** entre um array de strings.

Se não existir prefixo comum, retorne uma string vazia `""`.

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`strs = ["flower","flow","flight"]`  

**Saída**:  
`"fl"`  

---

### Exemplo 2
**Entrada**:  
`strs = ["dog","racecar","car"]`  

**Saída**:  
`""`  

**Explicação**:  
Não existe prefixo comum entre as strings.  

---

## ⚙️ Restrições
- `1 <= strs.length <= 200`  
- `0 <= strs[i].length <= 200`  
- `strs[i]` consiste apenas de letras minúsculas em inglês  

---

## 💡 Solução

A estratégia é:  
1. Assumir que o prefixo comum inicial é a **primeira string**.  
2. Comparar esse prefixo com cada string seguinte:  
   - Enquanto a string atual **não começar com o prefixo**, encurtamos o prefixo removendo o último caractere.  
   - Se o prefixo se tornar vazio, retornamos `""`.  
3. No final, o `prefix` será o maior prefixo comum.  

---

## ✅ Complexidade

- Tempo: O(S) → onde S é o número total de caracteres em todas as strings (no pior caso, verificamos todos).

- Espaço: O(1) → usamos apenas variáveis auxiliares.