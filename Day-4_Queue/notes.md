# Number of Students Unable to Eat Lunch (LC 1700)

## Approach

- Store all students in a queue.
- Compare front student with current sandwich.
- If preference matches:
  - Student takes sandwich.
  - Remove both.
- Otherwise:
  - Move student to the back of queue.

Use a rotation counter:
- If all remaining students rotate once without taking the current sandwich,
  no one can eat that sandwich.
- Stop simulation.

## Complexity

- Time: O(n²) worst case
- Space: O(n)

## Key Learning

Queue is useful for cyclic processing and simulation problems.

A rotation counter can help detect when progress is no longer possible.