import os

for i in range(3000000):
    with open("commit.txt", "a") as f:
        f.write(f"Commit {i}\n")

    os.system("git add .")
    os.system(f'git commit -m "Commit {i}"')