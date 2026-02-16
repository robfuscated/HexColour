import sys
import os
sys.path.insert(0, os.path.join(os.path.dirname(__file__), 'binwalk', 'src'))
import binwalk
if len(sys.argv) == 2:
    binwalk.scan('--signature', sys.argv[1])
elif len(sys.argv) == 3 and sys.argv[1] == '-e':
    binwalk.scan('--signature','--extract', sys.argv[2])
