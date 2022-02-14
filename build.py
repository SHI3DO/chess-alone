import subprocess


subprocess.run('pip freeze > requirements.txt', shell=True)
subprocess.run('pyinstaller --noconfirm --onefile --console  "D:/Github/chess-ai-python-raspberrypi/chess.py"', shell=True)