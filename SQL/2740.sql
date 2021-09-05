(
    SELECT CONCAT('Podium: ', team) AS name
    FROM league
    ORDER BY position ASC
    LIMIT 3
) UNION ALL (
    SELECT CONCAT('Demoted: ', team) AS name
    FROM league
    WHERE position IN (
      SELECT position FROM league
      ORDER BY position DESC
      LIMIT 2
    )
    ORDER BY position ASC
)