# 🔢 Two Sum  

## 📖 Enunciado  
Dado um array de inteiros `nums` e um inteiro `target`, retorne os **índices** de dois números que somados resultem em `target`.  

- Cada entrada terá **exatamente uma solução**.  
- Você não pode usar o mesmo elemento duas vezes.  
- A resposta pode ser retornada em qualquer ordem.  

---

## 🧩 Exemplos  

**Exemplo 1:**  
Input: `nums = [2,7,11,15], target = 9`  
Output: `[0,1]`  
Explicação: `nums[0] + nums[1] == 9`  

**Exemplo 2:**  
Input: `nums = [3,2,4], target = 6`  
Output: `[1,2]`  

**Exemplo 3:**  
Input: `nums = [3,3], target = 6`  
Output: `[0,1]`  

---

## 💡 Ideia da Solução  

A solução mais simples é verificar todos os pares possíveis (`i` e `j`) até encontrar dois números cuja soma seja igual a `target`.  

- Percorremos o vetor com dois loops (`for`).  
- Para cada par `(i, j)`, verificamos se `nums[i] + nums[j] == target`.  
- Quando encontramos, retornamos os índices `[i, j]`.  

---
