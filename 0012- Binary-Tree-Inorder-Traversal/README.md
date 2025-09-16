# 🚀 LeetCode - Binary Tree Inorder Traversal (94)

## 📌 Problema
Dada a raiz de uma árvore binária, retorne a **travessia in-order** dos seus nós.  

- **Travessia in-order**: visitar primeiro o **nó da esquerda**, depois o **nó atual**, e por fim o **nó da direita**.

---

## 📖 Exemplos

### Exemplo 1
**Entrada:**  
`root = [1,null,2,3]`  

**Saída:**  
`[1,3,2]`  

**Explicação:**  

```
1
 \ 
  2
 / 
3    
```
Travessia in-order → esquerda, raiz, direita → `[1,3,2]`.

---

### Exemplo 2
**Entrada:**  
`root = [1,2,3,4,5,null,8,null,null,6,7,9]`  

**Saída:**  
`[4,2,6,5,7,1,3,9,8]`  

**Explicação:**  
A árvore é:

```
    1
   / \
  2   3
 / \    \
4   5    8
   / \    \
  6   7    9

```

Travessia in-order → esquerda, raiz, direita → `[4,2,6,5,7,1,3,9,8]`.

---

### Exemplo 3
**Entrada:**  
`root = []`  

**Saída:**  
`[]`  

---

### Exemplo 4
**Entrada:**  
`root = [1]`  

**Saída:**  
`[1]`  

---
## ⚙️ Restrições
- O número de nós na árvore está no intervalo `[0, 100]`.  
- `-100 <= Node.val <= 100`  

---

## 💡 Solução

Podemos resolver recursivamente:  
1. Se o nó atual for `nullptr`, retornar.  
2. Percorrer a **subárvore esquerda**.  
3. Adicionar o valor do **nó atual** ao resultado.  
4. Percorrer a **subárvore direita**.  

---

## ✅ Complexidade

- **Tempo:** O(n) → cada nó é visitado exatamente uma vez.  
- **Espaço:** O(h) → devido à pilha de chamadas recursivas, onde `h` é a altura da árvore.
