SELECT c.name 
FROM customers as c
INNER JOIN legal_person as lp ON lp.id_customers = c.id
