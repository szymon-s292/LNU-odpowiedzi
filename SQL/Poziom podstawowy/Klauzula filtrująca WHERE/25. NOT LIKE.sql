SELECT title, director, rating FROM movies WHERE id IN (SELECT id FROM my_movies) AND "cast" NOT LIKE '' ORDER BY rating DESC;
