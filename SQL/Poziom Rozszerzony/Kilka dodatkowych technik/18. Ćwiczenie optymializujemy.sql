/* pierwszy kod */
CREATE INDEX idx_name_artists ON Artists(name);
/* drugi kod */
CREATE INDEX idx_artist_artworks ON Artworks(artist);
/* trzeci kod */
SELECT title, artist, year_of_birth
FROM Artworks
JOIN Artists ON name = artist
WHERE artist IN ("Powell, Joseph", "Singleton, Henry", "Cristall, Joshua");
/* czwarty kod */
SELECT title, artist, year_of_birth FROM Artworks JOIN Artists ON name = artist WHERE artist IN ("Powell, Joseph", "Singleton, Henry", "Cristall, Joshua");
