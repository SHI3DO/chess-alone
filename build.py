import subprocess


subprocess.run('pip freeze > requirements.txt', shell=True)