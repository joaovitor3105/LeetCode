# 🚀 LeetCode - Plus One (66)

## 📌 Problema
Você recebe um array de inteiros não negativos `digits`, onde cada elemento representa um dígito de um número.  
Os dígitos estão armazenados em ordem do **mais significativo para o menos significativo** (da esquerda para a direita).  

Seu objetivo é **somar 1 ao número** e retornar o array resultante de dígitos.  

---

## 📖 Exemplos

### Exemplo 1
**Entrada:**  
`digits = [1,2,3]`  

**Saída:**  
`[1,2,4]`  

**Explicação:**  
`123 + 1 = 124`

---

### Exemplo 2
**Entrada:**  
`digits = [4,3,2,1]`  

**Saída:**  
`[4,3,2,2]`  

**Explicação:**  
`4321 + 1 = 4322`

---

### Exemplo 3
**Entrada:**  
`digits = [9]`  

**Saída:**  
`[1,0]`  

**Explicação:**  
`9 + 1 = 10`

---

## ⚙️ Restrições
- `1 <= digits.length <= 100`  
- `0 <= digits[i] <= 9`  
- O array `digits` **não contém zeros à esquerda**  

---

## 💡 Solução

A ideia é simular a soma como em uma conta no papel:  
1. Percorrer o array de trás para frente.  
2. Somar `1` ao último dígito.  
3. Se o dígito for menor que `9`, terminamos.  
4. Se o dígito virar `10`, transformamos em `0` e propagamos o "vai 1" para a esquerda.  
5. Se todos os dígitos eram `9`, adicionamos um `1` no início do array.  

---

## ✅ Complexidade

- **Tempo:** O(n) → cada dígito é processado no máximo uma vez.  
- **Espaço:** O(1) → usamos apenas o próprio array, exceto no caso de inserir um novo dígito no início.  

