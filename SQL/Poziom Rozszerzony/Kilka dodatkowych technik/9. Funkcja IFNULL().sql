SELECT brand, model, system, IFNULL(discount_price, regular_price) price FROM cell_phones;