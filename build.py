import os
import shutil
import subprocess


if os.path.isdir('./dist'):
    shutil.rmtree('./dist')

subprocess.run('pip freeze > requirements.txt', shell=True)
subprocess.run('pyinstaller --noconfirm --onefile --windowed --icon '
               '"D:/Github/chess-ai-python-raspberrypi/src/chess-ai-python-raspberrypi-logo.ico"  '
               '"D:/Github/chess-ai-python-raspberrypi/chess-ai-python-raspberrypi-gui-shi3do.py"', shell=True)
shutil.copytree('./src', './dist/src')
print('done')