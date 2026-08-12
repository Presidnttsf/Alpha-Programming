class Playlist:
  def __init__(self, name):
    self.name = name
    self.songs = []

  def add_song(self, song):
    self.songs.append(song)
    print(f"Added: {song}")

  def remove_song(self, song):
    if song in self.songs:
      self.songs.remove(song)
      print(f"Removed: {song}")

  def show_songs(self):
    print(f"Playlist '{self.name}':")
    for i, song  in enumerate(self.songs):
      print(f"{i+1}- {song}")
  
  def __str__(self):
    return f"Playlist '{self.name}': {', '.join(self.songs)}"

my_playlist1 = Playlist("Favorites")
my_playlist1.add_song("Bohemian Rhapsody")
my_playlist1.add_song("Stairway to Heaven")
my_playlist1.show_songs()
my_playlist1.remove_song(my_playlist1.songs[0])
print("after removed")
my_playlist1.show_songs()

print("##########________#######")

my_playlist = Playlist("most played")
my_playlist.add_song("rafi ki yaadien")
my_playlist.add_song("Arijit ki yaadien")
my_playlist.show_songs()


print(my_playlist)
