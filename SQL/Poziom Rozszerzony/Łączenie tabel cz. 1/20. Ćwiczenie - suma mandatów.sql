SELECT d.first_name, d.last_name, SUM(t.fine) AS sum FROM drivers d JOIN tickets t ON d.id = t.driver_id GROUP BY d.id ORDER BY sum DESC;
