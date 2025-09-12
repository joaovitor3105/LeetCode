# 🚀 LeetCode - Same Tree (100)

## 📌 Problema
Dadas duas raízes de árvores binárias `p` e `q`, escreva uma função para verificar se elas são **idênticas** ou não.  

Duas árvores binárias são consideradas idênticas se:
1. Elas são estruturalmente iguais.  
2. Os nós correspondentes têm o mesmo valor.  

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`p = [1,2,3], q = [1,2,3]`  

**Saída**:  
`true`  

---

### Exemplo 2
**Entrada**:  
`p = [1,2], q = [1,null,2]`  

**Saída**:  
`false`  

---

### Exemplo 3
**Entrada**:  
`p = [1,2,1], q = [1,1,2]`  

**Saída**:  
`false`  

---

## ⚙️ Restrições
- O número de nós em ambas as árvores está no intervalo `[0, 100]`.  
- `-10⁴ <= Node.val <= 10⁴`  

---

## 💡 Solução

A estratégia é recursiva:  
1. Se ambas as árvores forem nulas, elas são iguais.  
2. Se apenas uma delas for nula, são diferentes.  
3. Se os valores dos nós forem diferentes, são diferentes.  
4. Caso contrário, verificar recursivamente os filhos à esquerda e à direita.  

---

## ✅ Complexidade

- **Tempo**: O(n) → percorremos todos os nós no pior caso.  
- **Espaço**: O(h) → devido à profundidade da recursão, onde `h` é a altura da árvore.  
