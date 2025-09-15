# 🚀 LeetCode - Search Insert Position (35)

## 📌 Problema
Dado um **array ordenado** de inteiros distintos e um valor alvo (`target`), retorne o índice se o alvo for encontrado.  
Se não for encontrado, retorne o índice onde ele deveria estar inserido em ordem.  

Você deve escrever um algoritmo com **complexidade O(log n)**.  

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`nums = [1,3,5,6], target = 5`  

**Saída**:  
`2`  

---

### Exemplo 2
**Entrada**:  
`nums = [1,3,5,6], target = 2`  

**Saída**:  
`1`  

---

### Exemplo 3
**Entrada**:  
`nums = [1,3,5,6], target = 7`  

**Saída**:  
`4`  

---

### Exemplo 4
**Entrada**:  
`nums = [1,3,5,6], target = 0`  

**Saída**:  
`0`  

---

## ⚙️ Restrições
- `1 <= nums.length <= 10⁴`  
- `-10⁴ <= nums[i] <= 10⁴`  
- `nums` contém valores **distintos** e está ordenado em **ordem crescente**.  
- `-10⁴ <= target <= 10⁴`  

---

## 💡 Solução

A estratégia é aplicar **busca binária**:  
1. Definir `inicio = 0` e `fim = n - 1`.  
2. Enquanto `inicio <= fim`:  
   - Calcular o índice `meio = (inicio + fim) / 2`.  
   - Se `nums[meio] == target`, retornamos `meio`.  
   - Se `nums[meio] < target`, significa que o `target` deve estar à **direita** → `inicio = meio + 1`.  
   - Caso contrário, o `target` deve estar à **esquerda** → `fim = meio - 1`.  
3. Se o elemento não for encontrado, a posição correta para inserção será `inicio`.  

---

## ✅ Complexidade

- **Tempo**: O(log n) → devido à busca binária.  
- **Espaço**: O(1) → usamos apenas variáveis auxiliares.  
