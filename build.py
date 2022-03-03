import os
import shutil
import subprocess


if os.path.isdir('./dist'):
    shutil.rmtree('./dist')

if not os.path.isdir('./release'):
    os.mkdir('./release')

subprocess.run('pip freeze > requirements.txt', shell=True)
subprocess.run('pyinstaller --noconfirm --onefile --windowed --icon '
               '"D:/Github/chess-ai-python-raspberrypi/src/chess-ai-python-raspberrypi-logo.ico"  '
               '"D:/Github/chess-ai-python-raspberrypi/chess-alone.py"', shell=True)
shutil.copytree('./src', './dist/src')
shutil.make_archive('./release/chess-ai-python-raspberrypi-shi3do', 'zip', './dist')
print('done')