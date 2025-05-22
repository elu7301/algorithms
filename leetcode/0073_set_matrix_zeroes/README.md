# 73. Set Matrix Zeroes

## 🟧 Difficulty: Medium

## Problem Statement

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its **entire row and column** to `0`'s.

You must do it **in place**.

---

### Examples

**Example 1:**  
![Matrix Example 1](examples/mat1.jpg)

```
Input:  matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
```

**Example 2:**  
![Matrix Example 1](examples/mat2.jpg)

```
Input:  matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
```

---

## Constraints

* `m == matrix.length`
* `n == matrix[0].length`
* `1 <= m, n <= 200`
* `-2^31 <= matrix[i][j] <= 2^31 - 1`

---

## Follow-up

* A straightforward solution uses **O(m + n)** space.
* Can you devise a solution that uses **constant space**?

---

## Идея решения

1. Проверяем, содержит ли первая строка или первый столбец нули.
2. Проходим по остальной части матрицы:

   * Если `matrix[i][j] == 0`, то помечаем строку и столбец с помощью `matrix[i][0] = 0` и `matrix[0][j] = 0`.
3. Вторым проходом обнуляем все элементы, чьи строки или столбцы были помечены.
4. Наконец, обнуляем первую строку и/или первый столбец, если это требуется.

---

## Сложности

* **Время:** O(m × n) — проходим по всей матрице дважды
* **Память:** O(1) — используем саму матрицу как индикаторы (без дополнительного хранилища)
