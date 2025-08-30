# ✅ Validação de Sudoku (LeetCode 36)

Este projeto implementa em **C++** uma solução para o problema [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) do LeetCode.  
O objetivo é verificar se um tabuleiro de Sudoku **9x9** é válido de acordo com as regras:

- Cada **linha** deve conter os dígitos `1-9` sem repetição.  
- Cada **coluna** deve conter os dígitos `1-9` sem repetição.  
- Cada uma das nove **subcaixas 3x3** também deve conter os dígitos `1-9` sem repetição.  

⚠️ Importante: Apenas as células preenchidas precisam ser verificadas.  
Um tabuleiro válido não significa necessariamente que ele seja **solucionável**.

---

## 🚀 Exemplo

### Entrada:
```cpp

[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

```
### Saída

```
true
```
## 🛠️ Estrutura da Solução

A classe Solution possui o método:
```
bool isValidSudoku(vector<vector<char>>& board);

```
- Verifica linhas usando um unordered_map<char,bool>.

- Verifica colunas da mesma forma.

- Verifica cada subcaixa 3x3 calculando o índice inicial (startRow, startCol) e iterando sobre suas 9 células.