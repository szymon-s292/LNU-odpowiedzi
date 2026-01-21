SELECT m.id, m.title, m.rating, mm.rating AS my_rating FROM movies m LEFT JOIN my_movies mm ON m.id = mm.id ORDER BY m.title;
