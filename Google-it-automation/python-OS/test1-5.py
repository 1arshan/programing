import os
def parent_directory():
  # Create a relative path to the parent 
  # of the current working directory 
  #relative_parent = os.path.join(.., os.pardir)

  # Return the absolute path of the parent directory
  return os.path.abspath('..')

print(parent_directory())