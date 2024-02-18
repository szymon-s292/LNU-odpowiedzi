def fill_in_data(data):
    s = "Nr. Zamówienia: {}\nNr. Klienta: {}\nImię: {}\nNazwisko: {}"
    return s.format(data['order_id'], data['client_id'], data['name'], data['family_name'])
