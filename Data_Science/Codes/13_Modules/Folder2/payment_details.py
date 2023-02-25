import os, sys
from os.path import dirname , join , abspath

sys.path.insert(0, abspath(join(dirname(__file__),'..')))

from Folder1 import course_details

def payment():
    print("this is my payment details")

course_details.course()