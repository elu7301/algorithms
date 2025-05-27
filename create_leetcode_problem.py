import os
import re


def normalize_leetcode_name(raw_name: str) -> str:
    raw_name = raw_name.strip().replace("-", " ")
    match = re.match(r"^(\d+)\.\s*(.+)", raw_name)
    if not match:
        raise ValueError("Название должно начинаться с номера и точки, например: '11. Container With Most Water'")

    number = match.group(1).zfill(4)
    title = match.group(2)

    title_snake = re.sub(r"[^\w\s]", "", title)
    title_snake = re.sub(r"\s+", "_", title_snake.strip())
    title_snake = title_snake.lower()

    return f"{number}_{title_snake}"


def create_leetcode_folder():
    raw_name = input("Введите название задачи с LeetCode (например, '11. Container With Most Water'): ").strip()

    try:
        folder_name = normalize_leetcode_name(raw_name)
    except ValueError as e:
        print(f"❌ Ошибка: {e}")
        return

    base_dir = os.path.join("leetcode", folder_name)
    os.makedirs(base_dir, exist_ok=True)

    open(os.path.join(base_dir, "solution.cpp"), "a").close()
    open(os.path.join(base_dir, "README.md"), "a").close()

    print(f"✅ Папка создана: {base_dir}/ (solution.cpp, README.md)")


if __name__ == "__main__":
    create_leetcode_folder()
