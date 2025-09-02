# 🚀 LeetCode - Remove Duplicates from Sorted Array (26)

## 📌 Problema
Dado um array de inteiros **ordenado em ordem não-decrescente**, o objetivo é **remover os elementos duplicados in-place**, de forma que cada número único apareça apenas uma vez.  
A ordem relativa dos elementos deve ser mantida.  

Você deve retornar o número de elementos únicos `k`.  
Após a execução, os primeiros `k` elementos do array devem conter os valores únicos.  
Os elementos restantes não importam.  

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`nums = [1,1,2]`  

**Saída**:  
`k = 2, nums = [1,2,_]`  

**Explicação**: Os dois primeiros elementos do array são únicos `[1, 2]`.  

---

### Exemplo 2
**Entrada**:  
`nums = [0,0,1,1,1,2,2,3,3,4]`  

**Saída**:  
`k = 5, nums = [0,1,2,3,4,_,_,_,_,_]`  

**Explicação**: Os cinco primeiros elementos do array são `[0,1,2,3,4]`.  

---

## ⚙️ Restrições
- `1 <= nums.length <= 3 * 10^4`  
- `-100 <= nums[i] <= 100`  
- O array `nums` está ordenado em ordem não-decrescente.  

---

## 💡 Solução

A solução utiliza a técnica de **dois ponteiros**:
- Um ponteiro (`pos`) mantém a posição do último número único encontrado.  
- O outro percorre o array (`i`).  
- Quando encontra um novo número diferente de `nums[pos]`, avançamos `pos` e copiamos esse valor para `nums[pos]`.  

## ✅ Complexidade

- Tempo: O(n) → percorremos o array uma vez.

- Espaço: O(1) → solução feita in-place, sem memória extra.