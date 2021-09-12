SELECT name,
(
  SELECT COUNT(id)
  FROM matches
  WHERE team_1 = t.id
       OR team_2 = t.id
) AS matches,
(
    SELECT COUNT(id)
    FROM matches
    WHERE (t.id = team_1 AND team_1_goals > team_2_goals)
       OR (t.id = team_2 AND team_2_goals > team_1_goals)
) AS victories,
(
    SELECT COUNT(id)
    FROM matches
    WHERE (t.id = team_1 AND team_1_goals < team_2_goals)
       OR (t.id = team_2 AND team_2_goals < team_1_goals)
) AS defeats,
(
    SELECT COUNT(id)
    FROM matches
    WHERE (t.id = team_1 OR t.id = team_2)
       AND (team_2_goals = team_1_goals)
) AS draws,
(3 * victories + draws) AS score
FROM teams AS t
ORDER BY score DESC