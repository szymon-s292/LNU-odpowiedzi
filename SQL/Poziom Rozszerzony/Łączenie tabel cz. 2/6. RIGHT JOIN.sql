SELECT c.client_id, c.name, COUNT(call.client_id) AS calls FROM clients c LEFT JOIN calls call ON c.client_id = call.client_id GROUP BY c.client_id ORDER BY calls DESC, c.name;
