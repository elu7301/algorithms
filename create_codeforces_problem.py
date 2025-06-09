import os
import re


def normalize_name(raw: str) -> str:
    raw = re.sub(r"[^\w\s]", "", raw)
    raw = re.sub(r"\s+", "_", raw.strip())
    return raw.lower()


def create_codeforces_folder():
    contest_raw = input("Введите название контеста (например, 'Codeforces Round 1029 (Div. 3)'): ").strip()
    contest_folder = normalize_name(contest_raw)
    base_dir = os.path.join("codeforces", contest_folder)

    if os.path.exists(base_dir):
        print(f"⚠️ Контест уже существует: {base_dir}/")
    else:
        os.makedirs(base_dir)
        print(f"✅ Контест создан: {base_dir}/")

    print("Теперь вводите задачи в формате 'A\tНазвание задачи' (пустая строка — завершение):")
    while True:
        line = input("‣ ").strip()
        if not line:
            break

        if "\t" in line:
            code, title = line.split("\t", 1)
        elif "  " in line:
            code, title = line.split("  ", 1)
        elif " " in line:
            code, title = line.split(" ", 1)
        else:
            print("❌ Ввод должен быть в формате 'A   Название задачи'")
            continue

        code = normalize_name(code)
        title = normalize_name(title)
        task_folder = f"{code}_{title}"
        task_dir = os.path.join(base_dir, task_folder)

        if os.path.exists(task_dir):
            print(f"🔁 Задача уже существует: {task_folder}/")
        else:
            os.makedirs(task_dir)
            open(os.path.join(task_dir, "solution.cpp"), "a").close()
            open(os.path.join(task_dir, "README.md"), "a").close()
            print(f"✅ Добавлена задача: {task_folder}/")

    print(f"🎯 Все задачи добавлены в: {base_dir}/")


if __name__ == "__main__":
    create_codeforces_folder()
