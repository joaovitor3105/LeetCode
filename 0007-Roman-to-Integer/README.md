# 🚀 LeetCode - Roman to Integer (13)

## 📌 Problema
Os números romanos são representados por sete símbolos diferentes:  

| Símbolo | Valor |
|---------|-------|
| I       | 1     |
| V       | 5     |
| X       | 10    |
| L       | 50    |
| C       | 100   |
| D       | 500   |
| M       | 1000  |

Por exemplo:  
- `II = 2`  
- `XII = 12`  
- `XXVII = 27`  

Os números romanos normalmente são escritos do **maior para o menor**, mas há exceções:  
- `IV = 4` (5 - 1)  
- `IX = 9` (10 - 1)  
- `XL = 40` (50 - 10)  
- `XC = 90` (100 - 10)  
- `CD = 400` (500 - 100)  
- `CM = 900` (1000 - 100)  

Dado um número romano, converta-o para um número inteiro.

---

## 📖 Exemplos

### Exemplo 1
**Entrada**:  
`s = "III"`  

**Saída**:  
`3`  

---

### Exemplo 2
**Entrada**:  
`s = "LVIII"`  

**Saída**:  
`58`  

**Explicação**:  
`L = 50, V = 5, III = 3`  

---

### Exemplo 3
**Entrada**:  
`s = "MCMXCIV"`  

**Saída**:  
`1994`  

**Explicação**:  
`M = 1000, CM = 900, XC = 90, IV = 4`  

---

## ⚙️ Restrições
- `1 <= s.length <= 15`  
- `s` contém apenas os caracteres `'I', 'V', 'X', 'L', 'C', 'D', 'M'`  
- É garantido que `s` é um número romano válido dentro do intervalo `[1, 3999]`

---


## ✅ Complexidade

- Tempo: O(n) → percorremos todos os caracteres da string uma vez.

- Espaço: O(1) → o hash map tem tamanho fixo de 7 símbolos.