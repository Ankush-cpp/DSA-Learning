# Simplify Path (LC 71)

## Approach
- Split path using '/'
- Ignore:
  - empty strings
  - "."
- ".." means move back → pop
- Valid folder names → push

## Complexity
- Time: O(n)
- Space: O(n)

## Key Learning
Stack is useful for directory navigation and path simplification.