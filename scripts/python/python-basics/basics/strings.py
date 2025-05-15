# strings methods
smiths_songs = [
  " I kwnow it's over  ",
  "Meat IS MURDER   ",
  "   THIS CHARMING man  ",
  "   ThE HEadMaster RITUAL   " 
]

for song in smiths_songs:
  song = song.strip()       #str.strip() - remove spaces at the beggining and at the end of the string

def main():
  for song in smiths_songs:
    print(song.capitalize())#str.capitalize() - make the first character in string uppercase, and the rest lower

  print("\n\n\n")

  for song in smiths_songs:
    print(song.title())     #str.title() - Make the fisrt letter in uppercase

  for song in smiths_songs:
    print(song.upper())     #str.upper() - All letters in uppercase

  print("\n\n\n")

  for song in smiths_songs:
    print(song.lower())     #str.lower() - All letters in lowercase


main()