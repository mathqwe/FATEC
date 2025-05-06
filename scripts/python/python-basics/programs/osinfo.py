import os
import sys

device = sys.platform
user = os.getenv('USER')
py_version = sys.version
home = os.getenv('HOME')
shell = os.getenv('SHELL')
lang = os.getenv('LANG')
desktop_session = os.getenv('DESKTOP_SESSION')

if device == 'linux':
    print(f"Hey {user}, you are on {device}\n")
    print(py_version)
    print(home)
    print(shell)
    print(desktop_session)
    print(lang)
else:
    print("We don't like non-linux users D:")


   
   
