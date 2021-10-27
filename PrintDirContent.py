
def print_directory_contents(sPath):
  import os
  for sChild in os.listdir(sPath):
    sChildPath = os.path.join(sPath, sChild)
    if os.path.isdir(sChildPath):
      print(sChild + "/")
    else:
      print(sChild)

if __name__ == "__main__":
  print_directory_contents('C:/Users/stree/C++ Projects/InterviewPrep')