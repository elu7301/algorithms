# 1. Two Sum

## 🟩 Difficulty: Easy

## Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

---

### Examples

**Example 1:**

```
Input:  nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]  
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**

```
Input:  nums = [3, 2, 4], target = 6  
Output: [1, 2]
```

**Example 3:**

```
Input:  nums = [3, 3], target = 6  
Output: [0, 1]
```

---

### Constraints

* `2 <= nums.length <= 10^4`
* `-10^9 <= nums\[i] <= 10^9`
* `-10^9 <= target <= 10^9`
* `Only one valid answer exists.`

---

### Follow-up

Can you come up with an algorithm that is better than **O(n²)** time complexity?

---

## Идея решения

Идем по массиву, для каждого элемента проверяем: есть ли в словаре `target - элемент`. Если да — ответ найден. Если нет — добавляем элемент в словарь.

---

## Сложность

* **Время:** O(n) — один проход по массиву
* **Память:** O(n) — в худшем случае все числа уникальны
