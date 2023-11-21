SELECT lg.name, round((lg.omega * 1.618), 3) AS "Fator N"
FROM life_registry AS lg
INNER JOIN dimensions AS d ON d.id = lg.dimensions_id
WHERE d.name IN ('C875', 'C774')
    AND lg.name LIKE 'Richard%'
ORDER BY lg.omega ASC