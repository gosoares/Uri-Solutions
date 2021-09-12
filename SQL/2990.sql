SELECT e.cpf, e.enome, d.dnome
FROM empregados AS e
INNER JOIN departamentos AS d ON e.dnumero = d.dnumero
LEFT JOIN trabalha AS t ON t.cpf_emp = e.cpf
WHERE t.pnumero is NULL
ORDER BY e.cpf ASC