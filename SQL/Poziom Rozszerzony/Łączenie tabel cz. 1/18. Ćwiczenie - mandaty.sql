SELECT t.ticket_nr, d.first_name, d.last_name, v.model FROM tickets t JOIN drivers d ON t.driver_id = d.id JOIN vehicles v ON t.licence_plate = v.licence_plate;
